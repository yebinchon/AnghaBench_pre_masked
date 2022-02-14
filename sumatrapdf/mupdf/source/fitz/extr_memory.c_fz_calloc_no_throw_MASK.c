
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 size_t VAR_0 ;
 void* FUNC_0 (int *,size_t) ;
 int FUNC_1 (void*,int ,size_t) ;

void *
FUNC_2(fz_context *VAR_1, size_t VAR_2, size_t VAR_3)
{
 void *VAR_4;
 if (VAR_2 == 0 || VAR_3 == 0)
  return ((void*)0);
 if (VAR_2 > VAR_0 / VAR_3)
  return ((void*)0);
 VAR_4 = FUNC_0(VAR_1, VAR_2 * VAR_3);
 if (VAR_4)
  FUNC_1(VAR_4, 0, VAR_2 * VAR_3);
 return VAR_4;
}
