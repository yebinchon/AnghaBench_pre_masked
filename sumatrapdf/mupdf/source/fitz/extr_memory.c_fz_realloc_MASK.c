
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 int VAR_0 ;
 void* FUNC_0 (int *,void*,size_t) ;
 int FUNC_1 (int *,void*) ;
 int FUNC_2 (int *,int ,char*,size_t) ;

void *
FUNC_3(fz_context *VAR_1, void *VAR_2, size_t VAR_3)
{
 if (VAR_3 == 0)
 {
  FUNC_1(VAR_1, VAR_2);
  return ((void*)0);
 }
 VAR_2 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (!VAR_2)
  FUNC_2(VAR_1, VAR_0, "realloc (%zu bytes) failed", VAR_3);
 return VAR_2;
}
