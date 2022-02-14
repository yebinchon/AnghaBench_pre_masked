
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct wm_adsp_fw_caps {int num_regions; TYPE_2__* region_defs; } ;
struct wm_adsp_compr_buf {struct wm_adsp_buffer_region* regions; TYPE_1__* dsp; } ;
struct wm_adsp_buffer_region {void* base_addr; void* cumulative_size; void* offset; int mem_type; } ;
struct TYPE_6__ {struct wm_adsp_fw_caps* caps; } ;
struct TYPE_5__ {int size_offset; int base_offset; int mem_type; } ;
struct TYPE_4__ {size_t fw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wm_adsp_compr_buf*,char*,int,int ,void*,void*,void*) ;
 struct wm_adsp_buffer_region* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct wm_adsp_compr_buf*,int ,void**) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static int FUNC_3(struct wm_adsp_compr_buf *VAR_3)
{
 const struct wm_adsp_fw_caps *VAR_4 = VAR_2[VAR_3->dsp->fw].caps;
 struct wm_adsp_buffer_region *VAR_5;
 u32 VAR_6 = 0;
 int VAR_7, VAR_8;

 VAR_3->regions = FUNC_1(VAR_4->num_regions, sizeof(*VAR_3->regions),
          VAR_1);
 if (!VAR_3->regions)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_4->num_regions; ++VAR_7) {
  VAR_5 = &VAR_3->regions[VAR_7];

  VAR_5->offset = VAR_6;
  VAR_5->mem_type = VAR_4->region_defs[VAR_7].mem_type;

  VAR_8 = FUNC_2(VAR_3, VAR_4->region_defs[VAR_7].base_offset,
       &VAR_5->base_addr);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_8 = FUNC_2(VAR_3, VAR_4->region_defs[VAR_7].size_offset,
       &VAR_6);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_5->cumulative_size = VAR_6;

  FUNC_0(VAR_3,
     "region=%d type=%d base=%08x off=%08x size=%08x\n",
     VAR_7, VAR_5->mem_type, VAR_5->base_addr,
     VAR_5->offset, VAR_5->cumulative_size);
 }

 return 0;
}
