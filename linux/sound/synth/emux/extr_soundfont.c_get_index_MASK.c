
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 if (FUNC_0(VAR_2))
  VAR_5 = VAR_4 + VAR_0;
 else
  VAR_5 = VAR_3;
 VAR_5 = VAR_5 % VAR_1;
 if (VAR_5 < 0)
  return -1;
 return VAR_5;
}
