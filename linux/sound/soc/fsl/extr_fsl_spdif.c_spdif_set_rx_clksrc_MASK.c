
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct regmap {int dummy; } ;
struct fsl_spdif_priv {scalar_t__ rxclk_src; struct regmap* regmap; } ;
typedef enum spdif_gainsel { ____Placeholder_spdif_gainsel } spdif_gainsel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct regmap*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct fsl_spdif_priv *VAR_6,
    enum spdif_gainsel VAR_7, int VAR_8)
{
 struct regmap *VAR_9 = VAR_6->regmap;
 u8 VAR_10 = VAR_6->rxclk_src;

 if (VAR_10 >= VAR_3 || VAR_7 >= VAR_1)
  return -VAR_0;

 FUNC_2(VAR_9, VAR_2,
   VAR_4 | VAR_5,
   FUNC_0(VAR_10) | FUNC_1(VAR_7));

 return 0;
}
