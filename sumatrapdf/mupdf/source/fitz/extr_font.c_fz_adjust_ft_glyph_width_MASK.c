
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int fz_matrix ;
struct TYPE_5__ {scalar_t__ ft_stretch; } ;
struct TYPE_6__ {float* width_table; int width_count; float width_default; scalar_t__ ft_face; int name; TYPE_1__ flags; } ;
typedef TYPE_2__ fz_font ;
typedef int fz_context ;
struct TYPE_7__ {float units_per_EM; } ;
typedef float FT_Fixed ;
typedef TYPE_3__* FT_Face ;
typedef scalar_t__ FT_Error ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int,int,float*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,float,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char*,int ,int,int ) ;

__attribute__((used)) static fz_matrix *
FUNC_6(fz_context *VAR_5, fz_font *VAR_6, int VAR_7, fz_matrix *VAR_8)
{

 if (VAR_6->flags.ft_stretch && VAR_6->width_table )
 {
  FT_Error VAR_9;
  FT_Fixed VAR_10 = 0;
  float VAR_11;
  float VAR_12;

  FUNC_2(VAR_5, VAR_4);
  VAR_9 = FUNC_0(VAR_6->ft_face, VAR_7, VAR_3 | VAR_2 | VAR_1, &VAR_10);
  FUNC_4(VAR_5, VAR_4);
  if (VAR_9 && VAR_9 != VAR_0)
   FUNC_5(VAR_5, "FT_Get_Advance(%s,%d): %s", VAR_6->name, VAR_7, FUNC_1(VAR_9));

  VAR_12 = VAR_10 * 1000.0f / ((FT_Face)VAR_6->ft_face)->units_per_EM;
  if (VAR_7 < VAR_6->width_count)
   VAR_11 = VAR_6->width_table[VAR_7];
  else
   VAR_11 = VAR_6->width_default;


  if (VAR_12 > 0 && VAR_11 > 0)
   *VAR_8 = FUNC_3(*VAR_8, VAR_11 / VAR_12, 1);
 }

 return VAR_8;
}
