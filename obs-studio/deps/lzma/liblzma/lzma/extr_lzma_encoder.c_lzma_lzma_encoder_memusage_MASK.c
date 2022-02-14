
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const uint64_t ;
typedef int lzma_lz_options ;
typedef int lzma_coder ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (void const*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,void const*) ;

extern uint64_t
FUNC_3(const void *VAR_1)
{
 if (!FUNC_0(VAR_1))
  return VAR_0;

 lzma_lz_options VAR_2;
 FUNC_2(&VAR_2, VAR_1);

 const uint64_t VAR_3 = FUNC_1(&VAR_2);
 if (VAR_3 == VAR_0)
  return VAR_0;

 return (uint64_t)(sizeof(lzma_coder)) + VAR_3;
}
