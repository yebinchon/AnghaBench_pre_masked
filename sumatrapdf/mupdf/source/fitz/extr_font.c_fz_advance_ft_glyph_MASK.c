
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ft_stretch; } ;
struct TYPE_6__ {float* width_table; int width_count; float width_default; scalar_t__ ft_face; int name; TYPE_1__ flags; } ;
typedef TYPE_2__ fz_font ;
typedef int fz_context ;
struct TYPE_7__ {float units_per_EM; } ;
typedef scalar_t__ FT_Fixed ;
typedef TYPE_3__* FT_Face ;
typedef scalar_t__ FT_Error ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int,int,scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,int ,int,int ) ;

__attribute__((used)) static float
FUNC_5(fz_context *VAR_6, fz_font *VAR_7, int VAR_8, int VAR_9)
{
 FT_Error VAR_10;
 FT_Fixed VAR_11 = 0;
 int VAR_12;


 if (VAR_7->flags.ft_stretch)
 {
  if (VAR_7->width_table)
  {
   if (VAR_8 < VAR_7->width_count)
    return VAR_7->width_table[VAR_8] / 1000.0f;
   return VAR_7->width_default / 1000.0f;
  }
 }

 VAR_12 = VAR_3 | VAR_2 | VAR_1;
 if (VAR_9)
  VAR_12 |= VAR_4;
 FUNC_2(VAR_6, VAR_5);
 VAR_10 = FUNC_0(VAR_7->ft_face, VAR_8, VAR_12, &VAR_11);
 FUNC_3(VAR_6, VAR_5);
 if (VAR_10 && VAR_10 != VAR_0)
 {
  FUNC_4(VAR_6, "FT_Get_Advance(%s,%d): %s", VAR_7->name, VAR_8, FUNC_1(VAR_10));
  if (VAR_7->width_table)
  {
   if (VAR_8 < VAR_7->width_count)
    return VAR_7->width_table[VAR_8] / 1000.0f;
   return VAR_7->width_default / 1000.0f;
  }
 }
 return (float) VAR_11 / ((FT_Face)VAR_7->ft_face)->units_per_EM;
}
