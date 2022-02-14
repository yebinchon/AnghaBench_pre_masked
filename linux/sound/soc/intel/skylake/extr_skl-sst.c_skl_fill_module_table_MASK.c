
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_dsp {int module_list; int dev; } ;
struct skl_module_table {int list; TYPE_1__* mod_info; } ;
struct firmware {int dummy; } ;
struct TYPE_2__ {int mod_id; struct firmware const* fw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,int) ;
 void* FUNC_1 (int ,unsigned int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct firmware const*) ;
 int FUNC_4 (struct firmware const**,char*,int ) ;

__attribute__((used)) static struct skl_module_table *FUNC_5(struct sst_dsp *VAR_1,
      char *VAR_2, int VAR_3)
{
 const struct firmware *VAR_4;
 struct skl_module_table *VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(&VAR_4, VAR_2, VAR_1->dev);
 if (VAR_7 < 0) {
  FUNC_0(VAR_1->dev, "Request Module %s failed :%d\n",
       VAR_2, VAR_7);
  return ((void*)0);
 }

 VAR_5 = FUNC_1(VAR_1->dev, sizeof(*VAR_5), VAR_0);
 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_4);
  return ((void*)0);
 }

 VAR_6 = sizeof(*VAR_5->mod_info);
 VAR_5->mod_info = FUNC_1(VAR_1->dev, VAR_6, VAR_0);
 if (VAR_5->mod_info == ((void*)0)) {
  FUNC_3(VAR_4);
  return ((void*)0);
 }

 VAR_5->mod_info->mod_id = VAR_3;
 VAR_5->mod_info->fw = VAR_4;
 FUNC_2(&VAR_5->list, &VAR_1->module_list);

 return VAR_5;
}
