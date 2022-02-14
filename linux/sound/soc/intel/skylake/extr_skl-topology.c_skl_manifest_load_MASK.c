
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; } ;
struct snd_soc_tplg_manifest {TYPE_1__ priv; } ;
struct snd_soc_component {int dummy; } ;
struct skl_dev {scalar_t__ lib_count; } ;
struct hdac_bus {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct skl_dev* FUNC_0 (struct hdac_bus*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct snd_soc_tplg_manifest*,int ,struct skl_dev*) ;
 struct hdac_bus* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_2, int VAR_3,
    struct snd_soc_tplg_manifest *VAR_4)
{
 struct hdac_bus *VAR_5 = FUNC_3(VAR_2);
 struct skl_dev *VAR_6 = FUNC_0(VAR_5);


 if (VAR_4->priv.size == 0)
  return 0;

 FUNC_2(VAR_4, VAR_5->dev, VAR_6);

 if (VAR_6->lib_count > VAR_1) {
  FUNC_1(VAR_5->dev, "Exceeding max Library count. Got:%d\n",
     VAR_6->lib_count);
  return -VAR_0;
 }

 return 0;
}
