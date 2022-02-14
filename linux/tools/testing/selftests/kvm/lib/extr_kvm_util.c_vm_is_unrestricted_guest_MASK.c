
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vm {int dummy; } ;
typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 size_t FUNC_3 (char*,int,int,int *) ;

bool FUNC_4(struct kvm_vm *VAR_2)
{
 char VAR_3 = 'N';
 size_t VAR_4;
 FILE *VAR_5;

 if (VAR_2 == ((void*)0)) {

  VAR_5 = FUNC_2(VAR_0, "r");
  FUNC_0(VAR_5 != ((void*)0), "Error in opening KVM dev file: %d",
       VAR_1);
  FUNC_1(VAR_5);
 }

 VAR_5 = FUNC_2("/sys/module/kvm_intel/parameters/unrestricted_guest", "r");
 if (VAR_5) {
  VAR_4 = FUNC_3(&VAR_3, sizeof(char), 1, VAR_5);
  FUNC_0(VAR_4 == 1, "Unable to read from param file.");
  FUNC_1(VAR_5);
 }

 return VAR_3 == 'Y';
}
