
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ col; scalar_t__ row; } ;
typedef TYPE_1__ keypos_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static uint8_t FUNC_2(int VAR_4) {
  if (VAR_4 < 0 || VAR_4 >= VAR_0) {
    return 0;
  }
  keypos_t VAR_5 = VAR_3[VAR_4];
  uint8_t VAR_6 = FUNC_0(VAR_5.row - 1, VAR_5.col);
  uint8_t VAR_7 = FUNC_0(VAR_5.row + 1, VAR_5.col);
  uint8_t VAR_8 = FUNC_0(VAR_5.row, VAR_5.col - 1);
  uint8_t VAR_9 = FUNC_0(VAR_5.row, VAR_5.col + 1);
  uint8_t VAR_10 = FUNC_1(FUNC_1(VAR_6, VAR_7), FUNC_1(VAR_8, VAR_9));
  if (VAR_10 > VAR_1) {
    VAR_10 = VAR_1;
  }
  return VAR_10 * VAR_2;
}
