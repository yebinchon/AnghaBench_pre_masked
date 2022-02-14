
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_pt_recording {size_t snapshot_ref_buf_size; TYPE_1__* snapshot_refs; } ;
struct TYPE_2__ {size_t ref_offset; void* ref_buf; } ;


 int VAR_0 ;
 void* FUNC_0 (size_t) ;

__attribute__((used)) static int FUNC_1(struct intel_pt_recording *VAR_1, int VAR_2,
           size_t VAR_3)
{
 size_t VAR_4 = VAR_1->snapshot_ref_buf_size;
 void *VAR_5;

 VAR_5 = FUNC_0(VAR_4);
 if (!VAR_5)
  return -VAR_0;

 VAR_1->snapshot_refs[VAR_2].ref_buf = VAR_5;
 VAR_1->snapshot_refs[VAR_2].ref_offset = VAR_3 - VAR_4;

 return 0;
}
