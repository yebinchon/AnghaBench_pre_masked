
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct skl_dev {int dummy; } ;
struct hdac_bus {int dummy; } ;


 struct skl_dev* FUNC_0 (struct hdac_bus*) ;
 struct hdac_bus* FUNC_1 (int ) ;
 int FUNC_2 (struct skl_dev*) ;
 int FUNC_3 (struct snd_soc_component*,struct hdac_bus*) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_0)
{
 struct hdac_bus *VAR_1 = FUNC_1(VAR_0->dev);
 struct skl_dev *VAR_2 = FUNC_0(VAR_1);

 FUNC_3(VAR_0, VAR_1);

 FUNC_2(VAR_2);
}
