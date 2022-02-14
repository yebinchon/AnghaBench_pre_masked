
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 void* FUNC_0 (int *,size_t) ;
 int FUNC_1 (void*,void*,size_t) ;

__attribute__((used)) static void *
FUNC_2(fz_context *VAR_0, void *VAR_1, size_t VAR_2)
{
 void *VAR_3;

 if (VAR_2 == 0 || VAR_1 == ((void*)0))
  return ((void*)0);

 VAR_3 = FUNC_0(VAR_0, VAR_2);
 FUNC_1(VAR_3, VAR_1, VAR_2);
 return VAR_3;
}
