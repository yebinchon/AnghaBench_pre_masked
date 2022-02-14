
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct stat {int st_mtime; int st_atime; } ;


 int FUNC_0 (int,char*,char*) ;
 scalar_t__ FUNC_1 (char*,struct stat*) ;

void
FUNC_2(char *VAR_0, time_t *VAR_1)
{
 struct stat VAR_2;

 if (FUNC_1(VAR_0, &VAR_2))
  FUNC_0(1, "%s", VAR_0);
 VAR_1[0] = VAR_2.st_atime;
 VAR_1[1] = VAR_2.st_mtime;
}
