
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pmac {TYPE_2__* beep; TYPE_1__* pdev; } ;
struct TYPE_4__ {int addr; int buf; int dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(struct snd_pmac *VAR_1)
{
 if (VAR_1->beep) {
  FUNC_1(VAR_1->beep->dev);
  FUNC_0(&VAR_1->pdev->dev, VAR_0 * 4,
      VAR_1->beep->buf, VAR_1->beep->addr);
  FUNC_2(VAR_1->beep);
  VAR_1->beep = ((void*)0);
 }
}
