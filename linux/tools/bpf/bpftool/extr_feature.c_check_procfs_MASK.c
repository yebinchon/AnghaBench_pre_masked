
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {scalar_t__ f_type; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (char*,struct statfs*) ;

__attribute__((used)) static bool FUNC_1(void)
{
 struct statfs VAR_1;

 if (FUNC_0("/proc", &VAR_1) < 0)
  return 0;
 if ((unsigned long)VAR_1.f_type != VAR_0)
  return 0;

 return 1;
}
