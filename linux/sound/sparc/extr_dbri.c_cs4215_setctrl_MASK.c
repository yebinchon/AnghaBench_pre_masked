
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int status; int * ctrl; scalar_t__ offset; scalar_t__ onboard; } ;
struct snd_dbri {TYPE_1__ mm; int lock; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct snd_dbri*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_dbri*,int,int,int,int,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct snd_dbri*,int,int *) ;
 int FUNC_5 (struct snd_dbri*,int ,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct snd_dbri*,int,int) ;

__attribute__((used)) static int FUNC_12(struct snd_dbri *VAR_10)
{
 int VAR_11, VAR_12;
 u32 VAR_13;
 unsigned long VAR_14;






 FUNC_0(VAR_10, 1);
 FUNC_10(125);





 VAR_12 = VAR_3 | VAR_6 | (VAR_10->mm.onboard ? VAR_5 : VAR_7);
 FUNC_7(VAR_12, VAR_10->regs + VAR_9);
 FUNC_1(VAR_4, "cs4215_setctrl: reg2=0x%x\n", VAR_12);
 FUNC_10(34);
 FUNC_8(&VAR_10->lock, VAR_14);
 VAR_13 = FUNC_6(VAR_10->regs + VAR_8);
 VAR_13 &= ~VAR_2;
 FUNC_7(VAR_13, VAR_10->regs + VAR_8);

 FUNC_5(VAR_10, VAR_0, 128);
 FUNC_2(VAR_10, 17, 16, 16, 32, VAR_10->mm.offset);
 FUNC_2(VAR_10, 18, 16, 16, 8, VAR_10->mm.offset);
 FUNC_2(VAR_10, 19, 18, 16, 8, VAR_10->mm.offset + 48);
 FUNC_9(&VAR_10->lock, VAR_14);


 VAR_10->mm.ctrl[0] &= ~VAR_1;
 FUNC_11(VAR_10, 17, *(int *)VAR_10->mm.ctrl);

 FUNC_8(&VAR_10->lock, VAR_14);
 VAR_13 = FUNC_6(VAR_10->regs + VAR_8);
 VAR_13 |= VAR_2;
 FUNC_7(VAR_13, VAR_10->regs + VAR_8);
 FUNC_9(&VAR_10->lock, VAR_14);

 for (VAR_11 = 10; ((VAR_10->mm.status & 0xe4) != 0x20); --VAR_11)
  FUNC_3(1);

 if (VAR_11 == 0) {
  FUNC_1(VAR_4, "CS4215 didn't respond to CLB (0x%02x)\n",
   VAR_10->mm.status);
  return -1;
 }




 FUNC_4(VAR_10, 19, ((void*)0));




 VAR_10->mm.ctrl[0] |= VAR_1;
 FUNC_11(VAR_10, 17, *(int *)VAR_10->mm.ctrl);


 FUNC_10(250);

 FUNC_0(VAR_10, 0);

 return 0;
}
