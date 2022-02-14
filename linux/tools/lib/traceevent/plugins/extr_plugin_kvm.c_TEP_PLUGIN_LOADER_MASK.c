
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct tep_handle*,int,char*,char*,int ,int *) ;
 int FUNC_2 (struct tep_handle*,int ,int ,char*,int ,int ) ;

int FUNC_3(struct tep_handle *VAR_10)
{
 FUNC_0();

 FUNC_1(VAR_10, -1, "kvm", "kvm_exit",
       VAR_4, ((void*)0));

 FUNC_1(VAR_10, -1, "kvm", "kvm_emulate_insn",
       VAR_3, ((void*)0));

 FUNC_1(VAR_10, -1, "kvm", "kvm_nested_vmexit",
       VAR_7, ((void*)0));

 FUNC_1(VAR_10, -1, "kvm", "kvm_nested_vmexit_inject",
       VAR_8, ((void*)0));

 FUNC_1(VAR_10, -1, "kvmmmu", "kvm_mmu_get_page",
       VAR_5, ((void*)0));

 FUNC_1(VAR_10, -1, "kvmmmu", "kvm_mmu_sync_page",
       VAR_6, ((void*)0));

 FUNC_1(VAR_10, -1,
       "kvmmmu", "kvm_mmu_unsync_page",
       VAR_6, ((void*)0));

 FUNC_1(VAR_10, -1, "kvmmmu", "kvm_mmu_zap_page",
       VAR_6, ((void*)0));

 FUNC_1(VAR_10, -1, "kvmmmu",
   "kvm_mmu_prepare_zap_page", VAR_6,
   ((void*)0));

 FUNC_2(VAR_10,
        VAR_9,
        VAR_0,
        "is_writable_pte",
        VAR_1,
        VAR_2);
 return 0;
}
