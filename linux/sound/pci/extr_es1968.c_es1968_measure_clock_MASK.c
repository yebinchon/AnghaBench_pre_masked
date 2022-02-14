
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int addr; int area; } ;
struct esm_memory {TYPE_1__ buf; } ;
struct TYPE_5__ {int addr; } ;
struct es1968 {int clock; int in_measurement; int measure_apu; int measure_count; TYPE_3__* card; int reg_lock; scalar_t__ io_port; TYPE_2__ dma; } ;
typedef int ktime_t ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_0 (struct es1968*,int,int) ;
 int FUNC_1 (struct es1968*,int,int,unsigned int) ;
 int FUNC_2 (struct es1968*,int,int,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,unsigned int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ) ;
 unsigned int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,scalar_t__) ;
 int FUNC_13 (struct es1968*,int ) ;
 int FUNC_14 (struct es1968*,int,unsigned int) ;
 int FUNC_15 (struct es1968*) ;
 int FUNC_16 (struct es1968*,int ) ;
 int FUNC_17 (struct es1968*,int) ;
 int FUNC_18 (struct es1968*,struct esm_memory*) ;
 struct esm_memory* FUNC_19 (struct es1968*,int) ;
 int FUNC_20 (struct es1968*,int,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct es1968*,int,int) ;

__attribute__((used)) static void FUNC_24(struct es1968 *VAR_6)
{
 int VAR_7, VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11;
 struct esm_memory *VAR_12;
 ktime_t VAR_13, VAR_14;
 ktime_t VAR_15;

 if (VAR_6->clock == 0)
  VAR_6->clock = 48000;


 if ((VAR_8 = FUNC_13(VAR_6, VAR_2)) < 0) {
  FUNC_3(VAR_6->card->dev, "Hmm, cannot find empty APU pair!?\n");
  return;
 }
 if ((VAR_12 = FUNC_19(VAR_6, VAR_0)) == ((void*)0)) {
  FUNC_5(VAR_6->card->dev,
    "cannot allocate dma buffer - using default clock %d\n",
    VAR_6->clock);
  FUNC_17(VAR_6, VAR_8);
  return;
 }

 FUNC_10(VAR_12->buf.area, 0, VAR_0);

 FUNC_23(VAR_6, VAR_8 << 3, (VAR_12->buf.addr - 0x10) & 0xfff8);

 VAR_9 = (unsigned int)((VAR_12->buf.addr - VAR_6->dma.addr) >> 1);
 VAR_9 |= 0x00400000;


 for (VAR_7 = 0; VAR_7 < 16; VAR_7++)
  FUNC_2(VAR_6, VAR_8, VAR_7, 0x0000);

 FUNC_2(VAR_6, VAR_8, 0, 0x400f);
 FUNC_2(VAR_6, VAR_8, 4, ((VAR_9 >> 16) & 0xff) << 8);
 FUNC_2(VAR_6, VAR_8, 5, VAR_9 & 0xffff);
 FUNC_2(VAR_6, VAR_8, 6, (VAR_9 + VAR_0/2) & 0xffff);
 FUNC_2(VAR_6, VAR_8, 7, VAR_0/2);
 FUNC_2(VAR_6, VAR_8, 8, 0x0000);
 FUNC_2(VAR_6, VAR_8, 9, 0xD000);
 FUNC_2(VAR_6, VAR_8, 10, 0x8F08);
 FUNC_2(VAR_6, VAR_8, 11, 0x0000);
 FUNC_21(&VAR_6->reg_lock);
 FUNC_12(1, VAR_6->io_port + 0x04);
 FUNC_12(FUNC_6(VAR_6->io_port + VAR_5) | VAR_4, VAR_6->io_port + VAR_5);
 FUNC_22(&VAR_6->reg_lock);

 FUNC_14(VAR_6, VAR_8, ((unsigned int)48000 << 16) / VAR_6->clock);

 VAR_6->in_measurement = 1;
 VAR_6->measure_apu = VAR_8;
 FUNC_21(&VAR_6->reg_lock);
 FUNC_16(VAR_6, VAR_3);
 FUNC_1(VAR_6, VAR_8, 5, VAR_9 & 0xffff);
 FUNC_20(VAR_6, VAR_8, VAR_1);
 VAR_13 = FUNC_7();
 FUNC_22(&VAR_6->reg_lock);
 FUNC_11(50);
 FUNC_21(&VAR_6->reg_lock);
 VAR_10 = FUNC_0(VAR_6, VAR_8, 5);
 VAR_14 = FUNC_7();
 FUNC_20(VAR_6, VAR_8, 0);
 FUNC_15(VAR_6);
 VAR_6->in_measurement = 0;
 FUNC_22(&VAR_6->reg_lock);


 VAR_10 -= (VAR_9 & 0xffff);
 VAR_10 &= 0xfffe;
 VAR_10 += VAR_6->measure_count * (VAR_0/2);

 VAR_15 = FUNC_8(VAR_14, VAR_13);
 VAR_11 = FUNC_9(VAR_15);
 if (VAR_11 == 0) {
  FUNC_3(VAR_6->card->dev, "?? calculation error..\n");
 } else {
  VAR_10 *= 1000;
  VAR_10 = (VAR_10 / VAR_11) * 1000 + ((VAR_10 % VAR_11) * 1000) / VAR_11;
  if (VAR_10 < 47500 || VAR_10 > 48500) {
   if (VAR_10 >= 40000 && VAR_10 <= 50000)
    VAR_6->clock = (VAR_6->clock * VAR_10) / 48000;
  }
  FUNC_4(VAR_6->card->dev, "clocking to %d\n", VAR_6->clock);
 }
 FUNC_18(VAR_6, VAR_12);
 FUNC_17(VAR_6, VAR_8);
}
