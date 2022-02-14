
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_output ;
typedef int fz_font ;
typedef int fz_context ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,char*) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, fz_output *VAR_1, fz_font *VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_2(VAR_0, VAR_2);
 int VAR_5 = FUNC_0(VAR_0, VAR_2);
 int VAR_6 = FUNC_1(VAR_0, VAR_2);

 if (VAR_3)
  FUNC_3(VAR_0, VAR_1, "<sup>");
 if (VAR_4)
  FUNC_3(VAR_0, VAR_1, "<tt>");
 if (VAR_5)
  FUNC_3(VAR_0, VAR_1, "<b>");
 if (VAR_6)
  FUNC_3(VAR_0, VAR_1, "<i>");
}
