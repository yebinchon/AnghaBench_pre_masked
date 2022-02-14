
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(void)
{
 const char *VAR_0 = "temp-perf-code-reading-test-file--";
 FILE *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 1000; VAR_2++) {
  VAR_1 = FUNC_1(VAR_0, "w+");
  if (VAR_1) {
   FUNC_0(VAR_1);
   FUNC_2(VAR_0);
  }
 }
}
