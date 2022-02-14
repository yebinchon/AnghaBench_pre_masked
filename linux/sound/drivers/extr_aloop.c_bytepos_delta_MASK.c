
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loopback_pcm {unsigned int irq_pos; unsigned int pcm_bps; unsigned int last_drift; unsigned int period_size_frac; int period_update_pending; } ;


 unsigned long FUNC_0 (struct loopback_pcm*,unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct loopback_pcm *VAR_0,
      unsigned int VAR_1)
{
 unsigned long VAR_2;
 unsigned int VAR_3;

 VAR_2 = FUNC_0(VAR_0, VAR_0->irq_pos);
 VAR_0->irq_pos += VAR_1 * VAR_0->pcm_bps;
 VAR_3 = FUNC_0(VAR_0, VAR_0->irq_pos) - VAR_2;
 if (VAR_3 >= VAR_0->last_drift)
  VAR_3 -= VAR_0->last_drift;
 VAR_0->last_drift = 0;
 if (VAR_0->irq_pos >= VAR_0->period_size_frac) {
  VAR_0->irq_pos %= VAR_0->period_size_frac;
  VAR_0->period_update_pending = 1;
 }
 return VAR_3;
}
