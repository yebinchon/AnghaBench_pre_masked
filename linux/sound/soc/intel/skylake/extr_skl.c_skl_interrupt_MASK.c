
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hdac_bus*) ;
 int FUNC_2 (struct hdac_bus*,int ) ;
 int FUNC_3 (struct hdac_bus*,int ) ;
 int FUNC_4 (struct hdac_bus*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_7, void *VAR_8)
{
 struct hdac_bus *VAR_9 = VAR_8;
 u32 VAR_10;

 if (!FUNC_0(VAR_9->dev))
  return VAR_2;

 FUNC_5(&VAR_9->reg_lock);

 VAR_10 = FUNC_3(VAR_9, VAR_0);
 if (VAR_10 == 0 || VAR_10 == 0xffffffff) {
  FUNC_6(&VAR_9->reg_lock);
  return VAR_2;
 }


 VAR_10 = FUNC_2(VAR_9, VAR_4);
 if (VAR_10 & VAR_5) {
  if (VAR_10 & VAR_6)
   FUNC_1(VAR_9);
  FUNC_4(VAR_9, VAR_4, VAR_5);
 }

 FUNC_6(&VAR_9->reg_lock);

 return FUNC_3(VAR_9, VAR_0) ? VAR_3 : VAR_1;
}
