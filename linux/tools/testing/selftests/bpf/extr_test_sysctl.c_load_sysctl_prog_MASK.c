
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_test {scalar_t__ prog_file; } ;


 int FUNC_0 (struct sysctl_test*) ;
 int FUNC_1 (struct sysctl_test*,char const*) ;

__attribute__((used)) static int FUNC_2(struct sysctl_test *VAR_0, const char *VAR_1)
{
  return VAR_0->prog_file
   ? FUNC_0(VAR_0)
   : FUNC_1(VAR_0, VAR_1);
}
