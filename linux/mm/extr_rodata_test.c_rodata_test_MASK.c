
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zero ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (void*,void*,int) ;
 int VAR_3 ;

void FUNC_3(void)
{
 unsigned long VAR_4, VAR_5;
 int VAR_6 = 0;



 if (!VAR_3) {
  FUNC_0("test 1 fails (start data)\n");
  return;
 }


 if (!FUNC_2((void *)&VAR_3,
    (void *)&VAR_6, sizeof(VAR_6))) {
  FUNC_0("test data was not read only\n");
  return;
 }


 if (VAR_3 == VAR_6) {
  FUNC_0("test data was changed\n");
  return;
 }


 VAR_4 = (unsigned long)VAR_2;
 VAR_5 = (unsigned long)VAR_1;
 if (VAR_4 & (VAR_0 - 1)) {
  FUNC_0("start of .rodata is not page size aligned\n");
  return;
 }
 if (VAR_5 & (VAR_0 - 1)) {
  FUNC_0("end of .rodata is not page size aligned\n");
  return;
 }

 FUNC_1("all tests were successful\n");
}
