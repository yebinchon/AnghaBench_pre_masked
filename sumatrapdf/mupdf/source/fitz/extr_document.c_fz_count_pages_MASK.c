
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_document ;
typedef int fz_context ;


 scalar_t__ FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *) ;

int
FUNC_2(fz_context *VAR_0, fz_document *VAR_1)
{
 int VAR_2, VAR_3, VAR_4 = 0;
 VAR_3 = FUNC_1(VAR_0, VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2)
  VAR_4 += FUNC_0(VAR_0, VAR_1, VAR_2);
 return VAR_4;
}
