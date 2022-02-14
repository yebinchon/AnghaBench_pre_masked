
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_context {int kvmcpu; struct kvm_run* run; } ;
struct kvm_run {int dummy; } ;
typedef int pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int,int,int ,int,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,int *,int ,void*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int VAR_7 ;
 int FUNC_9 (int) ;

void FUNC_10(void)
{
 int VAR_8, VAR_9, VAR_10, VAR_11;
 pthread_t VAR_12[VAR_3];
 struct kvm_run *VAR_13;
 struct thread_context VAR_14;

 VAR_9 = FUNC_4("/dev/kvm", VAR_4);
 FUNC_0(VAR_9 != -1, "failed to open /dev/kvm");
 VAR_10 = FUNC_2(VAR_9, VAR_1, 0);
 FUNC_0(VAR_10 != -1, "KVM_CREATE_VM failed");
 VAR_11 = FUNC_2(VAR_10, VAR_0, 0);
 FUNC_0(VAR_11 != -1, "KVM_CREATE_VCPU failed");
 VAR_13 = (struct kvm_run *)FUNC_3(0, 4096, VAR_5|VAR_6, VAR_2,
        VAR_11, 0);
 VAR_14.kvmcpu = VAR_11;
 VAR_14.run = VAR_13;
 FUNC_8(FUNC_1());
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  FUNC_5(&VAR_12[VAR_8], ((void*)0), VAR_7, (void *)(uintptr_t)&VAR_14);
  FUNC_9(FUNC_7() % 10000);
 }
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  FUNC_6(VAR_12[VAR_8], ((void*)0));
}
