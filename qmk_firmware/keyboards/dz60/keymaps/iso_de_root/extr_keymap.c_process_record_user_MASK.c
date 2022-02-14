
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int keyrecord_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int *) ;

bool FUNC_2(uint16_t VAR_2, keyrecord_t *VAR_3) {
  uint16_t VAR_4 = (VAR_2 == FUNC_0(VAR_0) ? VAR_1 : VAR_2);

  if (!FUNC_1(VAR_4, VAR_3)) {
      return 0;
  }

  return 1;
}
