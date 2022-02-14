
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int,int,int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int
FUNC_2 (unsigned VAR_1)
{
  int VAR_2;

  VAR_1 &= VAR_0;
  VAR_1 <<= 11;
  VAR_2 = FUNC_0 (VAR_1, 20, 20);
  VAR_2 <<= 11;
  VAR_2 |= FUNC_0 (VAR_1, 9, 19);
  VAR_2 <<= 2;
  VAR_2 |= FUNC_0 (VAR_1, 5, 6);
  VAR_2 <<= 5;
  VAR_2 |= FUNC_0 (VAR_1, 0, 4);
  VAR_2 <<= 2;
  VAR_2 |= FUNC_0 (VAR_1, 7, 8);
  return FUNC_1 (VAR_2, 21) << 11;
}
