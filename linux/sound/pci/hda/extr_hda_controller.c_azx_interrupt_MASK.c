
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hdac_bus {int reg_lock; } ;
struct azx {int driver_caps; scalar_t__ disabled; TYPE_1__* card; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct hdac_bus* FUNC_1 (struct azx*) ;
 scalar_t__ FUNC_2 (struct azx*) ;
 int FUNC_3 (struct azx*,int ) ;
 int FUNC_4 (struct azx*,int ) ;
 int FUNC_5 (struct azx*,int ,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct hdac_bus*,int,int ) ;
 int FUNC_8 (struct hdac_bus*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_6 ;
 int FUNC_11 (int) ;

irqreturn_t FUNC_12(int VAR_7, void *VAR_8)
{
 struct azx *VAR_9 = VAR_8;
 struct hdac_bus *VAR_10 = FUNC_1(VAR_9);
 u32 VAR_11;
 bool VAR_12, VAR_13 = 0;
 int VAR_14 = 0;







 FUNC_9(&VAR_10->reg_lock);

 if (VAR_9->disabled)
  goto unlock;

 do {
  VAR_11 = FUNC_4(VAR_9, VAR_1);
  if (VAR_11 == 0 || VAR_11 == 0xffffffff)
   break;

  VAR_13 = 1;
  VAR_12 = 0;
  if (FUNC_7(VAR_10, VAR_11, VAR_6))
   VAR_12 = 1;


  VAR_11 = FUNC_3(VAR_9, VAR_3);
  if (VAR_11 & VAR_4) {
   VAR_12 = 1;
   if (VAR_11 & VAR_5) {
    if (VAR_9->driver_caps & VAR_0)
     FUNC_11(80);
    FUNC_8(VAR_10);
   }
   FUNC_5(VAR_9, VAR_3, VAR_4);
  }
 } while (VAR_12 && ++VAR_14 < 10);

 unlock:
 FUNC_10(&VAR_10->reg_lock);

 return FUNC_0(VAR_13);
}
