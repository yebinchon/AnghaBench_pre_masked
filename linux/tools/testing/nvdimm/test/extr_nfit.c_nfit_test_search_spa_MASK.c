
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct region_search_spa {scalar_t__ addr; struct nd_region* region; } ;
struct nvdimm_bus {int dev; } ;
struct nvdimm {size_t id; } ;
struct nd_region {int ndr_mappings; struct nd_mapping* mapping; scalar_t__ ndr_start; } ;
struct nd_mapping {struct nvdimm* nvdimm; } ;
struct nd_cmd_translate_spa {int num_nvdimms; TYPE_1__* devices; scalar_t__ spa; } ;
struct TYPE_2__ {scalar_t__ dpa; int nfit_device_handle; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct region_search_spa*,int ) ;
 int * VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct nvdimm_bus *VAR_3,
  struct nd_cmd_translate_spa *VAR_4)
{
 int VAR_5;
 struct nd_region *VAR_6 = ((void*)0);
 struct nvdimm *VAR_7 = ((void*)0);
 struct nd_mapping *VAR_8 = ((void*)0);
 struct region_search_spa VAR_9 = {
  .addr = VAR_4->spa,
  .region = ((void*)0),
 };
 u64 VAR_10;

 VAR_5 = FUNC_0(&VAR_3->dev, &VAR_9,
    VAR_2);

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = VAR_9.region;

 VAR_10 = VAR_9.addr - VAR_6->ndr_start;




 VAR_8 = &VAR_6->mapping[VAR_6->ndr_mappings - 1];
 VAR_7 = VAR_8->nvdimm;

 VAR_4->devices[0].nfit_device_handle = VAR_1[VAR_7->id];
 VAR_4->num_nvdimms = 1;
 VAR_4->devices[0].dpa = VAR_10;

 return 0;
}
