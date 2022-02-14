
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spdif_dev_data {int rx_chsts_updated; int chsts_q; } ;
struct snd_soc_dai {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct spdif_dev_data* FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ,int,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_2)
{
 int VAR_3;
 struct spdif_dev_data *VAR_4 = FUNC_1(VAR_2->dev);
 unsigned long VAR_5 = FUNC_2(VAR_0);


 VAR_3 = FUNC_3(VAR_4->chsts_q,
            VAR_4->rx_chsts_updated,
            VAR_5);
 if (!VAR_3) {
  FUNC_0(VAR_2->dev, "No streaming audio detected!\n");
  return -VAR_1;
 }
 VAR_4->rx_chsts_updated = 0;

 return 0;
}
