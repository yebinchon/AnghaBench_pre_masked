
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int millisecond; int day; int month; int year; } ;
typedef TYPE_1__ RTCDateTime ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 () ;
 int VAR_8 ;

void FUNC_2(){
  if(VAR_4 == VAR_1){
    RTCDateTime VAR_9;
    VAR_9.year = VAR_8;
    VAR_9.month = VAR_7;
    VAR_9.day = VAR_3;


    VAR_9.millisecond = (VAR_5 * 60 + VAR_6) * 60 * 1000;
    FUNC_0(&VAR_2, &VAR_9);
  } else if (VAR_4 == VAR_0){
    FUNC_1();
  }
}
