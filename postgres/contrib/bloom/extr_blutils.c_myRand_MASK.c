
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;


 int VAR_0 ;

__attribute__((used)) static int32
FUNC_0(void)
{
 int32 VAR_1,
    VAR_2,
    VAR_3;


 VAR_1 = VAR_0 / 127773;
 VAR_2 = VAR_0 % 127773;
 VAR_3 = 16807 * VAR_2 - 2836 * VAR_1;
 if (VAR_3 < 0)
  VAR_3 += 0x7fffffff;
 VAR_0 = VAR_3;

 return (VAR_3 - 1);
}
