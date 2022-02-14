
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int) ;
 char FUNC_1 (char const) ;

__attribute__((used)) static bool FUNC_2(char const*VAR_0)
{
 return VAR_0 && FUNC_1 (VAR_0[0]) == 'r' && FUNC_0 (VAR_0, 3) == 2
  && '0' <= VAR_0[1] && VAR_0[1] <= '7';
}
