
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 int VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *,int ,char*,size_t,size_t) ;
 int FUNC_2 (void*,int ,size_t) ;

void *
FUNC_3(fz_context *VAR_2, size_t VAR_3, size_t VAR_4)
{
 void *VAR_5;
 if (VAR_3 == 0 || VAR_4 == 0)
  return ((void*)0);
 if (VAR_3 > VAR_1 / VAR_4)
  FUNC_1(VAR_2, VAR_0, "calloc (%zu x %zu bytes) failed (size_t overflow)", VAR_3, VAR_4);
 VAR_5 = FUNC_0(VAR_2, VAR_3 * VAR_4);
 if (!VAR_5)
  FUNC_1(VAR_2, VAR_0, "calloc (%zu x %zu bytes) failed", VAR_3, VAR_4);
 FUNC_2(VAR_5, 0, VAR_3*VAR_4);
 return VAR_5;
}
