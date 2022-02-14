
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {scalar_t__ stopping; } ;
struct pcm_info {TYPE_1__ dbdma_ring; } ;
struct i2sbus_dev {int dummy; } ;


 int FUNC_0 (struct i2sbus_dev*,int,struct pcm_info**,int *) ;
 int FUNC_1 (struct i2sbus_dev*,struct pcm_info*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 struct i2sbus_dev* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static inline int FUNC_4(struct snd_pcm_substream *VAR_0, int VAR_1)
{
 struct i2sbus_dev *VAR_2 = FUNC_3(VAR_0);
 struct pcm_info *VAR_3;

 FUNC_0(VAR_2, VAR_1, &VAR_3, ((void*)0));
 if (VAR_3->dbdma_ring.stopping)
  FUNC_1(VAR_2, VAR_3);
 FUNC_2(VAR_0);
 return 0;
}
