
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
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct aaci*,struct snd_ac97*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (unsigned short,scalar_t__) ;

__attribute__((used)) static unsigned short FUNC_9(struct snd_ac97 *VAR_8, unsigned short VAR_9)
{
 struct aaci *VAR_10 = VAR_8->private_data;
 int VAR_11, VAR_12 = 10;
 u32 VAR_13;

 if (VAR_8->num >= 4)
  return ~0;

 FUNC_4(&VAR_10->ac97_sem);

 FUNC_0(VAR_10, VAR_8);




 FUNC_8((VAR_9 << 12) | (1 << 19), VAR_10->base + VAR_1);


 FUNC_7(VAR_4);


 VAR_11 = VAR_4 * 8;
 do {
  FUNC_7(1);
  VAR_13 = FUNC_6(VAR_10->base + VAR_3);
 } while ((VAR_13 & VAR_6) && --VAR_11);

 if (VAR_13 & VAR_6) {
  FUNC_2(&VAR_10->dev->dev, "timeout on slot 1 TX busy\n");
  VAR_13 = ~0;
  goto out;
 }


 FUNC_7(VAR_4);


 VAR_11 = VAR_4 * 8;
 do {
  FUNC_7(1);
  FUNC_1();
  VAR_13 = FUNC_6(VAR_10->base + VAR_3) & (VAR_5|VAR_7);
 } while ((VAR_13 != (VAR_5|VAR_7)) && --VAR_11);

 if (VAR_13 != (VAR_5|VAR_7)) {
  FUNC_2(&VAR_10->dev->dev, "timeout on RX valid\n");
  VAR_13 = ~0;
  goto out;
 }

 do {
  VAR_13 = FUNC_6(VAR_10->base + VAR_0) >> 12;
  if (VAR_13 == VAR_9) {
   VAR_13 = FUNC_6(VAR_10->base + VAR_2) >> 4;
   break;
  } else if (--VAR_12) {
   FUNC_3(&VAR_10->dev->dev,
     "ac97 read back fail.  retry\n");
   continue;
  } else {
   FUNC_3(&VAR_10->dev->dev,
    "wrong ac97 register read back (%x != %x)\n",
    VAR_13, VAR_9);
   VAR_13 = ~0;
  }
 } while (VAR_12);
 out:
 FUNC_5(&VAR_10->ac97_sem);
 return VAR_13;
}
