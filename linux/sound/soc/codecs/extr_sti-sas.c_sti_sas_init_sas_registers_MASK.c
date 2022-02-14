
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_sas_data {int dummy; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_7,
           struct sti_sas_data *VAR_8)
{
 int VAR_9;






 VAR_9 = FUNC_1(VAR_7, VAR_3,
      VAR_0, 0);

 if (!VAR_9)

  VAR_9 = FUNC_1(VAR_7, VAR_3,
       VAR_1, 0);
 if (VAR_9 < 0) {
  FUNC_0(VAR_7->dev, "Failed to update SPDIF registers\n");
  return VAR_9;
 }



 VAR_9 = FUNC_1(VAR_7, VAR_2,
       VAR_6,
       VAR_6);

 if (!VAR_9)
  VAR_9 = FUNC_1(VAR_7, VAR_2,
       VAR_5,
       VAR_5);
 if (!VAR_9)
  VAR_9 = FUNC_1(VAR_7, VAR_2,
       VAR_4,
       VAR_4);

 if (VAR_9 < 0) {
  FUNC_0(VAR_7->dev, "Failed to update DAC registers\n");
  return VAR_9;
 }

 return VAR_9;
}
