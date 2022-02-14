
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loopback_pcm {unsigned long long pcm_rate_shift; } ;


 unsigned int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned int FUNC_0 (unsigned long long,unsigned long long) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct loopback_pcm *VAR_2, unsigned int VAR_3)
{
 if (VAR_2->pcm_rate_shift == VAR_1) {
  return VAR_3 * VAR_0;
 } else {
  VAR_3 = FUNC_0(VAR_2->pcm_rate_shift * (unsigned long long)VAR_3 * VAR_0,
       VAR_1);
 }
 return VAR_3;
}
