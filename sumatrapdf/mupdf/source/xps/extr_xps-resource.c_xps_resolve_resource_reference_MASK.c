
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xps_resource ;
typedef int xps_document ;
typedef int fz_xml ;
typedef int fz_context ;


 int * FUNC_0 (int *,int *,int *,char*,char**) ;

void
FUNC_1(fz_context *VAR_0, xps_document *VAR_1, xps_resource *VAR_2,
  char **VAR_3, fz_xml **VAR_4, char **VAR_5)
{
 if (*VAR_3)
 {
  fz_xml *VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, *VAR_3, VAR_5);
  if (VAR_6)
  {
   *VAR_3 = ((void*)0);
   *VAR_4 = VAR_6;
  }
 }
}
