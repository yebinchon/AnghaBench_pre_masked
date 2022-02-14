
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xps_document ;
typedef int fz_xml ;
typedef int fz_matrix ;
typedef int fz_context ;


 int VAR_0 ;
 char* FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int *,char*) ;

__attribute__((used)) static fz_matrix
FUNC_3(fz_context *VAR_1, xps_document *VAR_2, fz_xml *VAR_3)
{
 if (FUNC_1(VAR_3, "MatrixTransform"))
 {
  char *VAR_4 = FUNC_0(VAR_3, "Matrix");
  if (VAR_4)
   return FUNC_2(VAR_1, VAR_2, VAR_4);
 }
 return VAR_0;
}
