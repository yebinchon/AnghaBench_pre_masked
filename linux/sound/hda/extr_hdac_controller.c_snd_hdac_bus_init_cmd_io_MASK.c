
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ addr; int cmds; scalar_t__ rp; scalar_t__ wp; int * buf; } ;
struct TYPE_5__ {scalar_t__ area; scalar_t__ addr; } ;
struct TYPE_4__ {scalar_t__ addr; int * buf; } ;
struct hdac_bus {int reg_lock; TYPE_3__ rirb; TYPE_2__ rb; int corbrp_self_clear; TYPE_1__ corb; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct hdac_bus*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct hdac_bus*,int ,int ,int ) ;
 int FUNC_4 (struct hdac_bus*,int ,int) ;
 int FUNC_5 (struct hdac_bus*,int ,int ) ;
 int FUNC_6 (struct hdac_bus*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__) ;

void FUNC_10(struct hdac_bus *VAR_19)
{
 FUNC_0(!VAR_19->rb.area);

 FUNC_7(&VAR_19->reg_lock);

 VAR_19->corb.addr = VAR_19->rb.addr;
 VAR_19->corb.buf = (__le32 *)VAR_19->rb.area;
 FUNC_5(VAR_19, VAR_7, (u32)VAR_19->corb.addr);
 FUNC_5(VAR_19, VAR_10, FUNC_9(VAR_19->corb.addr));


 FUNC_4(VAR_19, VAR_9, 0x02);

 FUNC_6(VAR_19, VAR_11, 0);


 FUNC_6(VAR_19, VAR_8, VAR_1);
 if (!VAR_19->corbrp_self_clear)
  FUNC_1(VAR_19);


 FUNC_4(VAR_19, VAR_6, VAR_0);


 VAR_19->rirb.addr = VAR_19->rb.addr + 2048;
 VAR_19->rirb.buf = (__le32 *)(VAR_19->rb.area + 2048);
 VAR_19->rirb.wp = VAR_19->rirb.rp = 0;
 FUNC_2(VAR_19->rirb.cmds, 0, sizeof(VAR_19->rirb.cmds));
 FUNC_5(VAR_19, VAR_15, (u32)VAR_19->rirb.addr);
 FUNC_5(VAR_19, VAR_17, FUNC_9(VAR_19->rirb.addr));


 FUNC_4(VAR_19, VAR_16, 0x02);

 FUNC_6(VAR_19, VAR_18, VAR_5);

 FUNC_6(VAR_19, VAR_13, 1);

 FUNC_4(VAR_19, VAR_14, VAR_3 | VAR_4);

 FUNC_3(VAR_19, VAR_12, VAR_2, VAR_2);
 FUNC_8(&VAR_19->reg_lock);
}
