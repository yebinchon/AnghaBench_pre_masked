
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(unsigned int VAR_1,
       unsigned int *VAR_2,
       unsigned int *VAR_3)
{
 unsigned int VAR_4;

 if (VAR_1 < 6900 || VAR_1 > 219000)
  return -VAR_0;
 VAR_4 = (28224000 * 2) / VAR_1;
 VAR_4 = (VAR_4 - 1) / 2;
 if (VAR_4 < 0x100)
  *VAR_2 = VAR_4 + 0xC00;
 else if (VAR_4 < 0x200)
  *VAR_2 = VAR_4 + 0x800;
 else if (VAR_4 < 0x400)
  *VAR_2 = VAR_4 & 0x1ff;
 else if (VAR_4 < 0x800) {
  *VAR_2 = ((VAR_4 >> 1) & 0x1ff) + 0x200;
  VAR_4 &= ~1;
 } else {
  *VAR_2 = ((VAR_4 >> 2) & 0x1ff) + 0x400;
  VAR_4 &= ~3;
 }
 if (VAR_3)
  *VAR_3 = (28224000 / (VAR_4 + 1));
 return 0;
}
