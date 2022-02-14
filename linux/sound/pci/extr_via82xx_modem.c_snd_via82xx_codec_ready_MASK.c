
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct via82xx_modem {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*,int,unsigned int) ;
 unsigned int FUNC_1 (struct via82xx_modem*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct via82xx_modem *VAR_2, int VAR_3)
{
 unsigned int VAR_4 = 1000;
 unsigned int VAR_5;

 while (VAR_4-- > 0) {
  FUNC_2(1);
  if (!((VAR_5 = FUNC_1(VAR_2)) & VAR_1))
   return VAR_5 & 0xffff;
 }
 FUNC_0(VAR_2->card->dev, "codec_ready: codec %i is not ready [0x%x]\n",
     VAR_3, FUNC_1(VAR_2));
 return -VAR_0;
}
