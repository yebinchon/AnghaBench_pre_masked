
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {struct snd_pcm_substream* substream; } ;
struct i2sbus_dev {TYPE_1__ out; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2sbus_dev*,int ) ;
 struct i2sbus_dev* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct i2sbus_dev *VAR_2 = FUNC_1(VAR_1);

 if (!VAR_2)
  return -VAR_0;
 VAR_2->out.substream = VAR_1;
 return FUNC_0(VAR_2, 0);
}
