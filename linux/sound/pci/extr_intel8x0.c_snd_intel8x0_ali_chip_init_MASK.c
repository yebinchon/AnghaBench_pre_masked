
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel8x0 {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct intel8x0*) ;
 int FUNC_3 (struct intel8x0*,int ) ;
 int FUNC_4 (struct intel8x0*,int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct intel8x0 *VAR_6, int VAR_7)
{
 u32 VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_3(VAR_6, FUNC_0(VAR_3));
 if ((VAR_8 & 2) == 0)
  VAR_8 |= 2;
 else
  VAR_8 |= 1;
 VAR_8 &= ~0x80000000;
 FUNC_4(VAR_6, FUNC_0(VAR_3), VAR_8);

 for (VAR_9 = 0; VAR_9 < VAR_5 / 2; VAR_9++) {
  if (! (FUNC_3(VAR_6, FUNC_0(VAR_0)) & VAR_1))
   goto __ok;
  FUNC_5(1);
 }
 FUNC_1(VAR_6->card->dev, "AC'97 reset failed.\n");
 if (VAR_7)
  return -VAR_4;

 __ok:
 for (VAR_9 = 0; VAR_9 < VAR_5 / 2; VAR_9++) {
  VAR_8 = FUNC_3(VAR_6, FUNC_0(VAR_2));
  if (VAR_8 & 0x80)
   break;
  FUNC_4(VAR_6, FUNC_0(VAR_2), VAR_8 | 0x80);
  FUNC_5(1);
 }

 FUNC_2(VAR_6);
 return 0;
}
