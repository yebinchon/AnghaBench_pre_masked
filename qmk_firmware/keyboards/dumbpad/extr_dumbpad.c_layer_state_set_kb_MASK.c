
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int layer_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

layer_state_t FUNC_3(layer_state_t VAR_2) {

  uint8_t VAR_3 = FUNC_0(VAR_2);
  FUNC_2(VAR_0, VAR_3 & 0b1);
  FUNC_2(VAR_1, (VAR_3 >> 1) & 0b1);
  return FUNC_1(VAR_2);
}
