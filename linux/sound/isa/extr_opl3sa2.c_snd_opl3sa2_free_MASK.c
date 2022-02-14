
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl3sa2 {scalar_t__ irq; int res_port; } ;
struct snd_card {struct snd_opl3sa2* private_data; } ;


 int FUNC_0 (scalar_t__,struct snd_card*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct snd_card *VAR_0)
{
 struct snd_opl3sa2 *VAR_1 = VAR_0->private_data;
 if (VAR_1->irq >= 0)
  FUNC_0(VAR_1->irq, VAR_0);
 FUNC_1(VAR_1->res_port);
}
