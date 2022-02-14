
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_5__ {scalar_t__ checksum; scalar_t__ length; } ;
typedef TYPE_1__ dynamic_macro_t ;


 int FUNC_0 (char*,size_t) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (size_t) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

void FUNC_4(uint8_t VAR_1) {
  dynamic_macro_t* VAR_2 = &VAR_0[VAR_1];

  FUNC_3(VAR_2, FUNC_2(VAR_1), sizeof(dynamic_macro_t));


  if (FUNC_1(VAR_2) != VAR_2->checksum) {
    FUNC_0("dynamic macro: slot %d not loaded, checksum mismatch\n", VAR_1);
    VAR_2->length = 0;

    return;
  }

  FUNC_0("dynamic macro: slot %d loaded from eeprom, checksum okay\n", VAR_1);
}
