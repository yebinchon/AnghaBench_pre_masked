
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (scalar_t__) ;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 long FUNC_1 (unsigned long,unsigned short*,unsigned short*,unsigned long,unsigned long) ;
 long FUNC_2 (unsigned long,unsigned long*,unsigned long*,unsigned long,unsigned long) ;
 long FUNC_3 (unsigned long,unsigned char*,unsigned char*,unsigned long,unsigned long) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;

long FUNC_4(unsigned long VAR_5, unsigned char *VAR_6,
                   unsigned char *VAR_7, unsigned long VAR_8,
                   unsigned long VAR_9)
{
  unsigned long VAR_10;
  long VAR_11;




  VAR_10 = (FUNC_0(VAR_5 + VAR_1) & VAR_0);




  if( !((VAR_10 == VAR_4) || (VAR_10 == VAR_2) ||
     (VAR_10 == VAR_3)) )
  {
    return -1;
  }

  if( VAR_10 == VAR_4 )
  {



    VAR_11 = FUNC_3(VAR_5,VAR_6,VAR_7,VAR_8,VAR_9);
  }
  else if( VAR_10 == VAR_2 )
  {




    VAR_11 = FUNC_1(VAR_5,(unsigned short *)VAR_6,
                  (unsigned short *)VAR_7,VAR_8,VAR_9);
  }
  else
  {



    VAR_11 = FUNC_2(VAR_5,(unsigned long *)VAR_6,
                  (unsigned long *)VAR_7,VAR_8,VAR_9);
  }




  return VAR_11;

}
