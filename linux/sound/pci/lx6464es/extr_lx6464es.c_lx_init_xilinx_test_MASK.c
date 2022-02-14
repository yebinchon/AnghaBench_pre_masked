
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct lx6464es {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct lx6464es*,int ) ;
 int FUNC_3 (struct lx6464es*,int ,int ) ;
 int FUNC_4 (struct lx6464es*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct lx6464es *VAR_3)
{
 u32 VAR_4;

 FUNC_0(VAR_3->card->dev, "->lx_init_xilinx_test\n");


 FUNC_3(VAR_3, VAR_2, 0);

 VAR_4 = FUNC_2(VAR_3, VAR_2);

 if (VAR_4) {
  FUNC_1(VAR_3->card->dev, "Problem: Reg_CSM %x.\n", VAR_4);


  FUNC_4(VAR_3, VAR_1, 1);

  VAR_4 = FUNC_2(VAR_3, VAR_2);
  if (VAR_4) {
   FUNC_1(VAR_3->card->dev, "Error: Reg_CSM %x.\n", VAR_4);
   return -VAR_0;
  }
 }

 FUNC_0(VAR_3->card->dev, "Xilinx/MicroBlaze access test successful\n");

 return 0;
}
