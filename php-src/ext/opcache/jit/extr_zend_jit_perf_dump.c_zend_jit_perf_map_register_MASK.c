
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (int *,char*,size_t,size_t,char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void FUNC_5(const char *VAR_0, void *VAR_1, size_t VAR_2)
{
 static FILE *VAR_3 = ((void*)0);

 if (!VAR_3) {
  char VAR_4[64];

  FUNC_4(VAR_4, "/tmp/perf-%d.map", FUNC_2());
  VAR_3 = FUNC_0(VAR_4, "w");
  if (!VAR_3) {
   return;
  }
     FUNC_3(VAR_3);
 }
 FUNC_1(VAR_3, "%zx %zx %s\n", (size_t)(uintptr_t)VAR_1, VAR_2, VAR_0);
}
