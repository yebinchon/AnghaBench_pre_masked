
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct snd_sof_dev {int dev; } ;
struct TYPE_2__ {int * data; int size; } ;
struct snd_soc_tplg_manifest {TYPE_1__ priv; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int ) ;
 struct snd_sof_dev* FUNC_8 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_7, int VAR_8,
   struct snd_soc_tplg_manifest *VAR_9)
{
 struct snd_sof_dev *VAR_10 = FUNC_8(VAR_7);
 u32 VAR_11;
 u32 VAR_12;

 VAR_11 = FUNC_7(VAR_9->priv.size);


 if (!VAR_11) {
  FUNC_3(VAR_10->dev, "No topology ABI info\n");
  return 0;
 }

 if (VAR_11 != VAR_6) {
  FUNC_4(VAR_10->dev, "error: invalid topology ABI size\n");
  return -VAR_1;
 }

 FUNC_5(VAR_10->dev,
   "Topology: ABI %d:%d:%d Kernel ABI %d:%d:%d\n",
   VAR_9->priv.data[0], VAR_9->priv.data[1],
   VAR_9->priv.data[2], VAR_2, VAR_3,
   VAR_4);

 VAR_12 = FUNC_1(VAR_9->priv.data[0],
      VAR_9->priv.data[1],
      VAR_9->priv.data[2]);

 if (FUNC_2(VAR_5, VAR_12)) {
  FUNC_4(VAR_10->dev, "error: incompatible topology ABI version\n");
  return -VAR_1;
 }

 if (VAR_12 > VAR_5) {
  if (!FUNC_0(VAR_0)) {
   FUNC_6(VAR_10->dev, "warn: topology ABI is more recent than kernel\n");
  } else {
   FUNC_4(VAR_10->dev, "error: topology ABI is more recent than kernel\n");
   return -VAR_1;
  }
 }

 return 0;
}
