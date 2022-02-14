
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_0(unsigned char VAR_11)
{
    uint8_t VAR_12;


    while ( 1 )
    {

     VAR_0 = (1<<VAR_3) | (1<<VAR_4) | (1<<VAR_2);


     while(!(VAR_0 & (1<<VAR_3)));


     VAR_12 = VAR_10 & 0xF8;
     if ( (VAR_12 != VAR_9) && (VAR_12 != VAR_8)) continue;


     VAR_1 = VAR_11;
     VAR_0 = (1<<VAR_3) | (1<<VAR_2);


     while(!(VAR_0 & (1<<VAR_3)));


     VAR_12 = VAR_10 & 0xF8;
     if ( (VAR_12 == VAR_7 )||(VAR_12 ==VAR_6) )
     {

         VAR_0 = (1<<VAR_3) | (1<<VAR_2) | (1<<VAR_5);


         while(VAR_0 & (1<<VAR_5));

         continue;
     }

     break;
     }

}
