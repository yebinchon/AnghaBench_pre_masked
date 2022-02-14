
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int dynamic_macro_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 () ;
 int * VAR_2 ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(uint8_t VAR_3) {
  if (!FUNC_2()) {
    FUNC_4(VAR_1, VAR_0);
    FUNC_0("dynamic macro: writing magic eeprom header\n");
  }

  dynamic_macro_t* VAR_4 = &VAR_2[VAR_3];

  FUNC_3(VAR_4, FUNC_1(VAR_3), sizeof(dynamic_macro_t));
  FUNC_0("dynamic macro: slot %d saved to eeprom\n", VAR_3);
}
