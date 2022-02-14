
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tas5720_data {int devtype; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*,...) ;
 struct tas5720_data* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_7,
        unsigned int VAR_8, unsigned int VAR_9,
        int VAR_10, int VAR_11)
{
 struct snd_soc_component *VAR_12 = VAR_7->component;
 struct tas5720_data *VAR_13 = FUNC_2(VAR_12);
 unsigned int VAR_14;
 int VAR_15;

 if (!VAR_8) {
  FUNC_1(VAR_12->dev, "tx masks must not be 0\n");
  return -VAR_0;
 }






 VAR_14 = FUNC_0(VAR_8);

 if (VAR_14 > 7) {
  FUNC_1(VAR_12->dev, "slot selection out of bounds (%u)\n",
   VAR_14);
  return -VAR_0;
 }


 VAR_15 = FUNC_3(VAR_12, VAR_1,
      VAR_3, VAR_3);
 if (VAR_15 < 0)
  goto error_snd_soc_component_update_bits;


 VAR_15 = FUNC_3(VAR_12, VAR_2,
      VAR_4, VAR_14);
 if (VAR_15 < 0)
  goto error_snd_soc_component_update_bits;


 switch (VAR_13->devtype) {
 case 128:
  VAR_15 = FUNC_3(VAR_12, VAR_5,
          VAR_6,
          VAR_11 == 16 ?
          VAR_6 : 0);
  if (VAR_15 < 0)
   goto error_snd_soc_component_update_bits;
  break;
 default:
  break;
 }

 return 0;

error_snd_soc_component_update_bits:
 FUNC_1(VAR_12->dev, "error configuring TDM mode: %d\n", VAR_15);
 return VAR_15;
}
