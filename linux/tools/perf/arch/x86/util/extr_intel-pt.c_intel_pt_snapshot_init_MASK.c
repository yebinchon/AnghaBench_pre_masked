
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_recording {int snapshot_init_done; int snapshot_ref_buf_size; } ;


 int FUNC_0 (struct intel_pt_recording*,size_t) ;

__attribute__((used)) static int FUNC_1(struct intel_pt_recording *VAR_0,
      size_t VAR_1)
{
 if (VAR_0->snapshot_init_done)
  return 0;

 VAR_0->snapshot_init_done = 1;

 VAR_0->snapshot_ref_buf_size = FUNC_0(VAR_0,
       VAR_1);

 return 0;
}
