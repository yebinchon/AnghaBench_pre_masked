
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int keyrecord_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,int *) ;

bool FUNC_1(uint16_t VAR_4, keyrecord_t *VAR_5) {
  uint16_t VAR_6 = VAR_4;
  if (VAR_4 == VAR_3 || VAR_4 == VAR_0 || VAR_4 == VAR_2 ){
    VAR_6 = VAR_1;
  }
  if (!FUNC_0(VAR_6, VAR_5)) {
    return 0;
  }

  return 1;
}
