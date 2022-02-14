
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_info_buffer {int dummy; } ;
struct TYPE_2__ {char const* expires; } ;
struct loopback_pcm {char const* pcm_buffer_size; char const* buf_pos; char const* silent_size; char const* pcm_period_size; char const* pcm_bps; char const* pcm_salign; char const* pcm_rate_shift; char const* period_update_pending; char const* irq_pos; char const* period_size_frac; TYPE_1__ timer; int last_jiffies; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct snd_info_buffer *VAR_1,
       struct loopback_pcm *VAR_2,
       const char *VAR_3)
{
 FUNC_0(VAR_1, "  %s\n", VAR_3);
 if (VAR_2 == ((void*)0)) {
  FUNC_0(VAR_1, "    inactive\n");
  return;
 }
 FUNC_0(VAR_1, "    buffer_size:\t%u\n", VAR_2->pcm_buffer_size);
 FUNC_0(VAR_1, "    buffer_pos:\t\t%u\n", VAR_2->buf_pos);
 FUNC_0(VAR_1, "    silent_size:\t%u\n", VAR_2->silent_size);
 FUNC_0(VAR_1, "    period_size:\t%u\n", VAR_2->pcm_period_size);
 FUNC_0(VAR_1, "    bytes_per_sec:\t%u\n", VAR_2->pcm_bps);
 FUNC_0(VAR_1, "    sample_align:\t%u\n", VAR_2->pcm_salign);
 FUNC_0(VAR_1, "    rate_shift:\t\t%u\n", VAR_2->pcm_rate_shift);
 FUNC_0(VAR_1, "    update_pending:\t%u\n",
      VAR_2->period_update_pending);
 FUNC_0(VAR_1, "    irq_pos:\t\t%u\n", VAR_2->irq_pos);
 FUNC_0(VAR_1, "    period_frac:\t%u\n", VAR_2->period_size_frac);
 FUNC_0(VAR_1, "    last_jiffies:\t%lu (%lu)\n",
     VAR_2->last_jiffies, VAR_0);
 FUNC_0(VAR_1, "    timer_expires:\t%lu\n", VAR_2->timer.expires);
}
