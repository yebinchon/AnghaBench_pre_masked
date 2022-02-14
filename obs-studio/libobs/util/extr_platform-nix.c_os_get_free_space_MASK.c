
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statvfs {scalar_t__ f_bfree; scalar_t__ f_bsize; } ;
typedef int int64_t ;


 scalar_t__ FUNC_0 (char const*,struct statvfs*) ;

int64_t FUNC_1(const char *VAR_0)
{
 struct statvfs VAR_1;
 int64_t VAR_2 = (int64_t)FUNC_0(VAR_0, &VAR_1);

 if (VAR_2 == 0)
  VAR_2 = (int64_t)VAR_1.f_bsize * (int64_t)VAR_1.f_bfree;

 return VAR_2;
}
