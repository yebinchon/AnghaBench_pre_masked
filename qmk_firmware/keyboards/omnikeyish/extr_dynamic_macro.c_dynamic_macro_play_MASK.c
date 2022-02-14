
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {size_t length; int * events; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,size_t,size_t) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

void FUNC_4(uint8_t VAR_2) {
  FUNC_1("dynamic macro: slot %d playback, length %d\n", VAR_2, VAR_0[VAR_2].length);

  uint32_t VAR_3 = VAR_1;

  FUNC_0();
  FUNC_2();

  for (uint8_t VAR_4 = 0; VAR_4 < VAR_0[VAR_2].length; ++VAR_4) {
    FUNC_3(&VAR_0[VAR_2].events[VAR_4]);
  }

  FUNC_0();

  VAR_1 = VAR_3;
}
