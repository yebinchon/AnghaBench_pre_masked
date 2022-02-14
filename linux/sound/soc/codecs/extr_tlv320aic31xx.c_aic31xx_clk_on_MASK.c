
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct snd_soc_component {int dev; } ;
struct aic31xx_priv {size_t rate_div_line; } ;
struct TYPE_2__ {scalar_t__ madc; scalar_t__ nadc; int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int) ;
 struct aic31xx_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_8)
{
 struct aic31xx_priv *VAR_9 = FUNC_2(VAR_8);
 u8 VAR_10 = VAR_6;
 u8 VAR_11 = VAR_6;

 FUNC_0(VAR_8->dev, "codec clock -> on (rate %d)\n",
  VAR_7[VAR_9->rate_div_line].rate);
 FUNC_3(VAR_8, VAR_5, VAR_10, VAR_11);
 FUNC_1(10);
 FUNC_3(VAR_8, VAR_4, VAR_10, VAR_11);
 FUNC_3(VAR_8, VAR_2, VAR_10, VAR_11);
 if (VAR_7[VAR_9->rate_div_line].nadc)
  FUNC_3(VAR_8, VAR_3, VAR_10, VAR_11);
 if (VAR_7[VAR_9->rate_div_line].madc)
  FUNC_3(VAR_8, VAR_1, VAR_10, VAR_11);
 FUNC_3(VAR_8, VAR_0, VAR_10, VAR_11);
}
