
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_enum {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct fsl_audmix {int tdms; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int ,char*,int,unsigned int) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;
 struct fsl_audmix* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,unsigned int*) ;
 unsigned int FUNC_6 (struct soc_enum*,unsigned int) ;
 int FUNC_7 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_8(struct snd_kcontrol *VAR_4,
          struct snd_ctl_elem_value *VAR_5)
{
 struct snd_soc_component *VAR_6 = FUNC_3(VAR_4);
 struct fsl_audmix *VAR_7 = FUNC_4(VAR_6);
 struct soc_enum *VAR_8 = (struct soc_enum *)VAR_4->private_value;
 unsigned int *VAR_9 = VAR_5->value.enumerated.item;
 unsigned int VAR_10, VAR_11, VAR_12;
 int VAR_13 = 0;


 VAR_13 = FUNC_5(VAR_6, VAR_1, &VAR_10);
 if (VAR_13)
  return VAR_13;

 VAR_12 = ((VAR_10 & VAR_2)
   >> VAR_3);
 VAR_11 = FUNC_6(VAR_8, VAR_9[0]);

 FUNC_1(VAR_6->dev, "TDMs=x%08x, val=x%08x\n", VAR_7->tdms, VAR_11);





 if (!(VAR_7->tdms & FUNC_0(VAR_12))) {
  FUNC_2(VAR_6->dev,
   "Started TDM%d needed for config propagation!\n",
   VAR_12 + 1);
  return -VAR_0;
 }

 if (!(VAR_7->tdms & FUNC_0(VAR_11))) {
  FUNC_2(VAR_6->dev,
   "The selected clock source has no TDM%d enabled!\n",
   VAR_11 + 1);
  return -VAR_0;
 }

 return FUNC_7(VAR_4, VAR_5);
}
