
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_int ;


 int* VAR_0 ;

__attribute__((used)) static int
FUNC_0(const char* VAR_1, const char* VAR_2)
{
  strm_int VAR_3;
  strm_int VAR_4;

  VAR_3 = VAR_0[(unsigned char)*VAR_1];
  if (VAR_1 + VAR_3 > VAR_2) return 1;
  for (VAR_4 = 1; VAR_4 < VAR_3; ++VAR_4)
    if ((VAR_1[VAR_4] & 0xc0) != 0x80)
      return 1;
  return VAR_3;
}
