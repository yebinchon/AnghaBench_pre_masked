
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
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
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_2 (int ,char*,int,unsigned int) ;
 int FUNC_3 (int ,char*,unsigned int) ;
 int FUNC_4 (struct snd_soc_component*,unsigned int*,unsigned int*,int ) ;
 int ** VAR_6 ;
 struct snd_soc_component* FUNC_5 (struct snd_kcontrol*) ;
 struct fsl_audmix* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ,unsigned int*) ;
 int FUNC_8 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;
 unsigned int FUNC_9 (struct soc_enum*,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct snd_kcontrol *VAR_7,
      struct snd_ctl_elem_value *VAR_8)
{
 struct snd_soc_component *VAR_9 = FUNC_5(VAR_7);
 struct fsl_audmix *VAR_10 = FUNC_6(VAR_9);
 struct soc_enum *VAR_11 = (struct soc_enum *)VAR_7->private_value;
 unsigned int *VAR_12 = VAR_8->value.enumerated.item;
 u32 VAR_13, VAR_14;
 unsigned int VAR_15, VAR_16, VAR_17 = 0, VAR_18 = 0;
 int VAR_19 = 0;


 VAR_19 = FUNC_7(VAR_9, VAR_1, &VAR_15);
 if (VAR_19)
  return VAR_19;


 VAR_13 = ((VAR_15 & VAR_4)
   >> VAR_5);
 VAR_14 = ((VAR_15 & VAR_2)
   >> VAR_3);


 VAR_16 = FUNC_9(VAR_11, VAR_12[0]);

 FUNC_2(VAR_9->dev, "TDMs=x%08x, val=x%08x\n", VAR_10->tdms, VAR_16);


 if (VAR_13 == VAR_16)
  return 0;




 if (!(VAR_10->tdms & FUNC_0(VAR_14))) {
  FUNC_3(VAR_9->dev,
   "Started TDM%d needed for config propagation!\n",
   VAR_14 + 1);
  return -VAR_0;
 }


 VAR_19 = FUNC_4(VAR_9, &VAR_17, &VAR_18, VAR_6[VAR_13][VAR_16]);
 if (VAR_19)
  return VAR_19;


 VAR_17 |= VAR_4;
 VAR_18 |= FUNC_1(VAR_16);

 return FUNC_8(VAR_9, VAR_1, VAR_17, VAR_18);
}
