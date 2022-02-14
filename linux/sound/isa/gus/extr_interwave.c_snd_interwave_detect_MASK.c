
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_interwave {int dummy; } ;
struct snd_i2c_bus {int dummy; } ;
struct TYPE_4__ {int port; } ;
struct snd_gus_card {int interwave; unsigned char revision; TYPE_2__ gf1; TYPE_1__* card; int reg_lock; } ;
struct TYPE_3__ {int shortname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_gus_card*,int ) ;
 int FUNC_1 (struct snd_gus_card*,int ,int) ;
 unsigned char FUNC_2 (struct snd_gus_card*,int ) ;
 int FUNC_3 (struct snd_gus_card*,int ,unsigned char) ;
 int FUNC_4 (struct snd_interwave*,struct snd_gus_card*,int,struct snd_i2c_bus**) ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct snd_interwave *VAR_3,
    struct snd_gus_card *VAR_4,
    int VAR_5



              )
{
 unsigned long VAR_6;
 unsigned char VAR_7, VAR_8;
 int VAR_9;

 FUNC_1(VAR_4, VAR_1, 0);
 if (((VAR_9 = FUNC_0(VAR_4, VAR_1)) & 0x07) != 0) {
  FUNC_5("[0x%lx] check 1 failed - 0x%x\n", VAR_4->gf1.port, VAR_9);
  return -VAR_0;
 }
 FUNC_9(160);
 FUNC_1(VAR_4, VAR_1, 1);
 FUNC_9(160);
 if (((VAR_9 = FUNC_0(VAR_4, VAR_1)) & 0x07) != 1) {
  FUNC_5("[0x%lx] check 2 failed - 0x%x\n", VAR_4->gf1.port, VAR_9);
  return -VAR_0;
 }
 FUNC_6(&VAR_4->reg_lock, VAR_6);
 VAR_7 = FUNC_2(VAR_4, VAR_2);
 FUNC_3(VAR_4, VAR_2, ~VAR_7);
 VAR_8 = FUNC_2(VAR_4, VAR_2);
 FUNC_3(VAR_4, VAR_2, VAR_7);
 FUNC_7(&VAR_4->reg_lock, VAR_6);
 FUNC_5("[0x%lx] InterWave check - rev1=0x%x, rev2=0x%x\n", VAR_4->gf1.port, VAR_7, VAR_8);
 if ((VAR_7 & 0xf0) == (VAR_8 & 0xf0) &&
     (VAR_7 & 0x0f) != (VAR_8 & 0x0f)) {
  FUNC_5("[0x%lx] InterWave check - passed\n", VAR_4->gf1.port);
  VAR_4->interwave = 1;
  FUNC_8(VAR_4->card->shortname, "AMD InterWave");
  VAR_4->revision = VAR_7 >> 4;

  return 0;



 }
 FUNC_5("[0x%lx] InterWave check - failed\n", VAR_4->gf1.port);
 return -VAR_0;
}
