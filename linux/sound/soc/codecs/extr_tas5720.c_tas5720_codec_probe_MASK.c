
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tas5720_data {int devtype; int supplies; int fault_check_work; int regmap; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;

 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 unsigned int VAR_7 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 struct tas5720_data* FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (struct snd_soc_component*,int ,int ,int ) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_9)
{
 struct tas5720_data *VAR_10 = FUNC_7(VAR_9);
 unsigned int VAR_11, VAR_12;
 int VAR_13;

 VAR_10->component = VAR_9;

 VAR_13 = FUNC_6(FUNC_0(VAR_10->supplies),
        VAR_10->supplies);
 if (VAR_13 != 0) {
  FUNC_2(VAR_9->dev, "failed to enable supplies: %d\n", VAR_13);
  return VAR_13;
 }






 VAR_13 = FUNC_4(VAR_10->regmap, VAR_2, &VAR_11);
 if (VAR_13 < 0) {
  FUNC_2(VAR_9->dev, "failed to read device ID register: %d\n",
   VAR_13);
  goto probe_fail;
 }

 switch (VAR_10->devtype) {
 case 129:
  VAR_12 = VAR_1;
  break;
 case 128:
  VAR_12 = VAR_7;
  break;
 default:
  FUNC_2(VAR_9->dev, "unexpected private driver data\n");
  return -VAR_0;
 }

 if (VAR_11 != VAR_12)
  FUNC_3(VAR_9->dev, "wrong device ID. expected: %u read: %u\n",
    VAR_12, VAR_11);


 VAR_13 = FUNC_8(VAR_9, VAR_3,
      VAR_4, VAR_4);
 if (VAR_13 < 0)
  goto error_snd_soc_component_update_bits;







 VAR_13 = FUNC_8(VAR_9, VAR_5,
      VAR_6, 0);
 if (VAR_13 < 0)
  goto error_snd_soc_component_update_bits;

 FUNC_1(&VAR_10->fault_check_work, VAR_8);

 return 0;

error_snd_soc_component_update_bits:
 FUNC_2(VAR_9->dev, "error configuring device registers: %d\n", VAR_13);

probe_fail:
 FUNC_5(FUNC_0(VAR_10->supplies),
          VAR_10->supplies);
 return VAR_13;
}
