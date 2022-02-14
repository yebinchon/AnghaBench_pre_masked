
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct kvm_vm_worker_thread_context {uintptr_t data; int err; int init_done; int thread_fn; int parent; struct kvm* kvm; } ;
struct kvm {int dummy; } ;
typedef int kvm_vm_thread_fn_t ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 struct task_struct* FUNC_4 (int ,struct kvm_vm_worker_thread_context*,char*,char const*,int ) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct kvm *VAR_2, kvm_vm_thread_fn_t VAR_3,
    uintptr_t VAR_4, const char *VAR_5,
    struct task_struct **VAR_6)
{
 struct kvm_vm_worker_thread_context VAR_7 = {};
 struct task_struct *VAR_8;

 *VAR_6 = ((void*)0);
 VAR_7.kvm = VAR_2;
 VAR_7.parent = VAR_0;
 VAR_7.thread_fn = VAR_3;
 VAR_7.data = VAR_4;
 FUNC_3(&VAR_7.init_done);

 VAR_8 = FUNC_4(VAR_1, &VAR_7,
        "%s-%d", VAR_5, FUNC_5(VAR_0));
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);


 FUNC_2(VAR_8 == ((void*)0));

 FUNC_6(&VAR_7.init_done);

 if (!VAR_7.err)
  *VAR_6 = VAR_8;

 return VAR_7.err;
}
