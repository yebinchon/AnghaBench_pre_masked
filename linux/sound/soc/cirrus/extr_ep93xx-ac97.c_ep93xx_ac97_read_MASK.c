
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
 unsigned short VAR_5 ;
 int FUNC_0 (int ,char*,unsigned short) ;
 struct ep93xx_ac97_info* VAR_6 ;
 scalar_t__ FUNC_1 (struct ep93xx_ac97_info*,int ) ;
 int FUNC_2 (struct ep93xx_ac97_info*,int ,unsigned short) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static unsigned short FUNC_6(struct snd_ac97 *VAR_7,
           unsigned short VAR_8)
{
 struct ep93xx_ac97_info *VAR_9 = VAR_6;
 unsigned short VAR_10;

 FUNC_3(&VAR_9->lock);

 FUNC_2(VAR_9, VAR_1, VAR_8);
 FUNC_2(VAR_9, VAR_0, VAR_3);
 if (!FUNC_5(&VAR_9->done, VAR_4)) {
  FUNC_0(VAR_9->dev, "timeout reading register %x\n", VAR_8);
  FUNC_4(&VAR_9->lock);
  return -VAR_5;
 }
 VAR_10 = (unsigned short)FUNC_1(VAR_9, VAR_2);

 FUNC_4(&VAR_9->lock);
 return VAR_10;
}
