
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* dwObj; scalar_t__ dwHow; } ;
typedef TYPE_1__* LPCDIPROPHEADER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;

void FUNC_2(LPCDIPROPHEADER VAR_4) {
    if (FUNC_1(VAR_3)) {
        FUNC_0("  - dwObj = 0x%08x\n", VAR_4->dwObj);
        FUNC_0("  - dwHow = %s\n",
            ((VAR_4->dwHow == VAR_2) ? "DIPH_DEVICE" :
            ((VAR_4->dwHow == VAR_1) ? "DIPH_BYOFFSET" :
            ((VAR_4->dwHow == VAR_0)) ? "DIPH_BYID" : "unknown")));
    }
}
