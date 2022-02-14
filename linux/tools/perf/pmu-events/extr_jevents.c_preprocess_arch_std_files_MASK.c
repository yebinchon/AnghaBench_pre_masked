
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct FTW {int level; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int ,void*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, const struct stat *VAR_3,
    int VAR_4, struct FTW *VAR_5)
{
 int VAR_6 = VAR_5->level;
 int VAR_7 = VAR_4 == VAR_0;

 if (VAR_6 == 1 && VAR_7 && FUNC_0(VAR_2))
  return FUNC_1(VAR_2, VAR_1, (void *)VAR_3);

 return 0;
}
