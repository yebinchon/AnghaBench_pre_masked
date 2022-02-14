
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dev; } ;
struct TYPE_2__ {scalar_t__ regs; int iis_clk; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int,int ,int ) ;
 int FUNC_10 (struct snd_soc_dai*,int *,int *) ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct snd_soc_dai *VAR_6)
{
 int VAR_7;
 FUNC_10(VAR_6, &VAR_5,
     &VAR_4);

 VAR_3.iis_clk = FUNC_5(VAR_6->dev, "iis");
 if (FUNC_0(VAR_3.iis_clk)) {
  FUNC_6("failed to get iis_clock\n");
  return FUNC_1(VAR_3.iis_clk);
 }
 VAR_7 = FUNC_4(VAR_3.iis_clk);
 if (VAR_7)
  return VAR_7;


 FUNC_9(FUNC_2(0), 5, FUNC_3(2),
         VAR_2);

 FUNC_11(VAR_1, VAR_3.regs + VAR_0);

 FUNC_8(0);
 FUNC_7(0);

 return 0;
}
