
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;

__attribute__((used)) static int FUNC_1(void)
{
 unsigned short VAR_3 = VAR_2, VAR_4 = VAR_1;
 unsigned short VAR_5;
 unsigned short VAR_6;

 if (VAR_4 < VAR_3)
  return -VAR_0;
 VAR_5 = VAR_4 - VAR_3 + 1;
 VAR_6 = (unsigned short) FUNC_0() % VAR_5;
 return VAR_6 + VAR_3;
}
