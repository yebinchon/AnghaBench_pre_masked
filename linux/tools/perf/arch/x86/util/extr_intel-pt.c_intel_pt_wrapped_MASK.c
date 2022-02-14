
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct intel_pt_snapshot_ref {int ref_buf; int ref_offset; } ;
struct intel_pt_recording {int snapshot_ref_buf_size; struct intel_pt_snapshot_ref* snapshot_refs; } ;
struct auxtrace_mmap {int len; } ;


 int FUNC_0 (int ,int ,int ,int ,unsigned char*,int ) ;
 int FUNC_1 (int ,int ,int ,unsigned char*,int ) ;

__attribute__((used)) static bool FUNC_2(struct intel_pt_recording *VAR_0, int VAR_1,
        struct auxtrace_mmap *VAR_2, unsigned char *VAR_3,
        u64 VAR_4)
{
 struct intel_pt_snapshot_ref *VAR_5 = &VAR_0->snapshot_refs[VAR_1];
 bool VAR_6;

 VAR_6 = FUNC_0(VAR_5->ref_buf, VAR_5->ref_offset,
           VAR_0->snapshot_ref_buf_size, VAR_2->len,
           VAR_3, VAR_4);

 FUNC_1(VAR_5->ref_buf, VAR_0->snapshot_ref_buf_size, VAR_2->len,
     VAR_3, VAR_4);

 return VAR_6;
}
