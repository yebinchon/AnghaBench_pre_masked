
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 unsigned int FUNC_1 (struct hw*,int ) ;
 int FUNC_2 (struct hw*,int ,unsigned int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct hw *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 VAR_4 = (48000 == VAR_3) ? 0x1480a001 : 0x1480a731;
 for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
  if (FUNC_1(VAR_2, VAR_1) == VAR_4)
   break;

  FUNC_2(VAR_2, VAR_1, VAR_4);
  FUNC_3(40);
 }
 if (VAR_5 >= 3) {
  FUNC_0(VAR_2->card->dev, "PLL initialization failed!!!\n");
  return -VAR_0;
 }

 return 0;
}
