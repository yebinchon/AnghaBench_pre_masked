
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct integrity_iint_cache {int mutex; void* evm_status; void* ima_creds_status; void* ima_read_status; void* ima_bprm_status; void* ima_mmap_status; void* ima_file_status; } ;


 void* VAR_0 ;
 int FUNC_0 (struct integrity_iint_cache*,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 struct integrity_iint_cache *VAR_2 = VAR_1;

 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->ima_file_status = VAR_0;
 VAR_2->ima_mmap_status = VAR_0;
 VAR_2->ima_bprm_status = VAR_0;
 VAR_2->ima_read_status = VAR_0;
 VAR_2->ima_creds_status = VAR_0;
 VAR_2->evm_status = VAR_0;
 FUNC_1(&VAR_2->mutex);
}
