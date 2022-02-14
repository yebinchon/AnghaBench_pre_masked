
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(0xfa, 0x40) + VAR_0;
 if (VAR_1 >= FUNC_2(0xfa, 0x5c))
  VAR_1 -= FUNC_2(0xfa, 0x5c) - FUNC_2(0xed, 0x40);
 else if (VAR_1 >= FUNC_2(0xfa, 0x55))
  VAR_1 -= FUNC_2(0xfa, 0x55) - FUNC_2(0xee, 0xfa);
 else if (VAR_1 >= FUNC_2(0xfa, 0x40))
  VAR_1 -= FUNC_2(0xfa, 0x40) - FUNC_2(0xee, 0xef);
 return FUNC_0(VAR_1) << 8 | FUNC_1(VAR_1);
}
