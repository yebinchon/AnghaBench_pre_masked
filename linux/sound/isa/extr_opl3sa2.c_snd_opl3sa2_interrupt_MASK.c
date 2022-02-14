
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_opl3sa2 {TYPE_3__* master_volume; TYPE_2__* master_switch; int wss; TYPE_1__* rmidi; int synth; } ;
struct snd_card {struct snd_opl3sa2* private_data; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int id; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_4__ {int private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct snd_card*,int ,int *) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 unsigned short FUNC_4 (struct snd_opl3sa2*,int ) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_5, void *VAR_6)
{
 unsigned short VAR_7;
 struct snd_card *VAR_8 = VAR_6;
 struct snd_opl3sa2 *VAR_9;
 int VAR_10 = 0;

 if (VAR_8 == ((void*)0))
  return VAR_0;

 VAR_9 = VAR_8->private_data;
 VAR_7 = FUNC_4(VAR_9, VAR_1);

 if (VAR_7 & 0x20) {
  VAR_10 = 1;
  FUNC_3(VAR_9->synth);
 }

 if ((VAR_7 & 0x10) && VAR_9->rmidi != ((void*)0)) {
  VAR_10 = 1;
  FUNC_2(VAR_5, VAR_9->rmidi->private_data);
 }

 if (VAR_7 & 0x07) {
  VAR_10 = 1;
  FUNC_5(VAR_5, VAR_9->wss);
 }

 if (VAR_7 & 0x40) {
  VAR_10 = 1;

  FUNC_4(VAR_9, VAR_3);
  FUNC_4(VAR_9, VAR_2);
  if (VAR_9->master_switch && VAR_9->master_volume) {
   FUNC_1(VAR_8, VAR_4,
     &VAR_9->master_switch->id);
   FUNC_1(VAR_8, VAR_4,
     &VAR_9->master_volume->id);
  }
 }
 return FUNC_0(VAR_10);
}
