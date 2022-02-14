
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct FTW {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, const struct stat *VAR_2,
      int VAR_3, struct FTW *VAR_4)
{
 if ((VAR_3 & VAR_0) && FUNC_1(VAR_1))
  FUNC_0("Removing cgroup: %s", VAR_1);
 return 0;
}
