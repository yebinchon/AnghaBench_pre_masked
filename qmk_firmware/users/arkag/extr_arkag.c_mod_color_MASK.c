
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int h; } ;
typedef TYPE_1__ Color ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

Color FUNC_1(Color VAR_1, bool VAR_2, uint8_t VAR_3) {
  FUNC_0(VAR_0);
  int VAR_4 = 359 - VAR_3;
  int VAR_5 = VAR_3;
  int VAR_6;
  if (VAR_2) {
    if (VAR_1.h <= VAR_4) {
      VAR_1.h += VAR_3;
    } else {
      VAR_6 = (359 + VAR_3) % 359;
      VAR_1.h = 0 + VAR_6;
    }
  } else {
    if (VAR_1.h >= VAR_5) {
      VAR_1.h -= VAR_3;
    } else {
      VAR_6 = VAR_3 - VAR_1.h;
      VAR_1.h = 359 - VAR_6;
    }
  }
  return VAR_1;
}
