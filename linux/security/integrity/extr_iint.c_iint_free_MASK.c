
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct integrity_iint_cache {unsigned long flags; unsigned long atomic_flags; scalar_t__ measured_pcrs; void* evm_status; void* ima_creds_status; void* ima_read_status; void* ima_bprm_status; void* ima_mmap_status; void* ima_file_status; scalar_t__ version; int * ima_hash; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct integrity_iint_cache*) ;

__attribute__((used)) static void FUNC_2(struct integrity_iint_cache *VAR_2)
{
 FUNC_0(VAR_2->ima_hash);
 VAR_2->ima_hash = ((void*)0);
 VAR_2->version = 0;
 VAR_2->flags = 0UL;
 VAR_2->atomic_flags = 0UL;
 VAR_2->ima_file_status = VAR_0;
 VAR_2->ima_mmap_status = VAR_0;
 VAR_2->ima_bprm_status = VAR_0;
 VAR_2->ima_read_status = VAR_0;
 VAR_2->ima_creds_status = VAR_0;
 VAR_2->evm_status = VAR_0;
 VAR_2->measured_pcrs = 0;
 FUNC_1(VAR_1, VAR_2);
}
