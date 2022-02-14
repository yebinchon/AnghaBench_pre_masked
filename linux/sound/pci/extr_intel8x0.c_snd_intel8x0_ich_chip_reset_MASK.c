
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel8x0 {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 unsigned int FUNC_2 (struct intel8x0*,int ) ;
 int FUNC_3 (struct intel8x0*,int ,unsigned int) ;
 int VAR_7 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (unsigned long,int) ;

__attribute__((used)) static int FUNC_6(struct intel8x0 *VAR_8)
{
 unsigned long VAR_9;
 unsigned int VAR_10;

 VAR_10 = FUNC_2(VAR_8, FUNC_0(VAR_1));
 VAR_10 &= ~(VAR_5 | VAR_6);

 VAR_10 |= (VAR_10 & VAR_3) == 0 ? VAR_3 : VAR_4;
 FUNC_3(VAR_8, FUNC_0(VAR_1), VAR_10);
 VAR_9 = (VAR_7 + (VAR_2 / 4)) + 1;
 do {
  if ((FUNC_2(VAR_8, FUNC_0(VAR_1)) & VAR_4) == 0)
   return 0;
  FUNC_4(1);
 } while (FUNC_5(VAR_9, VAR_7));
 FUNC_1(VAR_8->card->dev, "AC'97 warm reset still in progress? [0x%x]\n",
     FUNC_2(VAR_8, FUNC_0(VAR_1)));
 return -VAR_0;
}
