
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (unsigned int,int ) ;

void FUNC_1(unsigned int VAR_7, unsigned int VAR_8)
{
 unsigned int VAR_9;
 unsigned int VAR_10 = 16;
 unsigned int VAR_11 = 32;


 FUNC_0(VAR_6 | VAR_4, VAR_0);
 FUNC_0(VAR_6 | VAR_4 | VAR_1,
        VAR_0);
 FUNC_0(VAR_6 | VAR_4, VAR_0);


 while (VAR_10 != VAR_7) {
  if (VAR_10 < VAR_7) {
   VAR_9 = VAR_2;
   VAR_10++;
  } else {
   VAR_9 = 0;
   VAR_10--;
  }
  FUNC_0(VAR_5 | VAR_9, VAR_0);
  FUNC_0(VAR_1 | VAR_5 | VAR_9,
         VAR_0);
  FUNC_0(VAR_5 | VAR_9, VAR_0);
 }


 while (VAR_11 != VAR_8) {
  if (VAR_11 < VAR_8) {
   VAR_9 = VAR_2;
   VAR_11++;
  } else {
   VAR_9 = 0;
   VAR_11--;
  }
  FUNC_0(VAR_3 | VAR_9, VAR_0);
  FUNC_0(VAR_1 | VAR_3 | VAR_9,
         VAR_0);
  FUNC_0(VAR_3 | VAR_9, VAR_0);
 }
}
