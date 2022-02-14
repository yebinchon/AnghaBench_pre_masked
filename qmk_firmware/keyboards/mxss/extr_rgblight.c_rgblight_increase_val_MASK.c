
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {scalar_t__ val; int sat; int hue; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__) ;

void FUNC_1(void) {
  uint8_t VAR_3;
  if (VAR_2.val + VAR_1 > VAR_0) {
    VAR_3 = VAR_0;
  } else {
    VAR_3 = VAR_2.val + VAR_1;
  }
  FUNC_0(VAR_2.hue, VAR_2.sat, VAR_3);
}
