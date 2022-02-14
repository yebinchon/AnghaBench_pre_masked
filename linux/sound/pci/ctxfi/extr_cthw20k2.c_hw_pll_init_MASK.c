
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw {TYPE_1__* card; } ;
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
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (unsigned int,int ) ;
 unsigned int FUNC_2 (struct hw*,int ) ;
 int FUNC_3 (struct hw*,int ,unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned int*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct hw *VAR_13, unsigned int VAR_14)
{
 unsigned int VAR_15;
 unsigned int VAR_16;
 unsigned int VAR_17;
 int VAR_18;

 VAR_15 = 0xB;
 FUNC_3(VAR_13, VAR_11, VAR_15);
 VAR_16 = 0x20C00000;
 FUNC_5(&VAR_16, VAR_1, 0);
 FUNC_5(&VAR_16, VAR_2, 48000 == VAR_14 ? 16 - 4 : 147 - 4);
 FUNC_5(&VAR_16, VAR_3, 48000 == VAR_14 ? 1 - 1 : 10 - 1);
 FUNC_3(VAR_13, VAR_10, VAR_16);
 FUNC_4(40);

 VAR_16 = FUNC_2(VAR_13, VAR_10);
 FUNC_5(&VAR_16, VAR_2, 48000 == VAR_14 ? 16 - 2 : 147 - 2);
 FUNC_3(VAR_13, VAR_10, VAR_16);
 FUNC_4(40);

 for (VAR_18 = 0; VAR_18 < 1000; VAR_18++) {
  VAR_17 = FUNC_2(VAR_13, VAR_12);
  if (FUNC_1(VAR_17, VAR_9))
   continue;

  if (FUNC_1(VAR_17, VAR_5) !=
     FUNC_1(VAR_16, VAR_1))
   continue;

  if (FUNC_1(VAR_17, VAR_6) !=
     FUNC_1(VAR_16, VAR_4))
   continue;

  if (FUNC_1(VAR_17, VAR_8) !=
     FUNC_1(VAR_16, VAR_3))
   continue;

  if (FUNC_1(VAR_17, VAR_7) !=
     FUNC_1(VAR_16, VAR_2))
   continue;

  break;
 }
 if (VAR_18 >= 1000) {
  FUNC_0(VAR_13->card->dev,
     "PLL initialization failed!!!\n");
  return -VAR_0;
 }

 return 0;
}
