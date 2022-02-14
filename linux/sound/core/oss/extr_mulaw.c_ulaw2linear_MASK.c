
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned char VAR_4 ;

__attribute__((used)) static int FUNC_0(unsigned char VAR_5)
{
 int VAR_6;


 VAR_5 = ~VAR_5;





 VAR_6 = ((VAR_5 & VAR_1) << 3) + VAR_0;
 VAR_6 <<= ((unsigned)VAR_5 & VAR_2) >> VAR_3;

 return ((VAR_5 & VAR_4) ? (VAR_0 - VAR_6) : (VAR_6 - VAR_0));
}
