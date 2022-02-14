
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {struct mtpav* private_data; } ;
struct mtpav {scalar_t__ istimer; scalar_t__ irq; int res_port; int spinlock; } ;


 int FUNC_0 (scalar_t__,void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mtpav*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct snd_card *VAR_0)
{
 struct mtpav *VAR_1 = VAR_0->private_data;
 unsigned long VAR_2;

 FUNC_3(&VAR_1->spinlock, VAR_2);
 if (VAR_1->istimer > 0)
  FUNC_2(VAR_1);
 FUNC_4(&VAR_1->spinlock, VAR_2);
 if (VAR_1->irq >= 0)
  FUNC_0(VAR_1->irq, (void *)VAR_1);
 FUNC_1(VAR_1->res_port);
}
