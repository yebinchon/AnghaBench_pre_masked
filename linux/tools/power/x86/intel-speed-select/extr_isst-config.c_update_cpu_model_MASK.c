
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
 unsigned int VAR_1, VAR_2, VAR_3;
 unsigned int VAR_4, VAR_5;

 FUNC_0(1, VAR_4, VAR_1, VAR_2, VAR_3);
 VAR_5 = (VAR_4 >> 8) & 0xf;
 VAR_0 = (VAR_4 >> 4) & 0xf;
 if (VAR_5 == 6 || VAR_5 == 0xf)
  VAR_0 += ((VAR_4 >> 16) & 0xf) << 4;
}
