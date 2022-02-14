
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int keyrecord_t ;




 int FUNC_0 (int *,int*,int) ;


 int FUNC_1 (int *,int*,int) ;

bool FUNC_2(uint16_t VAR_0, keyrecord_t *VAR_1) {

  static bool VAR_2 = 0;
  static bool VAR_3 = 0;

  static bool VAR_4 = 0;
  static bool VAR_5 = 0;

  switch (VAR_0) {


    case 131 : return FUNC_0( VAR_1, &VAR_2, VAR_3 ); break;
    case 129 : return FUNC_0( VAR_1, &VAR_3, VAR_2 ); break;
    case 130 : return FUNC_1( VAR_1, &VAR_4, VAR_5 ); break;
    case 128 : return FUNC_1( VAR_1, &VAR_5, VAR_4 ); break;

    default: break;

  }
  return 1;
}
