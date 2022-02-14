
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ml403_ac97cr {scalar_t__ irq; scalar_t__ capture_irq; int port; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,struct snd_ml403_ac97cr*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_ml403_ac97cr*) ;

__attribute__((used)) static int FUNC_4(struct snd_ml403_ac97cr *VAR_1)
{
 FUNC_0(VAR_0, "free():\n");

 if (VAR_1->irq >= 0)
  FUNC_1(VAR_1->irq, VAR_1);
 if (VAR_1->capture_irq >= 0)
  FUNC_1(VAR_1->capture_irq, VAR_1);

 FUNC_2(VAR_1->port);
 FUNC_3(VAR_1);
 FUNC_0(VAR_0, "free(): (done)\n");
 return 0;
}
