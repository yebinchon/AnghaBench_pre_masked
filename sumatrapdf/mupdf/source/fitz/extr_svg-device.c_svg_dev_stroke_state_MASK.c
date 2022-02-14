
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * out; } ;
typedef TYPE_1__ svg_device ;
struct TYPE_6__ {float linewidth; scalar_t__ start_cap; scalar_t__ dash_len; char* dash_phase; scalar_t__ linejoin; char* miterlimit; int * dash_list; } ;
typedef TYPE_2__ fz_stroke_state ;
typedef int fz_output ;
typedef int fz_matrix ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 float FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,char*,...) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_6, svg_device *VAR_7, const fz_stroke_state *VAR_8, fz_matrix VAR_9)
{
 fz_output *VAR_10 = VAR_7->out;
 float VAR_11;

 VAR_11 = FUNC_0(VAR_9);
 if (VAR_11 == 0)
  VAR_11 = 1;
 VAR_11 = VAR_8->linewidth/VAR_11;

 FUNC_1(VAR_6, VAR_10, " stroke-width=\"%g\"", VAR_11);
 FUNC_1(VAR_6, VAR_10, " stroke-linecap=\"%s\"",
  (VAR_8->start_cap == VAR_1 ? "square" :
   (VAR_8->start_cap == VAR_0 ? "round" : "butt")));
 if (VAR_8->dash_len != 0)
 {
  int VAR_12;
  FUNC_1(VAR_6, VAR_10, " stroke-dasharray=");
  for (VAR_12 = 0; VAR_12 < VAR_8->dash_len; VAR_12++)
   FUNC_1(VAR_6, VAR_10, "%c%g", (VAR_12 == 0 ? '\"' : ','), VAR_8->dash_list[VAR_12]);
  FUNC_1(VAR_6, VAR_10, "\"");
  if (VAR_8->dash_phase != 0)
   FUNC_1(VAR_6, VAR_10, " stroke-dashoffset=\"%g\"", VAR_8->dash_phase);
 }
 if (VAR_8->linejoin == VAR_3 || VAR_8->linejoin == VAR_4)
  FUNC_1(VAR_6, VAR_10, " stroke-miterlimit=\"%g\"", VAR_8->miterlimit);
 FUNC_1(VAR_6, VAR_10, " stroke-linejoin=\"%s\"",
  (VAR_8->linejoin == VAR_2 ? "bevel" :
   (VAR_8->linejoin == VAR_5 ? "round" : "miter")));
}
