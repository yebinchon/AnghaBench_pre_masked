
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,char const*,char const*) ;
 scalar_t__ FUNC_1 (char*,struct stat*) ;
 char* FUNC_2 () ;

__attribute__((used)) static int FUNC_3(const char *VAR_1)
{
 struct stat VAR_2;
 char VAR_3[VAR_0];
 const char *VAR_4 = FUNC_2();

 if (!VAR_4)
  return 0;


 FUNC_0(VAR_3, VAR_0, "%s/bus/event_source/devices/%s/cpus",
    VAR_4, VAR_1);
 if (FUNC_1(VAR_3, &VAR_2) == 0)
  return 1;

 return 0;
}
