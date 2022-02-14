
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ac97 {scalar_t__ num; struct cs4281* private_data; } ;
struct cs4281 {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 int FUNC_0 (int ,char*,unsigned short,unsigned short) ;
 unsigned short FUNC_1 (struct cs4281*,int ) ;
 int FUNC_2 (struct cs4281*,int ,unsigned short) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct snd_ac97 *VAR_7,
      unsigned short VAR_8, unsigned short VAR_9)
{







 struct cs4281 *VAR_10 = VAR_7->private_data;
 int VAR_11;
 FUNC_2(VAR_10, VAR_0, VAR_8);
 FUNC_2(VAR_10, VAR_1, VAR_9);
 FUNC_2(VAR_10, VAR_2, VAR_3 | VAR_6 |
                VAR_4 | (VAR_7->num ? VAR_5 : 0));
 for (VAR_11 = 0; VAR_11 < 2000; VAR_11++) {



  FUNC_3(10);




  if (!(FUNC_1(VAR_10, VAR_2) & VAR_3)) {
   return;
  }
 }
 FUNC_0(VAR_10->card->dev,
  "AC'97 write problem, reg = 0x%x, val = 0x%x\n", VAR_8, VAR_9);
}
