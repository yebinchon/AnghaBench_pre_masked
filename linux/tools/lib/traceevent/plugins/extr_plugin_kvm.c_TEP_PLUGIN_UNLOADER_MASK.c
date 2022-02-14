
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct tep_handle*,int,char*,char*,int ,int *) ;
 int FUNC_1 (struct tep_handle*,int ,char*) ;

void FUNC_2(struct tep_handle *VAR_7)
{
 FUNC_0(VAR_7, -1, "kvm", "kvm_exit",
         VAR_1, ((void*)0));

 FUNC_0(VAR_7, -1, "kvm", "kvm_emulate_insn",
         VAR_0, ((void*)0));

 FUNC_0(VAR_7, -1, "kvm", "kvm_nested_vmexit",
         VAR_4, ((void*)0));

 FUNC_0(VAR_7, -1, "kvm", "kvm_nested_vmexit_inject",
         VAR_5, ((void*)0));

 FUNC_0(VAR_7, -1, "kvmmmu", "kvm_mmu_get_page",
         VAR_2, ((void*)0));

 FUNC_0(VAR_7, -1, "kvmmmu", "kvm_mmu_sync_page",
         VAR_3, ((void*)0));

 FUNC_0(VAR_7, -1,
         "kvmmmu", "kvm_mmu_unsync_page",
         VAR_3, ((void*)0));

 FUNC_0(VAR_7, -1, "kvmmmu", "kvm_mmu_zap_page",
         VAR_3, ((void*)0));

 FUNC_0(VAR_7, -1, "kvmmmu",
   "kvm_mmu_prepare_zap_page", VAR_3,
   ((void*)0));

 FUNC_1(VAR_7, VAR_6,
          "is_writable_pte");
}
