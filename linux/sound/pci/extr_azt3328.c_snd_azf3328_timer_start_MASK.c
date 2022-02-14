
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_timer {int sticks; } ;
struct snd_azf3328 {int reg_lock; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int VAR_4 ;
 int FUNC_1 (struct snd_azf3328*,int ,unsigned int) ;
 struct snd_azf3328* FUNC_2 (struct snd_timer*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_5(struct snd_timer *VAR_5)
{
 struct snd_azf3328 *VAR_6;
 unsigned long VAR_7;
 unsigned int VAR_8;

 VAR_6 = FUNC_2(VAR_5);
 VAR_8 = ((VAR_5->sticks * VAR_4) - 1) & VAR_3;
 if (VAR_8 < 49) {




  FUNC_0(VAR_6->card->dev, "delay was too low (%d)!\n", VAR_8);
  VAR_8 = 49;
 }
 FUNC_0(VAR_6->card->dev, "setting timer countdown value %d\n", VAR_8);
 VAR_8 |= VAR_1 | VAR_2;
 FUNC_3(&VAR_6->reg_lock, VAR_7);
 FUNC_1(VAR_6, VAR_0, VAR_8);
 FUNC_4(&VAR_6->reg_lock, VAR_7);
 return 0;
}
