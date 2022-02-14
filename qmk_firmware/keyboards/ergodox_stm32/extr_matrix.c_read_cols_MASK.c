
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ matrix_row_t ;
struct TYPE_2__ {scalar_t__ IDR; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__*,int,int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static matrix_row_t FUNC_1(uint8_t VAR_5) {
  if (VAR_5 < VAR_3) {
    uint8_t VAR_6 = 0xFF;
    if (!VAR_4) {
      uint8_t VAR_7 = VAR_2;
      VAR_4 = FUNC_0(VAR_1, VAR_7, &VAR_6, 1, 10);
    }
    if (VAR_4) {
      return 0;
    }
    return (~VAR_6) & 0x3F;
  } else {
      uint8_t VAR_8 = (VAR_0 -> IDR);
      uint8_t VAR_9 = VAR_8;
    return ((~VAR_9) & 0x3f);
  }
}
