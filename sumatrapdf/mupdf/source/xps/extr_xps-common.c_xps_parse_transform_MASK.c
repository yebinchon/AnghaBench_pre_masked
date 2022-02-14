
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xps_document ;
typedef int fz_xml ;
typedef int fz_matrix ;
typedef int fz_context ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *,char*) ;

fz_matrix
FUNC_3(fz_context *VAR_0, xps_document *VAR_1, char *VAR_2, fz_xml *VAR_3, fz_matrix VAR_4)
{
 if (VAR_2)
  return FUNC_0(FUNC_2(VAR_0, VAR_1, VAR_2), VAR_4);
 if (VAR_3)
  return FUNC_0(FUNC_1(VAR_0, VAR_1, VAR_3), VAR_4);
 return VAR_4;
}
