
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_8__ {int type; } ;
struct TYPE_7__ {int type; } ;
struct TYPE_6__ {int type; } ;
struct TYPE_5__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_0 (int const) ;
 size_t FUNC_1 (int const) ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static void FUNC_2(const ut8 *VAR_9, int VAR_10, int *VAR_11, int *VAR_12) {
 int VAR_13 = 0;
 if (VAR_10 <1) {
  return;
 }
 switch (VAR_9[0]) {
 case 0xed:
  if (VAR_10 > 1) {
   int VAR_14 = FUNC_0 (VAR_9[1]);
   VAR_13 = VAR_6[VAR_14].type;
  }
  break;
 case 0xcb:
  VAR_13 = VAR_2;
  break;
 case 0xdd:
  if (VAR_10 >1) {
   VAR_13 = VAR_5[FUNC_1(VAR_9[1])].type;
  }
  break;
 case 0xfd:
  if (VAR_10 > 1) {
   VAR_13 = VAR_7[FUNC_1(VAR_9[1])].type;
  }
  break;
 default:
  VAR_13 = VAR_8[VAR_9[0]].type;
  break;
 }

 if (VAR_13 & VAR_4) {
  *VAR_12 = 1;
 } else if (VAR_13 & VAR_2) {
  *VAR_12 = 2;
 } else if (VAR_13 & VAR_3) {
  *VAR_12 = 3;
 }

 if (VAR_13 & VAR_0) {
  *VAR_11 = *VAR_12 + 2;
 } else if (VAR_13 & VAR_1) {
  *VAR_11 = *VAR_12 + 1;
 } else {
  *VAR_11 = *VAR_12;
 }
}
