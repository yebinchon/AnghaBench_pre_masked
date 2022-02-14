
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {scalar_t__ f_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,struct statfs*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, unsigned long VAR_2)
{
 struct statfs VAR_3;

 if (FUNC_0(VAR_1, &VAR_3) < 0)
  return -VAR_0;
 if ((unsigned long)VAR_3.f_type != VAR_2)
  return -VAR_0;

 return 0;
}
