
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct sockaddr_vm {void* svm_port; void* svm_cid; int svm_family; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr_vm*,int ,int) ;

void FUNC_1(struct sockaddr_vm *VAR_1, u32 VAR_2, u32 VAR_3)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->svm_family = VAR_0;
 VAR_1->svm_cid = VAR_2;
 VAR_1->svm_port = VAR_3;
}
