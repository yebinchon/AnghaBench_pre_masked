
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; scalar_t__ ft_face; } ;
typedef TYPE_1__ fz_font ;
typedef int fz_context ;
typedef scalar_t__ FT_Face ;


 int FUNC_0 (scalar_t__,int,char*,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (int *,char*,int ,int,int ) ;

void
FUNC_5(fz_context *VAR_0, fz_font *VAR_1, int VAR_2, char *VAR_3, int VAR_4)
{
 FT_Face VAR_5 = VAR_1->ft_face;
 if (VAR_5)
 {
  if (FUNC_1(VAR_5))
  {
   int VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_3, VAR_4);
   if (VAR_6)
    FUNC_4(VAR_0, "FT_Get_Glyph_Name(%s,%d): %s", VAR_1->name, VAR_2, FUNC_2(VAR_6));
  }
  else
   FUNC_3(VAR_3, VAR_4, "%d", VAR_2);
 }
 else
 {
  FUNC_3(VAR_3, VAR_4, "%d", VAR_2);
 }
}
