
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct cs5535audio {TYPE_1__* card; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (struct cs5535audio*,int ) ;
 int FUNC_1 (struct cs5535audio*,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct cs5535audio*) ;
 int FUNC_4 (struct cs5535audio*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 u16 VAR_6;
 unsigned char VAR_7;
 struct cs5535audio *VAR_8 = VAR_5;

 if (VAR_8 == ((void*)0))
  return VAR_3;

 VAR_6 = FUNC_1(VAR_8, VAR_1);

 if (!VAR_6)
  return VAR_3;
 for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
  if (VAR_6 & (1 << VAR_7)) {
   switch (VAR_7) {
   case 129:
    FUNC_0(VAR_8, VAR_0);
    break;
   case 128:
    FUNC_0(VAR_8, VAR_0);
    break;
   case 131:
    FUNC_3(VAR_8);
    break;
   case 130:
    FUNC_4(VAR_8);
    break;
   default:
    FUNC_2(VAR_8->card->dev,
     "Unexpected irq src: 0x%x\n",
     VAR_6);
    break;
   }
  }
 }
 return VAR_2;
}
