
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char**,char*,char const*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (int ,struct stat*) ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(char **VAR_1, const char *VAR_2)
{
 struct stat VAR_3;
 const char *VAR_4 = FUNC_5(VAR_0);


 if (FUNC_4(FUNC_2("%s/perf.html", VAR_4), &VAR_3)
     || !FUNC_0(VAR_3.st_mode)) {
  FUNC_3("'%s': not a documentation directory.", VAR_4);
  return -1;
 }

 return FUNC_1(VAR_1, "%s/%s.html", VAR_4, VAR_2);
}
