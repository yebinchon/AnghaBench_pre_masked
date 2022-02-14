
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int hue; int val; int sat; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int,int ,int ) ;

void FUNC_1(void) {
  uint16_t VAR_2;
  VAR_2 = (VAR_1.hue+VAR_0) % 360;
  FUNC_0(VAR_2, VAR_1.sat, VAR_1.val);
}
