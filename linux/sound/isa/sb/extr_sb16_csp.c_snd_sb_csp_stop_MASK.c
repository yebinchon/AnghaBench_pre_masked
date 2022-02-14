
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct snd_sb_csp {int running; TYPE_1__* chip; } ;
struct TYPE_5__ {int mixer_lock; int reg_lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 unsigned char FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,unsigned char) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct snd_sb_csp * VAR_4)
{
 int VAR_5;
 unsigned char VAR_6, VAR_7;
 unsigned long VAR_8;

 if (!(VAR_4->running & VAR_3))
  return 0;


 FUNC_5(&VAR_4->chip->mixer_lock, VAR_8);
 VAR_6 = FUNC_2(VAR_4->chip, VAR_0);
 VAR_7 = FUNC_2(VAR_4->chip, VAR_0 + 1);
 FUNC_3(VAR_4->chip, VAR_0, VAR_6 & 0x7);
 FUNC_3(VAR_4->chip, VAR_0 + 1, VAR_7 & 0x7);

 FUNC_4(&VAR_4->chip->reg_lock);
 if (VAR_4->running & VAR_2) {
  FUNC_0(VAR_4->chip, 0xe0, 0x01);

  FUNC_0(VAR_4->chip, 0x00, 0x00);
  FUNC_0(VAR_4->chip, 0x01, 0x00);

  VAR_4->running &= ~VAR_2;
 }
 VAR_5 = FUNC_1(VAR_4->chip, 0xc0);
 FUNC_6(&VAR_4->chip->reg_lock);


 FUNC_3(VAR_4->chip, VAR_0, VAR_6);
 FUNC_3(VAR_4->chip, VAR_0 + 1, VAR_7);
 FUNC_7(&VAR_4->chip->mixer_lock, VAR_8);

 if (!(VAR_5))
  VAR_4->running &= ~(VAR_1 | VAR_3);
 return VAR_5;
}
