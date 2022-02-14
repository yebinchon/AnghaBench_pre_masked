
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static uint64_t
FUNC_1 (int VAR_0, uint32_t VAR_1)
{
  uint64_t VAR_2 = 0;
  uint32_t VAR_3, VAR_4, VAR_5, VAR_6;

  VAR_3 = (VAR_1 >> 7) & 0x01;
  VAR_4 = VAR_1 & 0x7f;
  VAR_5 = VAR_4 >> 6;
  VAR_6 = (VAR_5 << 3) | (VAR_5 << 2)
    | (VAR_5 << 1) | VAR_5;
  if (VAR_0 == 8)
    {
      VAR_2 = (VAR_3 << (63-32))
 | ((VAR_5 ^ 1) << (62-32))
 | (VAR_6 << (58-32)) | (VAR_5 << (57-32))
 | (VAR_5 << (56-32)) | (VAR_5 << (55-32))
 | (VAR_4 << (48-32));
      VAR_2 <<= 32;
    }
  else if (VAR_0 == 4 || VAR_0 == 2)
    {
      VAR_2 = (VAR_3 << 31)
 | ((VAR_5 ^ 1) << 30)
 | (VAR_6 << 26)
 | (VAR_4 << 19);
    }
  else
    {

      FUNC_0 (0);
    }

  return VAR_2;
}
