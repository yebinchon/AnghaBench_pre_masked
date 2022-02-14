
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_runtime {int channels; int sample_bits; int format; } ;
struct TYPE_5__ {int* cmd; } ;
struct lx6464es {int msg_lock; TYPE_2__ rmh; TYPE_1__* card; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (struct lx6464es*,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(struct lx6464es *VAR_4, struct snd_pcm_runtime *VAR_5,
    u32 VAR_6, int VAR_7)
{
 int VAR_8;
 u32 VAR_9 = FUNC_0(VAR_7, VAR_6);
 u32 VAR_10 = VAR_5->channels;

 if (VAR_5->channels != VAR_10)
  FUNC_1(VAR_4->card->dev, "channel count mismatch: %d vs %d",
      VAR_5->channels, VAR_10);

 FUNC_4(&VAR_4->msg_lock);
 FUNC_2(&VAR_4->rmh, VAR_0);

 VAR_4->rmh.cmd[0] |= VAR_9;

 if (VAR_5->sample_bits == 16)

  VAR_4->rmh.cmd[0] |= (VAR_1 << VAR_2);

 if (FUNC_6(VAR_5->format))

  VAR_4->rmh.cmd[0] |= (VAR_3 << VAR_2);

 VAR_4->rmh.cmd[0] |= VAR_10-1;

 VAR_8 = FUNC_3(VAR_4, &VAR_4->rmh);
 FUNC_5(&VAR_4->msg_lock);

 return VAR_8;
}
