
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {scalar_t__ d_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*,struct dirent*) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_1, struct dirent *VAR_2)
{
 if (VAR_2->d_type != VAR_0)
  return 0;
 return FUNC_0(VAR_1, VAR_2);
}
