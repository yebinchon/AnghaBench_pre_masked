
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int dev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct snd_soc_card *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_0) {
  VAR_3 = FUNC_0(VAR_1);
  if (VAR_3 != 0)
   FUNC_1(VAR_2->dev, "Unable to enable CLK_POUT: %d\n",
    VAR_3);
 }

 return VAR_3;
}
