
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct viadev {int running; } ;
struct via82xx_modem {int dummy; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {struct viadev* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (struct viadev*,int ) ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_1 (unsigned char,int ) ;
 struct via82xx_modem* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct via82xx_modem*,struct viadev*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_5, int VAR_6)
{
 struct via82xx_modem *VAR_7 = FUNC_2(VAR_5);
 struct viadev *VAR_8 = VAR_5->runtime->private_data;
 unsigned char VAR_9 = 0;

 switch (VAR_6) {
 case 130:
 case 128:
  VAR_9 |= VAR_3;
  VAR_8->running = 1;
  break;
 case 129:
  VAR_9 = VAR_4;
  VAR_8->running = 0;
  break;
 case 132:
  VAR_9 |= VAR_2;
  VAR_8->running = 0;
  break;
 case 131:
  VAR_8->running = 1;
  break;
 default:
  return -VAR_0;
 }
 FUNC_1(VAR_9, FUNC_0(VAR_8, VAR_1));
 if (VAR_6 == 129)
  FUNC_3(VAR_7, VAR_8);
 return 0;
}
