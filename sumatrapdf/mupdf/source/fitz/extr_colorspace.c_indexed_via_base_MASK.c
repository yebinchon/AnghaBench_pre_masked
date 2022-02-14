
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_9__ {unsigned char* lookup; int high; TYPE_1__* base; } ;
struct TYPE_10__ {TYPE_2__ indexed; } ;
struct TYPE_11__ {TYPE_3__ u; } ;
typedef TYPE_4__ fz_colorspace ;
struct TYPE_12__ {int (* convert_via ) (int *,TYPE_5__*,float*,float*) ;TYPE_4__* ss_via; } ;
typedef TYPE_5__ fz_color_converter ;
struct TYPE_8__ {int n; scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int *,TYPE_5__*,float*,float*) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_1, fz_color_converter *VAR_2, const float *VAR_3, float *VAR_4)
{
 fz_colorspace *VAR_5 = VAR_2->ss_via;
 const unsigned char *VAR_6 = VAR_5->u.indexed.lookup;
 int VAR_7 = VAR_5->u.indexed.high;
 int VAR_8 = VAR_5->u.indexed.base->n;
 float VAR_9[4];
 int VAR_10, VAR_11;

 VAR_10 = VAR_3[0] * 255;
 VAR_10 = FUNC_0(VAR_10, 0, VAR_7);
 if (VAR_5->u.indexed.base->type == VAR_0)
 {
  VAR_9[0] = VAR_6[VAR_10 * 3 + 0] * 100 / 255.0f;
  VAR_9[1] = VAR_6[VAR_10 * 3 + 1] - 128;
  VAR_9[2] = VAR_6[VAR_10 * 3 + 2] - 128;
 }
 else
 {
  for (VAR_11 = 0; VAR_11 < VAR_8; ++VAR_11)
   VAR_9[VAR_11] = VAR_6[VAR_10 * VAR_8 + VAR_11] / 255.0f;
 }

 VAR_2->convert_via(VAR_1, VAR_2, VAR_9, VAR_4);
}
