
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dummy; } ;
struct ep93xx_ac97_info {int lock; int dev; int done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,unsigned short) ;
 struct ep93xx_ac97_info* VAR_5 ;
 int FUNC_1 (struct ep93xx_ac97_info*,int ,unsigned short) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct snd_ac97 *VAR_6,
         unsigned short VAR_7,
         unsigned short VAR_8)
{
 struct ep93xx_ac97_info *VAR_9 = VAR_5;

 FUNC_2(&VAR_9->lock);





 FUNC_1(VAR_9, VAR_2, VAR_8);
 FUNC_1(VAR_9, VAR_1, VAR_7);

 FUNC_1(VAR_9, VAR_0, VAR_3);
 if (!FUNC_4(&VAR_9->done, VAR_4))
  FUNC_0(VAR_9->dev, "timeout writing register %x\n", VAR_7);

 FUNC_3(&VAR_9->lock);
}
