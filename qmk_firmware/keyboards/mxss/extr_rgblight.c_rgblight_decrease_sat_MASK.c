
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {scalar_t__ sat; int val; int hue; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ) ;

void FUNC_1(void) {
  uint8_t VAR_2;
  if (VAR_1.sat - VAR_0 < 0) {
    VAR_2 = 0;
  } else {
    VAR_2 = VAR_1.sat - VAR_0;
  }
  FUNC_0(VAR_1.hue, VAR_2, VAR_1.val);
}
