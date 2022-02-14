
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ac97 {int num; struct cs4281* private_data; } ;
struct cs4281 {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,unsigned short) ;
 int FUNC_1 (struct cs4281*,int ) ;
 int FUNC_2 (struct cs4281*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static unsigned short FUNC_4(struct snd_ac97 *VAR_13,
        unsigned short VAR_14)
{
 struct cs4281 *VAR_15 = VAR_13->private_data;
 int VAR_16;
 unsigned short VAR_17;


 volatile int VAR_18 = ((volatile struct snd_ac97 *)VAR_13)->num;
 FUNC_1(VAR_15, VAR_18 ? VAR_9 : VAR_8);
 FUNC_2(VAR_15, VAR_0, VAR_14);
 FUNC_2(VAR_15, VAR_1, 0);
 FUNC_2(VAR_15, VAR_2, VAR_4 | VAR_3 |
         VAR_7 | VAR_5 |
      (VAR_18 ? VAR_6 : 0));





 for (VAR_16 = 0; VAR_16 < 500; VAR_16++) {



  FUNC_3(10);




  if (!(FUNC_1(VAR_15, VAR_2) & VAR_4))
   goto __ok1;
 }

 FUNC_0(VAR_15->card->dev,
  "AC'97 read problem (ACCTL_DCV), reg = 0x%x\n", VAR_14);
 VAR_17 = 0xffff;
 goto __end;

      __ok1:



 for (VAR_16 = 0; VAR_16 < 100; VAR_16++) {





  if (FUNC_1(VAR_15, VAR_18 ? VAR_11 : VAR_10) & VAR_12)
   goto __ok2;
  FUNC_3(10);
 }

 FUNC_0(VAR_15->card->dev,
  "AC'97 read problem (ACSTS_VSTS), reg = 0x%x\n", VAR_14);
 VAR_17 = 0xffff;
 goto __end;

      __ok2:




 VAR_17 = FUNC_1(VAR_15, VAR_18 ? VAR_9 : VAR_8);

      __end:
 return VAR_17;
}
