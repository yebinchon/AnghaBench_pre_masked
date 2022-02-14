
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 int VAR_0 ;
 void* FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *,int ,char*,size_t) ;

void *
FUNC_2(fz_context *VAR_1, size_t VAR_2)
{
 void *VAR_3;
 if (VAR_2 == 0)
  return ((void*)0);
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_3)
  FUNC_1(VAR_1, VAR_0, "malloc of %zu bytes failed", VAR_2);
 return VAR_3;
}
