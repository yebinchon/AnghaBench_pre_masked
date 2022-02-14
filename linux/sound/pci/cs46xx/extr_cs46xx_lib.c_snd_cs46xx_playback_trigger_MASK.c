
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_cs46xx_pcm {TYPE_3__* pcm_channel; } ;
struct snd_cs46xx {unsigned int play_ctl; int reg_lock; } ;
struct TYPE_7__ {int unlinked; TYPE_2__* pcm_reader_scb; } ;
struct TYPE_6__ {int address; } ;
struct TYPE_5__ {int periods; struct snd_cs46xx_pcm* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (struct snd_cs46xx*,TYPE_3__*) ;
 int FUNC_1 (struct snd_cs46xx*,TYPE_3__*) ;
 unsigned int FUNC_2 (struct snd_cs46xx*,int) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_cs46xx*,int,unsigned int) ;
 struct snd_cs46xx* FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_5,
           int VAR_6)
{
 struct snd_cs46xx *VAR_7 = FUNC_5(VAR_5);

 int VAR_8 = 0;







 switch (VAR_6) {
 case 130:
 case 131:
  FUNC_6(&VAR_7->reg_lock);
  if (VAR_5->runtime->periods != VAR_1)
   FUNC_3(VAR_5);
  { unsigned int VAR_9;
  VAR_9 = FUNC_2(VAR_7, VAR_0);
  VAR_9 &= 0x0000ffff;
  FUNC_4(VAR_7, VAR_0, VAR_7->play_ctl | VAR_9);
  }
  FUNC_7(&VAR_7->reg_lock);

  break;
 case 129:
 case 128:
  FUNC_6(&VAR_7->reg_lock);
  { unsigned int VAR_10;
  VAR_10 = FUNC_2(VAR_7, VAR_0);
  VAR_10 &= 0x0000ffff;
  FUNC_4(VAR_7, VAR_0, VAR_10);
  }
  FUNC_7(&VAR_7->reg_lock);

  break;
 default:
  VAR_8 = -VAR_2;
  break;
 }

 return VAR_8;
}
