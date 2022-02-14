
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ud {int dis_mode; int vex_op; int vex_b1; int vex_b2; TYPE_1__* le; } ;
struct TYPE_2__ {int * table; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ud*) ;
 int FUNC_3 (struct ud*,char*) ;
 int FUNC_4 (struct ud*,int ) ;
 int FUNC_5 (struct ud*) ;
 void* FUNC_6 (struct ud*) ;
 int FUNC_7 (struct ud*) ;

__attribute__((used)) static int
FUNC_8(struct ud *VAR_0)
{
  uint8_t VAR_1;
  if (VAR_0->dis_mode != 64 && FUNC_0(FUNC_7(VAR_0)) != 0x3) {
    VAR_1 = 0;
  } else {
    VAR_0->vex_op = FUNC_5(VAR_0);
    VAR_0->vex_b1 = FUNC_6(VAR_0);
    if (VAR_0->vex_op == 0xc4) {
      uint8_t VAR_2, VAR_3;

      VAR_0->vex_b2 = FUNC_6(VAR_0);
      FUNC_2(VAR_0);
      VAR_3 = VAR_0->vex_b1 & 0x1f;
      if (VAR_3 == 0 || VAR_3 > 3) {
        FUNC_3(VAR_0, "reserved vex.m-mmmm value");
      }
      VAR_2 = VAR_0->vex_b2 & 0x3;
      VAR_1 = (VAR_2 << 2) | VAR_3;
    } else {

      FUNC_1(VAR_0->vex_op == 0xc5);
      VAR_1 = 0x1 | ((VAR_0->vex_b1 & 0x3) << 2);
    }
  }
  return FUNC_4(VAR_0, VAR_0->le->table[VAR_1]);
}
