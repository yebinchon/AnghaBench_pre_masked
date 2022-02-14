
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rnd_state {int s1; int s2; int s3; int s4; } ;


 void* FUNC_0 (int,unsigned int,unsigned int,unsigned int,unsigned int) ;

u32 FUNC_1(struct rnd_state *VAR_0)
{

 VAR_0->s1 = ((VAR_0->s1 & 4294967294U) << 18U) ^ (((VAR_0->s1 << 6U) ^ VAR_0->s1) >> 13U);
 VAR_0->s2 = ((VAR_0->s2 & 4294967288U) << 2U) ^ (((VAR_0->s2 << 2U) ^ VAR_0->s2) >> 27U);
 VAR_0->s3 = ((VAR_0->s3 & 4294967280U) << 7U) ^ (((VAR_0->s3 << 13U) ^ VAR_0->s3) >> 21U);
 VAR_0->s4 = ((VAR_0->s4 & 4294967168U) << 13U) ^ (((VAR_0->s4 << 3U) ^ VAR_0->s4) >> 12U);

 return (VAR_0->s1 ^ VAR_0->s2 ^ VAR_0->s3 ^ VAR_0->s4);
}
