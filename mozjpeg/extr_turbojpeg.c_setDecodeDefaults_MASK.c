
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct jpeg_decompress_struct {int scale_num; int scale_denom; int num_components; int comps_in_scan; int data_precision; int ** quant_tbl_ptrs; TYPE_2__** cur_comp_info; TYPE_2__* comp_info; TYPE_1__* mem; int jpeg_color_space; } ;
struct TYPE_4__ {int h_samp_factor; int v_samp_factor; int component_index; int component_id; int quant_tbl_no; int dc_tbl_no; int ac_tbl_no; } ;
typedef TYPE_2__ jpeg_component_info ;
typedef int j_common_ptr ;
struct TYPE_3__ {scalar_t__ (* alloc_small ) (int ,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int* VAR_4 ;
 int* VAR_5 ;

__attribute__((used)) static int FUNC_2(struct jpeg_decompress_struct *VAR_6,
 int VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10;

 VAR_6->scale_num=VAR_6->scale_denom=1;

  if (VAR_8 == VAR_3) {
  VAR_6->num_components=VAR_6->comps_in_scan=1;
  VAR_6->jpeg_color_space=VAR_0;
  } else {
  VAR_6->num_components=VAR_6->comps_in_scan=3;
  VAR_6->jpeg_color_space=VAR_1;
 }

 VAR_6->comp_info=(jpeg_component_info *)
  (*VAR_6->mem->alloc_small)((j_common_ptr)VAR_6, VAR_2,
                                VAR_6->num_components *
                                sizeof(jpeg_component_info));

  for (VAR_10 = 0; VAR_10 < VAR_6->num_components; VAR_10++) {
  jpeg_component_info *VAR_11=&VAR_6->comp_info[VAR_10];

  VAR_11->h_samp_factor=(VAR_10==0)? VAR_5[VAR_8]/8:1;
  VAR_11->v_samp_factor=(VAR_10==0)? VAR_4[VAR_8]/8:1;
  VAR_11->component_index=VAR_10;
  VAR_11->component_id=VAR_10+1;
    VAR_11->quant_tbl_no = VAR_11->dc_tbl_no =
      VAR_11->ac_tbl_no = (VAR_10 == 0) ? 0 : 1;
  VAR_6->cur_comp_info[VAR_10]=VAR_11;
 }
 VAR_6->data_precision=8;
  for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
  if(VAR_6->quant_tbl_ptrs[VAR_10]==((void*)0))
   VAR_6->quant_tbl_ptrs[VAR_10]=FUNC_0((j_common_ptr)VAR_6);
 }

 return 0;
}
