
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_2__ {scalar_t__ mode; void* repStart; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 void** VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;

void FUNC_5(void *const VAR_10, uint8_t VAR_11, uint8_t VAR_12, uint8_t VAR_13)
{

 while (!FUNC_4()) {FUNC_3(1);}

 VAR_2 = (1 << VAR_5)|(1 << VAR_7);
 FUNC_0();

 VAR_4.repStart = VAR_12;

 VAR_6 = (uint8_t *)VAR_10;
 VAR_9 = VAR_11;
 VAR_8 = 0;



 if (VAR_4.mode == VAR_1)
 {
  VAR_4.mode = VAR_0;
  VAR_3 = VAR_6[VAR_8++];
  FUNC_2();
 }
 else
 {
  VAR_4.mode = VAR_0;
  FUNC_1();
 }
 if(VAR_13){

  while (!FUNC_4()){FUNC_3(1);}
 }
}
