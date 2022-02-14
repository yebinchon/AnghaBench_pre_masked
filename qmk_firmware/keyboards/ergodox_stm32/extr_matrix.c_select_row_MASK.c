
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int BRR; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int*,int,int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_1(uint8_t VAR_5) {
  if (VAR_5 < VAR_3) {
    if (!VAR_4) {
      uint8_t VAR_6 = (0xFF & ~(1 << VAR_5));
      VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_6, 1, 10);
    }
  } else {
    VAR_0->BRR = 0x1 << (VAR_5+1);
  }
}
