
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,...) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int,char*,int) ;

__attribute__((used)) static void FUNC_7(int VAR_4)
{
 __u64 VAR_5;
 char VAR_6[] = "test\n";
 int VAR_7, VAR_8;

 VAR_8 = FUNC_2("/proc/self/comm", VAR_2|VAR_1);
 if (VAR_8 < 0) {
  FUNC_3("couldn't open /proc\n");
  FUNC_1(1);
 }
 VAR_5 = FUNC_5();
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (FUNC_6(VAR_8, VAR_6, sizeof(VAR_6)) < 0) {
   FUNC_3("task rename failed: %s\n", FUNC_4(VAR_3));
   FUNC_0(VAR_8);
   return;
  }
 }
 FUNC_3("task_rename:%d: %lld events per sec\n",
        VAR_4, VAR_0 * 1000000000ll / (FUNC_5() - VAR_5));
 FUNC_0(VAR_8);
}
