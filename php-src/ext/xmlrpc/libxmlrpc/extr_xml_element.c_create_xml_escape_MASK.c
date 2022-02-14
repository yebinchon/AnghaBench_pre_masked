
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(char *VAR_0, unsigned char VAR_1)
{
  int VAR_2 = 0;

  VAR_0[VAR_2++] = '&';
  VAR_0[VAR_2++] = '#';
  if(VAR_1 >= 100) {
    VAR_0[VAR_2++] = VAR_1 / 100 + '0';
    VAR_1 = VAR_1 % 100;
  }
  VAR_0[VAR_2++] = VAR_1 / 10 + '0';
  VAR_1 = VAR_1 % 10;

  VAR_0[VAR_2++] = VAR_1 + '0';
  VAR_0[VAR_2++] = ';';
  return VAR_2;
}
