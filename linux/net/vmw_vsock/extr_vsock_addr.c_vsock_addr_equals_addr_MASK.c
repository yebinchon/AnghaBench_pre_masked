
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_vm {scalar_t__ svm_cid; scalar_t__ svm_port; } ;



bool FUNC_0(const struct sockaddr_vm *VAR_0,
       const struct sockaddr_vm *VAR_1)
{
 return VAR_0->svm_cid == VAR_1->svm_cid &&
  VAR_0->svm_port == VAR_1->svm_port;
}
