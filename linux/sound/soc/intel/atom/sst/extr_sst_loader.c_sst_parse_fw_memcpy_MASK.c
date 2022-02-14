
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct list_head {int dummy; } ;
struct intel_sst_drv {int dummy; } ;
struct fw_module_header {int mod_size; } ;


 int FUNC_0 (struct intel_sst_drv*,struct fw_module_header*,struct list_head*) ;
 int FUNC_1 (struct intel_sst_drv*,unsigned long,struct fw_module_header**,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct intel_sst_drv *VAR_0, unsigned long VAR_1,
    struct list_head *VAR_2)
{
 struct fw_module_header *VAR_3;
 u32 VAR_4, VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1, &VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  VAR_6 = FUNC_0(VAR_0, VAR_3, VAR_2);
  if (VAR_6)
   return VAR_6;
  VAR_3 = (void *)VAR_3 + sizeof(*VAR_3) + VAR_3->mod_size;
 }

 return 0;
}
