
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mempool_t ;
typedef int mempool_free_t ;
typedef int mempool_alloc_t ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ,int) ;
 scalar_t__ FUNC_2 (int *,int,int *,int *,void*,int ,int) ;

mempool_t *FUNC_3(int VAR_0, mempool_alloc_t *VAR_1,
          mempool_free_t *VAR_2, void *VAR_3,
          gfp_t VAR_4, int VAR_5)
{
 mempool_t *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_4, VAR_5);
 if (!VAR_6)
  return ((void*)0);

 if (FUNC_2(VAR_6, VAR_0, VAR_1, VAR_2, VAR_3,
         VAR_4, VAR_5)) {
  FUNC_0(VAR_6);
  return ((void*)0);
 }

 return VAR_6;
}
