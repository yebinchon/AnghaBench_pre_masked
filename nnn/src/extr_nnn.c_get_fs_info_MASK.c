
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statvfs {size_t f_blocks; int f_bsize; size_t f_bavail; int f_frsize; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (char const*,struct statvfs*) ;

__attribute__((used)) static size_t FUNC_2(const char *VAR_1, bool VAR_2)
{
 struct statvfs VAR_3;

 if (FUNC_1(VAR_1, &VAR_3) == -1)
  return 0;

 if (VAR_2 == VAR_0)
  return VAR_3.f_blocks << FUNC_0((int)(VAR_3.f_bsize >> 1));

 return VAR_3.f_bavail << FUNC_0((int)(VAR_3.f_frsize >> 1));
}
