
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {void* status; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_7 ;

void FUNC_1(uint8_t VAR_8) {
  if (VAR_8 & (1 << VAR_5)) {
    VAR_7[VAR_2].status = VAR_1;
    VAR_7[VAR_3].status = VAR_1;
  } else {
    VAR_7[VAR_2].status = VAR_0;
    VAR_7[VAR_3].status = VAR_0;
  }

  if (VAR_8 & (1 << VAR_6)) {
    VAR_7[VAR_4].status = VAR_1;
  } else {
    VAR_7[VAR_4].status = VAR_0;
  }

  FUNC_0(VAR_8);
}
