
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct lx6464es {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct lx6464es*,int ,int ) ;
 scalar_t__ FUNC_2 (struct lx6464es*,int ) ;
 int FUNC_3 (struct lx6464es*,int ,scalar_t__) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct lx6464es *VAR_4)
{
 int VAR_5;
 u32 VAR_6 = FUNC_2(VAR_4, VAR_1);

 FUNC_0(VAR_4->card->dev, "->lx_init_xilinx_reset\n");


 VAR_6 &= ~VAR_0;

 FUNC_3(VAR_4, VAR_1, VAR_6);
 FUNC_4(1);

 FUNC_3(VAR_4, VAR_2, 0);
 FUNC_4(1);

 VAR_6 |= VAR_0;
 FUNC_3(VAR_4, VAR_1, VAR_6);


 for (VAR_5 = 0; VAR_5 != 100; ++VAR_5) {
  u32 VAR_7;
  FUNC_4(10);
  VAR_7 = FUNC_2(VAR_4, VAR_2);
  if (VAR_7) {
   FUNC_0(VAR_4->card->dev, "xilinx reset done\n");
   FUNC_0(VAR_4->card->dev, "xilinx took %d loops\n", VAR_5);
   break;
  }
 }




 FUNC_1(VAR_4, VAR_3, 0);


 FUNC_4(600);

 return 0;
}
