
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_ino; int st_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*) ;
 int VAR_0 ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,struct stat*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_1)
{
 if (VAR_1[0] == '@') {
  VAR_0 = FUNC_2(VAR_1 + 1);
  return;
 }

 struct stat VAR_2;

 if (FUNC_3(VAR_1, &VAR_2))
  FUNC_1("stat failed: %s: %m\n", VAR_1);

 if (!FUNC_0(VAR_2.st_mode))
  FUNC_1("cgroup supposed to be a directory: %s\n", VAR_1);

 VAR_0 = VAR_2.st_ino;
}
