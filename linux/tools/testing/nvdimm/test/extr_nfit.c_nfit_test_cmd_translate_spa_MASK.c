
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_bus {int dummy; } ;
struct nd_cmd_translate_spa {unsigned int translate_length; int status; int num_nvdimms; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nvdimm_bus*,struct nd_cmd_translate_spa*) ;

__attribute__((used)) static int FUNC_1(struct nvdimm_bus *VAR_1,
  struct nd_cmd_translate_spa *VAR_2, unsigned int VAR_3)
{
 if (VAR_3 < VAR_2->translate_length)
  return -VAR_0;

 if (FUNC_0(VAR_1, VAR_2) < 0 || !VAR_2->num_nvdimms)
  VAR_2->status = 2;

 return 0;
}
