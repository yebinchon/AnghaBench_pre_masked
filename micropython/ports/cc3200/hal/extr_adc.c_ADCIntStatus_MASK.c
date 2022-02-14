
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (unsigned long) ;

unsigned long FUNC_1(unsigned long VAR_6, unsigned long VAR_7)
{
  unsigned long VAR_8;
  unsigned long VAR_9;
  unsigned long VAR_10;




  VAR_9 = (VAR_7 == VAR_0)?0x00001000:
            (VAR_7 == VAR_1)?0x00002000:
            (VAR_7 == VAR_2)?0x00004000:0x00008000;

  VAR_10 = FUNC_0(VAR_4 +
                     VAR_5)& VAR_9;





  VAR_8 = VAR_3 + VAR_7;




  VAR_10 |= FUNC_0(VAR_6 + VAR_8) & 0xf;




  return(VAR_10);
}
