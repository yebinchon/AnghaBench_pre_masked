
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (char const*,char**,int ) ;

__attribute__((used)) static int FUNC_1(unsigned *VAR_2, const char *VAR_3)
{
 unsigned long VAR_4;
 char *VAR_5;

 VAR_1 = 0;
 VAR_4 = FUNC_0(VAR_3, &VAR_5, 0);
 if (VAR_1 || *VAR_5 || VAR_4 > VAR_0)
  return -1;
 *VAR_2 = VAR_4;
 return 0;
}
