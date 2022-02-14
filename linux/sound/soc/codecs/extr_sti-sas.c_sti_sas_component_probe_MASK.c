
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_sas_data {int dummy; } ;
struct snd_soc_component {int dev; } ;


 struct sti_sas_data* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*,struct sti_sas_data*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_0)
{
 struct sti_sas_data *VAR_1 = FUNC_0(VAR_0->dev);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);

 return VAR_2;
}
