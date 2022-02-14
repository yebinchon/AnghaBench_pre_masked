
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int matrix_row_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static matrix_row_t FUNC_4(uint8_t VAR_7) {
  if (VAR_7 < 7) {
    if (VAR_6) {
      return 0;
    } else {
      uint8_t VAR_8 = 0;
      VAR_6 = FUNC_1(VAR_3, VAR_0);
      if (VAR_6) goto out;
      VAR_6 = FUNC_3(VAR_1, VAR_0);
      if (VAR_6) goto out;
      VAR_6 = FUNC_1(VAR_2, VAR_0);
      if (VAR_6) goto out;
      VAR_6 = FUNC_0(VAR_0);
      if (VAR_6 < 0) goto out;
      VAR_8 = ~((uint8_t)VAR_6);
      VAR_6 = VAR_4;
    out:
      FUNC_2();
      return VAR_8;
    }
  } else {






    return ~((VAR_5 & 0x03) | ((VAR_5 & 0xF0) >> 2));
  }
}
