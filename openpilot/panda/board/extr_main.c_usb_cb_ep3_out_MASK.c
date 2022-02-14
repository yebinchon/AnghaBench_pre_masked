
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
struct TYPE_3__ {int RDTR; void* RIR; void* RDLR; void* RDHR; } ;
typedef TYPE_1__ CAN_FIFOMailBox_TypeDef ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;

void FUNC_2(void *VAR_1, int VAR_2, bool VAR_3) {
  FUNC_0(VAR_3);
  int VAR_4 = 0;
  uint32_t *VAR_5 = (uint32_t *)VAR_1;
  for (VAR_4 = 0; VAR_4 < (VAR_2 / 4); VAR_4 += 4) {
    CAN_FIFOMailBox_TypeDef VAR_6;
    VAR_6.RDHR = VAR_5[VAR_4 + 3];
    VAR_6.RDLR = VAR_5[VAR_4 + 2];
    VAR_6.RDTR = VAR_5[VAR_4 + 1];
    VAR_6.RIR = VAR_5[VAR_4];

    uint8_t VAR_7 = (VAR_6.RDTR >> 4) & VAR_0;
    FUNC_1(&VAR_6, VAR_7);
  }
}
