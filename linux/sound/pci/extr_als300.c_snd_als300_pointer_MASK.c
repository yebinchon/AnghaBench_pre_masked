
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned short u16 ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_als300_substream_data {scalar_t__ period_flipflop; int block_counter_register; } ;
struct snd_als300 {int reg_lock; int port; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {struct snd_als300_substream_data* private_data; } ;


 int FUNC_0 (TYPE_1__*,unsigned short) ;
 int FUNC_1 (char*,unsigned short) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 unsigned short FUNC_3 (struct snd_pcm_substream*) ;
 struct snd_als300* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_7(struct snd_pcm_substream *VAR_0)
{
 u16 VAR_1;
 struct snd_als300 *VAR_2 = FUNC_4(VAR_0);
 struct snd_als300_substream_data *VAR_3;
 unsigned short VAR_4;

 VAR_3 = VAR_0->runtime->private_data;
 VAR_4 = FUNC_3(VAR_0);

 FUNC_5(&VAR_2->reg_lock);
 VAR_1 = (u16) FUNC_2(VAR_2->port,
     VAR_3->block_counter_register) + 4;
 FUNC_6(&VAR_2->reg_lock);
 if (VAR_1 > VAR_4)
  VAR_1 = 0;
 else
  VAR_1 = VAR_4 - VAR_1;

 if (VAR_3->period_flipflop == 0)
  VAR_1 += VAR_4;
 FUNC_1("Pointer (bytes): %d\n", VAR_1);
 return FUNC_0(VAR_0->runtime, VAR_1);
}
