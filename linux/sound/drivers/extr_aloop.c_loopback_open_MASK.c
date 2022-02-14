
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {size_t number; size_t stream; struct loopback* private_data; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {void* hw; int private_free; struct loopback_pcm* private_data; } ;
struct loopback_pcm {struct loopback_cable* cable; int timer; struct snd_pcm_substream* substream; struct loopback* loopback; } ;
struct loopback_cable {int lock; struct loopback_pcm** streams; void* hw; } ;
struct loopback {int cable_lock; struct loopback_cable*** cables; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_2 (struct loopback_pcm*) ;
 int FUNC_3 (struct loopback_pcm*) ;
 void* FUNC_4 (int,int ) ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (struct snd_pcm_runtime*,int ) ;
 int FUNC_8 (struct snd_pcm_runtime*,int ,int ,int ,struct loopback_pcm*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct snd_pcm_substream *VAR_12)
{
 struct snd_pcm_runtime *VAR_13 = VAR_12->runtime;
 struct loopback *VAR_14 = VAR_12->private_data;
 struct loopback_pcm *VAR_15;
 struct loopback_cable *VAR_16 = ((void*)0);
 int VAR_17 = 0;
 int VAR_18 = FUNC_1(VAR_12);

 FUNC_5(&VAR_14->cable_lock);
 VAR_15 = FUNC_4(sizeof(*VAR_15), VAR_1);
 if (!VAR_15) {
  VAR_17 = -VAR_0;
  goto unlock;
 }
 VAR_15->loopback = VAR_14;
 VAR_15->substream = VAR_12;
 FUNC_12(&VAR_15->timer, VAR_8, 0);

 VAR_16 = VAR_14->cables[VAR_12->number][VAR_18];
 if (!VAR_16) {
  VAR_16 = FUNC_4(sizeof(*VAR_16), VAR_1);
  if (!VAR_16) {
   VAR_17 = -VAR_0;
   goto unlock;
  }
  FUNC_9(&VAR_16->lock);
  VAR_16->hw = VAR_6;
  VAR_14->cables[VAR_12->number][VAR_18] = VAR_16;
 }
 VAR_15->cable = VAR_16;

 FUNC_7(VAR_13, VAR_4);




 VAR_17 = FUNC_8(VAR_13, 0,
      VAR_3,
      VAR_10, VAR_15,
      VAR_3, -1);
 if (VAR_17 < 0)
  goto unlock;
 VAR_17 = FUNC_8(VAR_13, 0,
      VAR_5,
      VAR_11, VAR_15,
      VAR_5, -1);
 if (VAR_17 < 0)
  goto unlock;
 VAR_17 = FUNC_8(VAR_13, 0,
      VAR_2,
      VAR_9, VAR_15,
      VAR_2, -1);
 if (VAR_17 < 0)
  goto unlock;

 VAR_13->private_data = VAR_15;
 VAR_13->private_free = VAR_7;
 if (FUNC_2(VAR_15))
  VAR_13->hw = VAR_6;
 else
  VAR_13->hw = VAR_16->hw;

 FUNC_10(&VAR_16->lock);
 VAR_16->streams[VAR_12->stream] = VAR_15;
 FUNC_11(&VAR_16->lock);

 unlock:
 if (VAR_17 < 0) {
  FUNC_0(VAR_12);
  FUNC_3(VAR_15);
 }
 FUNC_6(&VAR_14->cable_lock);
 return VAR_17;
}
