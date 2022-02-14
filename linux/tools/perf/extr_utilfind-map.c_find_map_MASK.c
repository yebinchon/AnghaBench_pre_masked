
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,char*,void**,void**,int*) ;
 int VAR_0 ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,char const*,int ) ;

__attribute__((used)) static int FUNC_7(void **VAR_1, void **VAR_2, const char *VAR_3)
{
 FILE *VAR_4;
 char VAR_5[128];
 int VAR_6 = 0;

 VAR_4 = FUNC_2("/proc/self/maps", "r");
 if (!VAR_4) {
  FUNC_3(VAR_0, "cannot open maps\n");
  return -1;
 }

 while (!VAR_6 && FUNC_1(VAR_5, sizeof(VAR_5), VAR_4)) {
  int VAR_7 = -1;


  if (2 != FUNC_4(VAR_5, "%p-%p r-xp %*x %*x:%*x %*u %n",
    VAR_1, VAR_2, &VAR_7))
   continue;
  if (VAR_7 < 0)
   continue;

  if (!FUNC_6(&VAR_5[VAR_7], VAR_3, FUNC_5(VAR_3)))
   VAR_6 = 1;
 }

 FUNC_0(VAR_4);
 return !VAR_6;
}
