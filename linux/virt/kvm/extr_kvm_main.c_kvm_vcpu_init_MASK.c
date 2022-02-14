
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kvm_vcpu {int cpu; unsigned int vcpu_id; int pre_pcpu; int preempted; int ready; scalar_t__ run; int blocked_vcpu_list; int wq; int * pid; struct kvm* kvm; int mutex; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 struct page* FUNC_1 (int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*,int) ;
 int FUNC_7 (struct kvm_vcpu*,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct page*) ;

int FUNC_10(struct kvm_vcpu *VAR_3, struct kvm *VAR_4, unsigned VAR_5)
{
 struct page *VAR_6;
 int VAR_7;

 FUNC_8(&VAR_3->mutex);
 VAR_3->cpu = -1;
 VAR_3->kvm = VAR_4;
 VAR_3->vcpu_id = VAR_5;
 VAR_3->pid = ((void*)0);
 FUNC_3(&VAR_3->wq);
 FUNC_5(VAR_3);

 VAR_3->pre_pcpu = -1;
 FUNC_0(&VAR_3->blocked_vcpu_list);

 VAR_6 = FUNC_1(VAR_1 | VAR_2);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto fail;
 }
 VAR_3->run = FUNC_9(VAR_6);

 FUNC_7(VAR_3, 0);
 FUNC_6(VAR_3, 0);
 VAR_3->preempted = 0;
 VAR_3->ready = 0;

 VAR_7 = FUNC_4(VAR_3);
 if (VAR_7 < 0)
  goto fail_free_run;
 return 0;

fail_free_run:
 FUNC_2((unsigned long)VAR_3->run);
fail:
 return VAR_7;
}
