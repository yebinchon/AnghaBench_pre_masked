
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_snapshot_ref {int dummy; } ;
struct intel_pt_recording {int snapshot_ref_cnt; struct intel_pt_snapshot_ref* snapshot_refs; } ;


 int VAR_0 ;
 struct intel_pt_snapshot_ref* FUNC_0 (int,size_t const) ;
 int FUNC_1 (struct intel_pt_snapshot_ref*,struct intel_pt_snapshot_ref*,int) ;

__attribute__((used)) static int FUNC_2(struct intel_pt_recording *VAR_1, int VAR_2)
{
 const size_t VAR_3 = sizeof(struct intel_pt_snapshot_ref);
 int VAR_4 = VAR_1->snapshot_ref_cnt, VAR_5 = VAR_4 * 2;
 struct intel_pt_snapshot_ref *VAR_6;

 if (!VAR_5)
  VAR_5 = 16;

 while (VAR_5 <= VAR_2)
  VAR_5 *= 2;

 VAR_6 = FUNC_0(VAR_5, VAR_3);
 if (!VAR_6)
  return -VAR_0;

 FUNC_1(VAR_6, VAR_1->snapshot_refs, VAR_4 * VAR_3);

 VAR_1->snapshot_refs = VAR_6;
 VAR_1->snapshot_ref_cnt = VAR_5;

 return 0;
}
