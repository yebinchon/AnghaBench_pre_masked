
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cs5535audio {TYPE_1__* card; int playback_substream; int reg_lock; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cs5535audio*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct cs5535audio *VAR_2)
{
 u8 VAR_3;
 FUNC_3(&VAR_2->reg_lock);
 VAR_3 = FUNC_0(VAR_2, VAR_0);
 FUNC_4(&VAR_2->reg_lock);
 if (VAR_3 & VAR_1) {
  FUNC_2(VAR_2->playback_substream);
 } else {
  FUNC_1(VAR_2->card->dev,
   "unexpected bm0 irq src, bm_stat=%x\n",
   VAR_3);
 }
}
