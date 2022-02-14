
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned int wp; unsigned int rp; int* res; scalar_t__* cmds; int * buf; } ;
struct hdac_bus {int * last_cmd; int dev; TYPE_1__ rirb; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int,int,unsigned int) ;
 int FUNC_1 (int ,char*,int,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct hdac_bus*,int,int) ;
 unsigned int FUNC_5 (struct hdac_bus*,int ) ;

void FUNC_6(struct hdac_bus *VAR_4)
{
 unsigned int VAR_5, VAR_6;
 unsigned int VAR_7;
 u32 VAR_8, VAR_9;

 VAR_6 = FUNC_5(VAR_4, VAR_3);
 if (VAR_6 == 0xffff) {

  return;
 }

 if (VAR_6 == VAR_4->rirb.wp)
  return;
 VAR_4->rirb.wp = VAR_6;

 while (VAR_4->rirb.rp != VAR_6) {
  VAR_4->rirb.rp++;
  VAR_4->rirb.rp %= VAR_0;

  VAR_5 = VAR_4->rirb.rp << 1;
  VAR_9 = FUNC_2(VAR_4->rirb.buf[VAR_5 + 1]);
  VAR_8 = FUNC_2(VAR_4->rirb.buf[VAR_5]);
  VAR_7 = VAR_9 & 0xf;
  if (VAR_7 >= VAR_2) {
   FUNC_0(VAR_4->dev,
    "spurious response %#x:%#x, rp = %d, wp = %d",
    VAR_8, VAR_9, VAR_4->rirb.rp, VAR_6);
   FUNC_3();
  } else if (VAR_9 & VAR_1)
   FUNC_4(VAR_4, VAR_8, VAR_9);
  else if (VAR_4->rirb.cmds[VAR_7]) {
   VAR_4->rirb.res[VAR_7] = VAR_8;
   VAR_4->rirb.cmds[VAR_7]--;
  } else {
   FUNC_1(VAR_4->dev,
    "spurious response %#x:%#x, last cmd=%#08x\n",
    VAR_8, VAR_9, VAR_4->last_cmd[VAR_7]);
  }
 }
}
