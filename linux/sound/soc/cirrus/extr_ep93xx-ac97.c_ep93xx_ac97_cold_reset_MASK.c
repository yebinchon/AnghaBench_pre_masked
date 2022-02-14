
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dummy; } ;
struct ep93xx_ac97_info {int lock; int dev; int done; } ;


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
 int FUNC_0 (int ,char*) ;
 struct ep93xx_ac97_info* VAR_10 ;
 int FUNC_1 (struct ep93xx_ac97_info*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct snd_ac97 *VAR_11)
{
 struct ep93xx_ac97_info *VAR_12 = VAR_10;

 FUNC_2(&VAR_12->lock);





 FUNC_1(VAR_12, VAR_3, 0);
 FUNC_1(VAR_12, VAR_0, VAR_1 | VAR_2);
 FUNC_1(VAR_12, VAR_3, VAR_4);




 FUNC_1(VAR_12, VAR_6, VAR_7);
 FUNC_1(VAR_12, VAR_5, VAR_8);
 if (!FUNC_5(&VAR_12->done, VAR_9))
  FUNC_0(VAR_12->dev, "codec cold reset timeout\n");





 FUNC_4(15000, 20000);

 FUNC_3(&VAR_12->lock);
}
