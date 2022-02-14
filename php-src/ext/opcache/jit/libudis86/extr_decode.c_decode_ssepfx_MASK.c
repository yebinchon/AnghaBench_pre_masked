
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ud {int pfx_str; int pfx_opr; TYPE_1__* le; } ;
struct TYPE_2__ {scalar_t__* table; } ;


 int FUNC_0 (struct ud*,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct ud *VAR_0)
{
  uint8_t VAR_1;
  uint8_t VAR_2;





  VAR_2 = VAR_0->pfx_str;
  if (VAR_2 == 0) {
    VAR_2 = VAR_0->pfx_opr;
  }
  VAR_1 = ((VAR_2 & 0xf) + 1) / 2;
  if (VAR_0->le->table[VAR_1] == 0) {
    VAR_1 = 0;
  }
  if (VAR_1 && VAR_0->le->table[VAR_1] != 0) {




    VAR_0->pfx_str = 0;
    if (VAR_2 == 0x66) {





        VAR_0->pfx_opr = 0;
    }
  }
  return FUNC_0(VAR_0, VAR_0->le->table[VAR_1]);
}
