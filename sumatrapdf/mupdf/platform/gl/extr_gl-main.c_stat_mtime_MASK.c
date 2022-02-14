
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct stat {int st_mtime; } ;


 scalar_t__ FUNC_0 (char const*,struct stat*) ;

time_t
FUNC_1(const char *VAR_0)
{
 struct stat VAR_1;

 if (FUNC_0(VAR_0, &VAR_1) < 0)
  return 0;

 return VAR_1.st_mtime;
}
