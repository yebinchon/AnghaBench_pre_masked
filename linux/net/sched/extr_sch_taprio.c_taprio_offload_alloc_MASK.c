
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_taprio_sched_entry {int dummy; } ;
struct tc_taprio_qopt_offload {int dummy; } ;
struct __tc_taprio_qopt_offload {struct tc_taprio_qopt_offload offload; int users; } ;


 int VAR_0 ;
 struct __tc_taprio_qopt_offload* FUNC_0 (size_t,int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static struct tc_taprio_qopt_offload *FUNC_2(int VAR_1)
{
 size_t VAR_2 = sizeof(struct tc_taprio_sched_entry) * VAR_1 +
        sizeof(struct __tc_taprio_qopt_offload);
 struct __tc_taprio_qopt_offload *VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(&VAR_3->users, 1);

 return &VAR_3->offload;
}
