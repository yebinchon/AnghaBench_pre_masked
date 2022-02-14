
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int *) ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(vm_offset_t VAR_6)
{
 kern_return_t VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_2, &VAR_3, &VAR_4);
 if (VAR_7 != VAR_0) {
  FUNC_2(VAR_1, "failed to read vm page: mach_vm_read(): %s (%d)", FUNC_0(VAR_7), VAR_7);
  return -1;
 }
 return 0;
}
