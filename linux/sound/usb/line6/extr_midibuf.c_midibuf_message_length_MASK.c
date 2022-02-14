
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned char VAR_0)
{
 int VAR_1;

 if (VAR_0 < 0x80)
  VAR_1 = -1;
 else if (VAR_0 < 0xf0) {
  static const int VAR_2[] = { 3, 3, 3, 3, 2, 2, 3 };

  VAR_1 = VAR_2[(VAR_0 >> 4) - 8];
 } else {





  static const int VAR_3[] = { -1, 2, -1, 2, -1, -1, 1, 1, 1, 1,
   1, 1, 1, -1, 1, 1
  };
  VAR_1 = VAR_3[VAR_0 & 0x0f];
 }

 return VAR_1;
}
