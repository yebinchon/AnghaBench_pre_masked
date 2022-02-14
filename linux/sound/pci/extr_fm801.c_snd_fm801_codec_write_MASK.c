
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ac97 {unsigned short addr; int num; struct fm801* private_data; } ;
struct fm801 {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct fm801*,int) ;
 int FUNC_2 (struct fm801*,int ,unsigned short) ;

__attribute__((used)) static void FUNC_3(struct snd_ac97 *VAR_3,
      unsigned short VAR_4,
      unsigned short VAR_5)
{
 struct fm801 *VAR_6 = VAR_3->private_data;




 if (!FUNC_1(VAR_6, 100)) {
  FUNC_0(VAR_6->card->dev, "AC'97 interface is busy (1)\n");
  return;
 }


 FUNC_2(VAR_6, VAR_1, VAR_5);
 FUNC_2(VAR_6, VAR_0, VAR_4 | (VAR_3->addr << VAR_2));



 if (!FUNC_1(VAR_6, 1000))
  FUNC_0(VAR_6->card->dev, "AC'97 interface #%d is busy (2)\n",
  VAR_3->num);
}
