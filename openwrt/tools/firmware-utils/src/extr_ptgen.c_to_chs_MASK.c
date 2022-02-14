
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;

__attribute__((used)) static void FUNC_0(long VAR_2, unsigned char VAR_3[3])
{
 int VAR_4,VAR_5,VAR_6;

 VAR_6 = (VAR_2 % VAR_1) + 1;
 VAR_2 = VAR_2 / VAR_1;
 VAR_5 = VAR_2 % VAR_0;
 VAR_2 = VAR_2 / VAR_0;
 VAR_4 = VAR_2;

 VAR_3[0] = VAR_5;
 VAR_3[1] = VAR_6 | ((VAR_4 >> 2) & 0xC0);
 VAR_3[2] = VAR_4 & 0xFF;

 return;
}
