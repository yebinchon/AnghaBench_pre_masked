
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct obs_encoder {size_t blocksize; scalar_t__ samplerate; } ;



__attribute__((used)) static inline size_t FUNC_0(struct obs_encoder *VAR_0,
          uint64_t VAR_1, uint64_t VAR_2)
{
 uint64_t VAR_3 = VAR_1 - VAR_2;
 VAR_3 = (uint64_t)VAR_3 * (uint64_t)VAR_0->samplerate /
   1000000000ULL;
 return (size_t)VAR_3 * VAR_0->blocksize;
}
