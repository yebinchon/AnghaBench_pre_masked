
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_ac97 {int num; struct aaci* private_data; } ;
struct aaci {int ac97_sem; TYPE_1__* dev; scalar_t__ base; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct aaci*,struct snd_ac97*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned short,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct snd_ac97 *VAR_6, unsigned short VAR_7,
       unsigned short VAR_8)
{
 struct aaci *VAR_9 = VAR_6->private_data;
 int VAR_10;
 u32 VAR_11;

 if (VAR_6->num >= 4)
  return;

 FUNC_2(&VAR_9->ac97_sem);

 FUNC_0(VAR_9, VAR_6);





 FUNC_6(VAR_8 << 4, VAR_9->base + VAR_1);
 FUNC_6(VAR_7 << 12, VAR_9->base + VAR_0);


 FUNC_5(VAR_3);


 VAR_10 = VAR_3 * 8;
 do {
  FUNC_5(1);
  VAR_11 = FUNC_4(VAR_9->base + VAR_2);
 } while ((VAR_11 & (VAR_4|VAR_5)) && --VAR_10);

 if (VAR_11 & (VAR_4|VAR_5))
  FUNC_1(&VAR_9->dev->dev,
   "timeout waiting for write to complete\n");

 FUNC_3(&VAR_9->ac97_sem);
}
