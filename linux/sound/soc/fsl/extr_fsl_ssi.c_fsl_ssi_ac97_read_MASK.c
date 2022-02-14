
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_ac97 {int dummy; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {int ac97_reg_lock; int clk; struct regmap* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct regmap*,int ,int*) ;
 int FUNC_6 (struct regmap*,int ,int ,int ) ;
 int FUNC_7 (struct regmap*,int ,unsigned int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static unsigned short FUNC_9(struct snd_ac97 *VAR_6,
     unsigned short VAR_7)
{
 struct regmap *VAR_8 = VAR_5->regs;
 unsigned short VAR_9 = 0;
 u32 VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 FUNC_2(&VAR_5->ac97_reg_lock);

 VAR_12 = FUNC_1(VAR_5->clk);
 if (VAR_12) {
  FUNC_4("ac97 read clk_prepare_enable failed: %d\n", VAR_12);
  goto ret_unlock;
 }

 VAR_11 = (VAR_7 & 0x7f) << 12;
 FUNC_7(VAR_8, VAR_0, VAR_11);
 FUNC_6(VAR_8, VAR_2,
      VAR_4, VAR_3);

 FUNC_8(100);

 FUNC_5(VAR_8, VAR_1, &VAR_10);
 VAR_9 = (VAR_10 >> 4) & 0xffff;

 FUNC_0(VAR_5->clk);

ret_unlock:
 FUNC_3(&VAR_5->ac97_reg_lock);
 return VAR_9;
}
