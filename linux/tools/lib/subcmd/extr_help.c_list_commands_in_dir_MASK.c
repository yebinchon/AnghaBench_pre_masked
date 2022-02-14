
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char const* d_name; } ;
struct cmdnames {int dummy; } ;
typedef int DIR ;


 int FUNC_0 (struct cmdnames*,char const*,int) ;
 int FUNC_1 (char**,char const*) ;
 int FUNC_2 (char**,char*,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (char const*) ;
 struct dirent* FUNC_8 (int *) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char const*,char const*) ;

__attribute__((used)) static void FUNC_11(struct cmdnames *VAR_0,
      const char *VAR_1,
      const char *VAR_2)
{
 int VAR_3;
 DIR *VAR_4 = FUNC_7(VAR_1);
 struct dirent *VAR_5;
 char *VAR_6 = ((void*)0);

 if (!VAR_4)
  return;
 if (!VAR_2)
  VAR_2 = "perf-";
 VAR_3 = FUNC_9(VAR_2);

 FUNC_2(&VAR_6, "%s/", VAR_1);

 while ((VAR_5 = FUNC_8(VAR_4)) != ((void*)0)) {
  int VAR_7;

  if (!FUNC_10(VAR_5->d_name, VAR_2))
   continue;

  FUNC_1(&VAR_6, VAR_5->d_name);
  if (!FUNC_6(VAR_6))
   continue;

  VAR_7 = FUNC_9(VAR_5->d_name) - VAR_3;
  if (FUNC_5(VAR_5->d_name, ".exe"))
   VAR_7 -= 4;

  FUNC_0(VAR_0, VAR_5->d_name + VAR_3, VAR_7);
 }
 FUNC_3(VAR_4);
 FUNC_4(VAR_6);
}
