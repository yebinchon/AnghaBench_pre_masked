
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 unsigned int FUNC_0 (char const**) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 () ;
 int FUNC_3 (char const*,struct stat*) ;
 int FUNC_4 (char*,size_t,char*,char const*) ;

__attribute__((used)) static const char *FUNC_5(char *VAR_0, size_t VAR_1)
{
 const char *VAR_2[] = { "./tools/perf/tests", "./tests", };
        char *VAR_3;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); ++VAR_4) {
  struct stat VAR_5;
  if (!FUNC_3(VAR_2[VAR_4], &VAR_5)) {
   FUNC_4(VAR_0, VAR_1, "%s/shell", VAR_2[VAR_4]);
   if (!FUNC_3(VAR_2[VAR_4], &VAR_5))
    return VAR_0;
  }
 }


        VAR_3 = FUNC_2();
        FUNC_4(VAR_0, VAR_1, "%s/tests/shell", VAR_3);
 FUNC_1(VAR_3);
 return VAR_0;
}
