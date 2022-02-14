
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_vm {scalar_t__ svm_family; scalar_t__* svm_zero; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(const struct sockaddr_vm *VAR_4)
{
 if (!VAR_4)
  return -VAR_2;

 if (VAR_4->svm_family != VAR_0)
  return -VAR_1;

 if (VAR_4->svm_zero[0] != 0)
  return -VAR_3;

 return 0;
}
