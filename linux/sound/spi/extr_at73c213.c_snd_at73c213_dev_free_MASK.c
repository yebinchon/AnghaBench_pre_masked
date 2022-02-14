
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_device {struct snd_at73c213* device_data; } ;
struct snd_at73c213 {int irq; TYPE_1__* ssc; } ;
struct TYPE_2__ {int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,struct snd_at73c213*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_device *VAR_2)
{
 struct snd_at73c213 *VAR_3 = VAR_2->device_data;

 FUNC_2(VAR_3->ssc->regs, VAR_0, FUNC_0(VAR_1));
 if (VAR_3->irq >= 0) {
  FUNC_1(VAR_3->irq, VAR_3);
  VAR_3->irq = -1;
 }

 return 0;
}
