
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ enh_mode; } ;
struct snd_gus_card {int reg_lock; TYPE_1__ gf1; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct snd_gus_card*,unsigned short,unsigned short) ;
 int FUNC_3 (struct snd_gus_card*) ;
 int FUNC_4 (struct snd_gus_card*,int) ;
 int FUNC_5 (struct snd_gus_card*,short) ;
 int FUNC_6 (struct snd_gus_card*,int ,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

void FUNC_9(struct snd_gus_card * VAR_5, unsigned short VAR_6, unsigned short VAR_7)
{
 unsigned long VAR_8;
 short VAR_9, VAR_10;
 unsigned short VAR_11;

 if (!FUNC_0()) {
  for (VAR_9 = VAR_6, VAR_10 = 0; VAR_9 <= VAR_7; VAR_9++) {
   FUNC_7(&VAR_5->reg_lock, VAR_8);
   FUNC_5(VAR_5, VAR_9);
   VAR_11 = FUNC_4(VAR_5, 9) >> 8;
   if (VAR_11 > VAR_0) {
    VAR_10++;
    FUNC_6(VAR_5, VAR_3, 20);
    FUNC_6(VAR_5, VAR_4, VAR_0);
    FUNC_6(VAR_5, VAR_2, VAR_11);
    FUNC_6(VAR_5, VAR_1, 0x40);
    if (VAR_5->gf1.enh_mode) {
     FUNC_3(VAR_5);
     FUNC_6(VAR_5, VAR_1, 0x40);
    }
   }
   FUNC_8(&VAR_5->reg_lock, VAR_8);
  }
  FUNC_1(50);
 }
 FUNC_2(VAR_5, VAR_6, VAR_7);
}
