
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int audio_t ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline size_t FUNC_1(audio_t *VAR_0, uint64_t VAR_1)
{
 uint32_t VAR_2 = FUNC_0(VAR_0);
 return (size_t)(VAR_1 * (uint64_t)VAR_2 / 1000000000ULL);
}
