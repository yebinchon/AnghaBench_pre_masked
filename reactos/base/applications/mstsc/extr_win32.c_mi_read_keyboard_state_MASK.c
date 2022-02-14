
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 short FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_1(void)
{
  short VAR_3;
  int VAR_4;

  VAR_4 = 0;
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3 & 0x0001)
  {
    VAR_4 |= 1;
  }
  VAR_3 = FUNC_0(VAR_1);
  if (VAR_3 & 0x0001)
  {
    VAR_4 |= 2;
  }
  VAR_3 = FUNC_0(VAR_0);
  if (VAR_3 & 0x0001)
  {
    VAR_4 |= 4;
  }
  return VAR_4;
}
