
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sst_dsp {int dev; } ;
struct skl_module_table {TYPE_2__* mod_info; int usage_cnt; } ;
typedef int mod_name ;
struct TYPE_4__ {TYPE_1__* fw; } ;
struct TYPE_3__ {int size; int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct skl_module_table* FUNC_1 (struct sst_dsp*,char*,int ) ;
 int FUNC_2 (struct sst_dsp*,int ) ;
 struct skl_module_table* FUNC_3 (struct sst_dsp*,int ) ;
 int FUNC_4 (struct sst_dsp*,int ,int ,int ,int ,int) ;
 int FUNC_5 (char*,int,char*,int *) ;

__attribute__((used)) static int FUNC_6(struct sst_dsp *VAR_1, u16 VAR_2, u8 *VAR_3)
{
 struct skl_module_table *VAR_4 = ((void*)0);
 int VAR_5 = 0;
 char VAR_6[64];

 FUNC_5(VAR_6, sizeof(VAR_6), "intel/dsp_fw_%pUL.bin", VAR_3);

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_1(VAR_1, VAR_6, VAR_2);
  if (VAR_4 == ((void*)0)) {
   FUNC_0(VAR_1->dev, "Failed to Load module\n");
   return -VAR_0;
  }
 }

 if (!VAR_4->usage_cnt) {
  VAR_5 = FUNC_4(VAR_1, VAR_4->mod_info->fw->data,
    VAR_4->mod_info->fw->size,
    VAR_2, 0, 1);
  if (VAR_5 < 0) {
   FUNC_0(VAR_1->dev, "Failed to Load module\n");
   return VAR_5;
  }
 }

 VAR_5 = FUNC_2(VAR_1, VAR_2);

 return VAR_5;
}
