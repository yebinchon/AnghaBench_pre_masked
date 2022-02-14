
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int,int*,int ) ;

int FUNC_9(void)
{
 int VAR_3, VAR_4;

 if (!FUNC_4()) {
  FUNC_5("Must be run on an Intel CPU, skipping test\n");
  FUNC_1(VAR_0);
 }

 if (FUNC_7(((void*)0))) {
  FUNC_5("Unrestricted guest must be disabled, skipping test\n");
  FUNC_1(VAR_0);
 }

 VAR_3 = FUNC_3();

 for (int VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
  int VAR_6;
  int VAR_7 = FUNC_2();

  if (VAR_7 < 0)
   FUNC_1(1);
  if (VAR_7 == 0) {
   FUNC_6();
   FUNC_1(0);
  }
  while (FUNC_8(VAR_7, &VAR_6, VAR_2) != VAR_7)
   ;
 }

 VAR_4 = FUNC_3();
 FUNC_0(VAR_3 == VAR_4,
     "Warnings found in kernel.  Run 'dmesg' to inspect them.");

 return 0;
}
