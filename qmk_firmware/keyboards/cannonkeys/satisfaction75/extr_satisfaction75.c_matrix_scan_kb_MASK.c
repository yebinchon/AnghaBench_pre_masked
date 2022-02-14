
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {int millisecond; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(void) {
  FUNC_2(&VAR_2, &VAR_6);
  uint16_t VAR_10 = VAR_6.millisecond / 1000 / 60;

  if (VAR_10 != VAR_5){
    VAR_5 = VAR_10;
    if(!VAR_8){
      VAR_9 = 1;
    }
  }
}
