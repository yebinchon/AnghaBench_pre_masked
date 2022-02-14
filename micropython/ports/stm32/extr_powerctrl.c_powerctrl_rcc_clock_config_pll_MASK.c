
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int PLLSAICFGR; int CR; int DCKCFGR2; } ;
struct TYPE_5__ {int SYSCLKSource; } ;
typedef TYPE_1__ RCC_ClkInitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_3__* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int const VAR_19 ;
 int const VAR_20 ;
 int const VAR_21 ;
 int VAR_22 ;
 int FUNC_2 () ;

int FUNC_3(RCC_ClkInitTypeDef *VAR_23, uint32_t VAR_24, bool VAR_25) {
    uint32_t VAR_26;
    VAR_26 = VAR_5;


    VAR_23->SYSCLKSource = VAR_22;
    if (FUNC_1(VAR_23, VAR_26) != VAR_8) {
        return -VAR_10;
    }

    return 0;
}
