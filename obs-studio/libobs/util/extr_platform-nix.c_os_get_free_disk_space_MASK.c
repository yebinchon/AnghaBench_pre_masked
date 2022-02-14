
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct statvfs {scalar_t__ f_bavail; scalar_t__ f_frsize; } ;


 scalar_t__ FUNC_0 (char const*,struct statvfs*) ;

uint64_t FUNC_1(const char *VAR_0)
{
 struct statvfs VAR_1;
 if (FUNC_0(VAR_0, &VAR_1) != 0)
  return 0;

 return (uint64_t)VAR_1.f_frsize * (uint64_t)VAR_1.f_bavail;
}
