
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spdif_dev_data {int rx_chsts_updated; int chsts_q; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 u32 VAR_7;
 struct spdif_dev_data *VAR_8 = VAR_6;

 VAR_7 = FUNC_0(VAR_8->base + VAR_4);
 if (VAR_7 & VAR_2) {
  FUNC_2(VAR_7 & VAR_2,
         VAR_8->base + VAR_4);
  VAR_7 = FUNC_0(VAR_8->base +
       VAR_3);
  FUNC_2(VAR_7 & ~VAR_2,
         VAR_8->base + VAR_3);

  VAR_8->rx_chsts_updated = 1;
  FUNC_1(&VAR_8->chsts_q);
  return VAR_0;
 }

 return VAR_1;
}
