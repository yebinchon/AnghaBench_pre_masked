
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ft_face; } ;
typedef TYPE_1__ fz_font ;
typedef int fz_context ;


 int FUNC_0 (scalar_t__,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_1__*,int) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int) ;

int
FUNC_5(fz_context *VAR_2, fz_font *VAR_3, int VAR_4)
{
 if (VAR_3->ft_face)
 {
  int VAR_5 = FUNC_4(VAR_4);
  if (VAR_5 == VAR_0 || VAR_5 == VAR_1)
  {
   int VAR_6;
   const char *VAR_7;
   char VAR_8[20];

   VAR_7 = FUNC_2(VAR_4);
   if (VAR_7)
   {
    VAR_6 = FUNC_0(VAR_3->ft_face, (char*)VAR_7);
    if (VAR_6 > 0)
     return VAR_6;
   }

   FUNC_3(VAR_8, "uni%04X.sc", VAR_4);
   VAR_6 = FUNC_0(VAR_3->ft_face, VAR_8);
   if (VAR_6 > 0)
    return VAR_6;
  }
 }
 return FUNC_1(VAR_2, VAR_3, VAR_4);
}
