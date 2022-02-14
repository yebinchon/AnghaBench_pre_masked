
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_msnd {int irq; int io; int base; int mappedbase; } ;
struct snd_card {struct snd_msnd* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct snd_msnd*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct snd_card*) ;

__attribute__((used)) static void FUNC_5(struct snd_card *VAR_2)
{
 struct snd_msnd *VAR_3 = VAR_2->private_data;

 FUNC_1(VAR_3->mappedbase);
 FUNC_2(VAR_3->base, VAR_0);
 FUNC_3(VAR_3->io, VAR_1);
 FUNC_0(VAR_3->irq, VAR_3);
 FUNC_4(VAR_2);
}
