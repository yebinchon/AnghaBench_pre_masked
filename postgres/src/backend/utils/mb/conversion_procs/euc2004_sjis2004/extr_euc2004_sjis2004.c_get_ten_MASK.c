
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(int VAR_0, int *VAR_1)
{
 int VAR_2;

 if (VAR_0 >= 0x40 && VAR_0 <= 0x7e)
 {
  VAR_2 = VAR_0 - 0x3f;
  *VAR_1 = 1;
 }
 else if (VAR_0 >= 0x80 && VAR_0 <= 0x9e)
 {
  VAR_2 = VAR_0 - 0x40;
  *VAR_1 = 1;
 }
 else if (VAR_0 >= 0x9f && VAR_0 <= 0xfc)
 {
  VAR_2 = VAR_0 - 0x9e;
  *VAR_1 = 0;
 }
 else
 {
  VAR_2 = -1;
  *VAR_1 = 0;
 }
 return VAR_2;
}
