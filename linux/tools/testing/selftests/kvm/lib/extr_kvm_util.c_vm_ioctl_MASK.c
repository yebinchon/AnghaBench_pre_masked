
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vm {int fd; } ;


 int FUNC_0 (int,char*,unsigned long,int,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,unsigned long,void*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct kvm_vm *VAR_1, unsigned long VAR_2, void *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1->fd, VAR_2, VAR_3);
 FUNC_0(VAR_4 == 0, "vm ioctl %lu failed, rc: %i errno: %i (%s)",
  VAR_2, VAR_4, VAR_0, FUNC_2(VAR_0));
}
