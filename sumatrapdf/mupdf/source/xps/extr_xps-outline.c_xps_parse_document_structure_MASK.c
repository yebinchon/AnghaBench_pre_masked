
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xps_document ;
typedef int fz_xml ;
typedef int fz_outline ;
typedef int fz_context ;


 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,int *,int *) ;

__attribute__((used)) static fz_outline *
FUNC_3(fz_context *VAR_0, xps_document *VAR_1, fz_xml *VAR_2)
{
 fz_xml *VAR_3;
 if (FUNC_1(VAR_2, "DocumentStructure"))
 {
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3 && FUNC_1(VAR_3, "DocumentStructure.Outline"))
  {
   VAR_3 = FUNC_0(VAR_3);
   if (VAR_3 && FUNC_1(VAR_3, "DocumentOutline"))
    return FUNC_2(VAR_0, VAR_1, VAR_3);
  }
 }
 return ((void*)0);
}
