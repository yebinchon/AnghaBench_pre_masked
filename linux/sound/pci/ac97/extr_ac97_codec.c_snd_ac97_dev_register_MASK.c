
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_device {struct snd_ac97* device_data; } ;
struct TYPE_7__ {int * bus; int release; int parent; } ;
struct snd_ac97 {TYPE_3__ dev; int num; TYPE_2__* bus; } ;
struct TYPE_6__ {TYPE_1__* card; } ;
struct TYPE_5__ {int number; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ac97*,char*) ;
 int FUNC_1 (TYPE_3__*,char*,int ,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct snd_ac97*) ;

__attribute__((used)) static int FUNC_4(struct snd_device *VAR_2)
{
 struct snd_ac97 *VAR_3 = VAR_2->device_data;
 int VAR_4;

 VAR_3->dev.bus = &VAR_0;
 VAR_3->dev.parent = VAR_3->bus->card->dev;
 VAR_3->dev.release = VAR_1;
 FUNC_1(&VAR_3->dev, "%d-%d:%s",
       VAR_3->bus->card->number, VAR_3->num,
       FUNC_3(VAR_3));
 if ((VAR_4 = FUNC_2(&VAR_3->dev)) < 0) {
  FUNC_0(VAR_3, "Can't register ac97 bus\n");
  VAR_3->dev.bus = ((void*)0);
  return VAR_4;
 }
 return 0;
}
