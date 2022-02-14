
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_vm {scalar_t__ svm_port; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(const struct sockaddr_vm *VAR_1)
{
 return VAR_1->svm_port != VAR_0;
}
