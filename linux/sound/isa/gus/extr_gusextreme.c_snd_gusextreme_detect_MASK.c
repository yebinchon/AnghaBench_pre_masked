
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port; } ;
struct snd_gus_card {TYPE_1__ gf1; } ;
struct snd_es1688 {int reg_lock; int mixer_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_es1688*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct snd_es1688*,int,int) ;
 unsigned char FUNC_3 (struct snd_gus_card*,int ) ;
 int FUNC_4 (struct snd_gus_card*,int ,int) ;
 int FUNC_5 (char*,int,unsigned char) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct snd_gus_card *VAR_3,
     struct snd_es1688 *VAR_4)
{
 unsigned long VAR_5;
 unsigned char VAR_6;
 FUNC_6(&VAR_4->mixer_lock, VAR_5);
 FUNC_2(VAR_4, 0x40, 0x0b);
 FUNC_7(&VAR_4->mixer_lock, VAR_5);

 FUNC_6(&VAR_4->reg_lock, VAR_5);
 FUNC_1(VAR_3->gf1.port & 0x040 ? 2 : 0, FUNC_0(VAR_4, VAR_1));
 FUNC_1(0, 0x201);
 FUNC_1(VAR_3->gf1.port & 0x020 ? 2 : 0, FUNC_0(VAR_4, VAR_1));
 FUNC_1(0, 0x201);
 FUNC_1(VAR_3->gf1.port & 0x010 ? 3 : 1, FUNC_0(VAR_4, VAR_1));
 FUNC_7(&VAR_4->reg_lock, VAR_5);

 FUNC_8(100);

 FUNC_4(VAR_3, VAR_2, 0);
 if (((VAR_6 = FUNC_3(VAR_3, VAR_2)) & 0x07) != 0) {
  FUNC_5("[0x%lx] check 1 failed - 0x%x\n", VAR_3->gf1.port, VAR_6);
  return -VAR_0;
 }
 FUNC_8(160);
 FUNC_4(VAR_3, VAR_2, 1);
 FUNC_8(160);
 if (((VAR_6 = FUNC_3(VAR_3, VAR_2)) & 0x07) != 1) {
  FUNC_5("[0x%lx] check 2 failed - 0x%x\n", VAR_3->gf1.port, VAR_6);
  return -VAR_0;
 }

 return 0;
}
