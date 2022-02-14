
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm801 {scalar_t__ irq; int tea575x_tuner; int v4l2_dev; int tea; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,struct fm801*) ;
 unsigned short FUNC_1 (struct fm801*,int ) ;
 int FUNC_2 (struct fm801*,int ,unsigned short) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct fm801 *VAR_2)
{
 unsigned short VAR_3;

 if (VAR_2->irq < 0)
  goto __end_hw;


 VAR_3 = FUNC_1(VAR_2, VAR_0);
 VAR_3 |= 0x00c3;
 FUNC_2(VAR_2, VAR_0, VAR_3);

 FUNC_0(VAR_2->dev, VAR_2->irq, VAR_2);

      __end_hw:






 return 0;
}
