
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_i2s {int dummy; } ;
typedef int s8 ;


 int VAR_0 ;

__attribute__((used)) static s8 FUNC_0(const struct sun4i_i2s *VAR_1, int VAR_2)
{
 if (VAR_2 < 16 || VAR_2 > 32)
  return -VAR_0;

 if (VAR_2 % 4)
  return -VAR_0;

 return (VAR_2 - 16) / 4;
}
