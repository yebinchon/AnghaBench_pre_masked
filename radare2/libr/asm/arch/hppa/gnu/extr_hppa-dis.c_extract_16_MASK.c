
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (unsigned int,int) ;

__attribute__((used)) static int
FUNC_2 (unsigned VAR_0)
{
  int VAR_1, VAR_2, VAR_3;

  VAR_2 = FUNC_0 (VAR_0, 16);
  VAR_3 = FUNC_0 (VAR_0, 17);
  VAR_1 = FUNC_0 (VAR_0, 31);
  VAR_0 = (VAR_0 >> 1) & 0x1fff;
  VAR_0 = VAR_0 | (VAR_1 << 15) | ((VAR_1 ^ VAR_2) << 14) | ((VAR_1 ^ VAR_3) << 13);
  return FUNC_1 (VAR_0, 16);
}
