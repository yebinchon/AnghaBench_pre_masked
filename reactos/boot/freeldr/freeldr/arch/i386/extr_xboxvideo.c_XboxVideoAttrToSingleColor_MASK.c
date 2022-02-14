
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int UCHAR ;



__attribute__((used)) static ULONG
FUNC_0(UCHAR VAR_0)
{
  UCHAR VAR_1;

  VAR_1 = (0 == (VAR_0 & 0x08) ? 127 : 255);

  return 0xff000000 |
         (0 == (VAR_0 & 0x04) ? 0 : (VAR_1 << 16)) |
         (0 == (VAR_0 & 0x02) ? 0 : (VAR_1 << 8)) |
         (0 == (VAR_0 & 0x01) ? 0 : VAR_1);
}
