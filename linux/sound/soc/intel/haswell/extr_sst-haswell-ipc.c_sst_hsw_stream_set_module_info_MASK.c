
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sst_module_runtime {int id; int persistent_offset; struct sst_module* module; } ;
struct sst_module {void* id; int persistent_size; int entry; } ;
struct TYPE_7__ {int size; void* offset; } ;
struct TYPE_6__ {int size; void* offset; } ;
struct sst_hsw_module_map {int module_entries_count; TYPE_1__* module_entries; } ;
struct TYPE_8__ {TYPE_3__ scratch_mem; TYPE_2__ persistent_mem; struct sst_hsw_module_map map; } ;
struct sst_hsw_stream {TYPE_4__ request; scalar_t__ commited; } ;
struct sst_hsw {int dev; } ;
struct sst_dsp {int scratch_size; int scratch_offset; } ;
struct TYPE_5__ {int entry_point; void* module_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,void*,int ) ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (struct sst_dsp*,int ,int ) ;
 struct sst_dsp* FUNC_3 (struct sst_hsw*) ;

int FUNC_4(struct sst_hsw *VAR_2,
 struct sst_hsw_stream *VAR_3, struct sst_module_runtime *VAR_4)
{
 struct sst_hsw_module_map *VAR_5 = &VAR_3->request.map;
 struct sst_dsp *VAR_6 = FUNC_3(VAR_2);
 struct sst_module *VAR_7 = VAR_4->module;

 if (VAR_3->commited) {
  FUNC_1(VAR_2->dev, "error: stream committed for set module\n");
  return -VAR_0;
 }


 VAR_5->module_entries_count = 1;
 VAR_5->module_entries[0].module_id = VAR_7->id;
 VAR_5->module_entries[0].entry_point = VAR_7->entry;

 VAR_3->request.persistent_mem.offset =
  FUNC_2(VAR_6, VAR_4->persistent_offset, VAR_1);
 VAR_3->request.persistent_mem.size = VAR_7->persistent_size;

 VAR_3->request.scratch_mem.offset =
  FUNC_2(VAR_6, VAR_6->scratch_offset, VAR_1);
 VAR_3->request.scratch_mem.size = VAR_6->scratch_size;

 FUNC_0(VAR_2->dev, "module %d runtime %d using:\n", VAR_7->id,
  VAR_4->id);
 FUNC_0(VAR_2->dev, " persistent offset 0x%x bytes 0x%x\n",
  VAR_3->request.persistent_mem.offset,
  VAR_3->request.persistent_mem.size);
 FUNC_0(VAR_2->dev, " scratch offset 0x%x bytes 0x%x\n",
  VAR_3->request.scratch_mem.offset,
  VAR_3->request.scratch_mem.size);

 return 0;
}
