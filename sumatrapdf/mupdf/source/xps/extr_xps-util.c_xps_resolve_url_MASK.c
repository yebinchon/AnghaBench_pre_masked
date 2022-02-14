
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xps_document ;
typedef int fz_context ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 size_t FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

void
FUNC_5(fz_context *VAR_0, xps_document *VAR_1, char *VAR_2, char *VAR_3, char *VAR_4, int VAR_5)
{
 char *VAR_6 = FUNC_3(FUNC_4(VAR_4));

 if (VAR_6 != VAR_4 || VAR_4[0] == '/')
 {
  FUNC_2(VAR_2, VAR_4, VAR_5);
 }
 else
 {
  size_t VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_5);
  if (VAR_7 == 0 || VAR_2[VAR_7-1] != '/')
   FUNC_1(VAR_2, "/", VAR_5);
  FUNC_1(VAR_2, VAR_4, VAR_5);
 }
 FUNC_0(VAR_2);
}
