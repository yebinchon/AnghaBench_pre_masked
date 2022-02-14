
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xps_resource ;
typedef int xps_document ;
typedef int fz_xml ;
typedef int fz_context ;


 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (char*,char) ;
 char* FUNC_2 (char*,char*) ;
 int * FUNC_3 (int *,int *,int *,char*,char**) ;

__attribute__((used)) static fz_xml *
FUNC_4(fz_context *VAR_0, xps_document *VAR_1, xps_resource *VAR_2, char *VAR_3, char **VAR_4)
{
 char VAR_5[1024];
 char *VAR_6;

 if (FUNC_2(VAR_3, "{StaticResource ") != VAR_3)
  return ((void*)0);

 FUNC_0(VAR_5, VAR_3 + 16, sizeof VAR_5);
 VAR_6 = FUNC_1(VAR_5, '}');
 if (VAR_6)
  *VAR_6 = 0;

 return FUNC_3(VAR_0, VAR_1, VAR_2, VAR_5, VAR_4);
}
