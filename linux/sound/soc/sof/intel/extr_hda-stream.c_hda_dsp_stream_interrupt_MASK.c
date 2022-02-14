
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdac_bus {int reg_lock; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct hdac_bus*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct hdac_bus *VAR_5 = VAR_4;
 int VAR_6 = VAR_2;
 u32 VAR_7;

 FUNC_2(&VAR_5->reg_lock);

 VAR_7 = FUNC_1(VAR_5, VAR_0);
 FUNC_0(VAR_5->dev, "stream irq, INTSTS status: 0x%x\n", VAR_7);


 if (VAR_7 == 0xffffffff)
  VAR_6 = VAR_1;

 FUNC_3(&VAR_5->reg_lock);

 return VAR_6;
}
