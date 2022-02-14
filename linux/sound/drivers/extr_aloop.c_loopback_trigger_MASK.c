
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct loopback_pcm* private_data; } ;
struct loopback_pcm {void* last_jiffies; int last_drift; int pcm_rate_shift; struct loopback_cable* cable; } ;
struct loopback_cable {int running; int pause; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;






 void* VAR_2 ;
 int FUNC_0 (struct loopback_pcm*) ;
 int FUNC_1 (struct loopback_cable*,int) ;
 int FUNC_2 (struct loopback_pcm*) ;
 int FUNC_3 (struct loopback_pcm*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_3, int VAR_4)
{
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;
 struct loopback_pcm *VAR_6 = VAR_5->private_data;
 struct loopback_cable *VAR_7 = VAR_6->cable;
 int VAR_8, VAR_9 = 1 << VAR_3->stream;

 switch (VAR_4) {
 case 130:
  VAR_8 = FUNC_1(VAR_7, VAR_3->stream);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_6->last_jiffies = VAR_2;
  VAR_6->pcm_rate_shift = 0;
  VAR_6->last_drift = 0;
  FUNC_4(&VAR_7->lock);
  VAR_7->running |= VAR_9;
  VAR_7->pause &= ~VAR_9;
  FUNC_2(VAR_6);
  FUNC_5(&VAR_7->lock);
  if (VAR_3->stream == VAR_1)
   FUNC_0(VAR_6);
  break;
 case 129:
  FUNC_4(&VAR_7->lock);
  VAR_7->running &= ~VAR_9;
  VAR_7->pause &= ~VAR_9;
  FUNC_3(VAR_6);
  FUNC_5(&VAR_7->lock);
  if (VAR_3->stream == VAR_1)
   FUNC_0(VAR_6);
  break;
 case 133:
 case 128:
  FUNC_4(&VAR_7->lock);
  VAR_7->pause |= VAR_9;
  FUNC_3(VAR_6);
  FUNC_5(&VAR_7->lock);
  if (VAR_3->stream == VAR_1)
   FUNC_0(VAR_6);
  break;
 case 132:
 case 131:
  FUNC_4(&VAR_7->lock);
  VAR_6->last_jiffies = VAR_2;
  VAR_7->pause &= ~VAR_9;
  FUNC_2(VAR_6);
  FUNC_5(&VAR_7->lock);
  if (VAR_3->stream == VAR_1)
   FUNC_0(VAR_6);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
