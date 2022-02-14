
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(uint8_t *VAR_0, const char *VAR_1, size_t VAR_2)
{
 while (VAR_2--) {
  int VAR_3 = FUNC_0(*VAR_1++);
  int VAR_4 = FUNC_0(*VAR_1++);

  if ((VAR_3 < 0) || (VAR_4 < 0))
   return -1;
  *VAR_0++ = (VAR_3 << 4) | VAR_4;
 }
 return 0;
}
