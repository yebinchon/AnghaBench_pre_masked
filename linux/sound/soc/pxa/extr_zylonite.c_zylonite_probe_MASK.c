
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_8(struct snd_soc_card *VAR_2)
{
 int VAR_3;

 if (VAR_0) {
  VAR_1 = FUNC_3(((void*)0), "CLK_POUT");
  if (FUNC_0(VAR_1)) {
   FUNC_7(VAR_2->dev, "Unable to obtain CLK_POUT: %ld\n",
    FUNC_1(VAR_1));
   return FUNC_1(VAR_1);
  }

  VAR_3 = FUNC_2(VAR_1);
  if (VAR_3 != 0) {
   FUNC_7(VAR_2->dev, "Unable to enable CLK_POUT: %d\n",
    VAR_3);
   FUNC_5(VAR_1);
   return VAR_3;
  }

  FUNC_6(VAR_2->dev, "MCLK enabled at %luHz\n",
   FUNC_4(VAR_1));
 }

 return 0;
}
