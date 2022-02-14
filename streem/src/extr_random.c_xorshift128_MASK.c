
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0(uint32_t VAR_0[4])
{
  uint32_t VAR_1 = VAR_0[0];
  uint32_t VAR_2 = VAR_0[1];
  uint32_t VAR_3 = VAR_0[2];
  uint32_t VAR_4 = VAR_0[3];
  uint32_t VAR_5;

  VAR_5 = VAR_1 ^ (VAR_1 << 11);
  VAR_1 = VAR_2; VAR_2 = VAR_3; VAR_3 = VAR_4;
  VAR_4 = (VAR_4 ^ (VAR_4 >> 19)) ^ (VAR_5 ^ (VAR_5 >> 8));
  VAR_0[0] = VAR_1;
  VAR_0[1] = VAR_2;
  VAR_0[2] = VAR_3;
  VAR_0[3] = VAR_4;
  return VAR_4;
}
