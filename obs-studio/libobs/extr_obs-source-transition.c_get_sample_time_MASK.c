
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef int obs_source_t ;


 float FUNC_0 (int *,unsigned long long) ;

__attribute__((used)) static inline float FUNC_1(obs_source_t *VAR_0,
        size_t VAR_1, size_t VAR_2,
        uint64_t VAR_3)
{
 uint64_t VAR_4 =
  (uint64_t)VAR_2 * 1000000000ULL / (uint64_t)VAR_1;
 uint64_t VAR_5 = VAR_3 + VAR_4;
 return FUNC_0(VAR_0, VAR_5);
}
