
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _Locale_mask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char) ;
 scalar_t__ FUNC_6 (char) ;
 scalar_t__ FUNC_7 (char) ;
 scalar_t__ FUNC_8 (char) ;
 int FUNC_9 (int *,int ,int) ;

void FUNC_10(void) {

  char VAR_10;

  for (VAR_10 = 0; ; ++VAR_10) {
    if (FUNC_0(VAR_10)) VAR_9[(unsigned char)VAR_10] |= VAR_0;
    if (FUNC_1(VAR_10)) VAR_9[(unsigned char)VAR_10] |= VAR_1;
    if (FUNC_2(VAR_10)) VAR_9[(unsigned char)VAR_10] |= VAR_2;
    if (FUNC_4(VAR_10)) VAR_9[(unsigned char)VAR_10] |= VAR_4;
    if (FUNC_5(VAR_10)) VAR_9[(unsigned char)VAR_10] |= VAR_5;
    if (FUNC_6(VAR_10)) VAR_9[(unsigned char)VAR_10] |= VAR_6;
    if (FUNC_8(VAR_10)) VAR_9[(unsigned char)VAR_10] |= VAR_8;
    if (FUNC_7(VAR_10)) VAR_9[(unsigned char)VAR_10] |= VAR_7;
    if (FUNC_3(VAR_10)) VAR_9[(unsigned char)VAR_10] |= VAR_3;
    if (VAR_10 == 127) break;
  }


  FUNC_9(&(VAR_9[128]), 0, 128 * sizeof(_Locale_mask_t));
}
