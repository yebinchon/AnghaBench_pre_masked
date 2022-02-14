
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dictBuffer; int dstBuffer; int srcBuffer; int dCtx; } ;
typedef TYPE_1__ dRess_t ;
typedef int LZ4F_errorCode_t ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(dRess_t VAR_0)
{
    LZ4F_errorCode_t VAR_1 = FUNC_1(VAR_0.dCtx);
    if (FUNC_3(VAR_1)) FUNC_0(69, "Error : can't free LZ4F context resource : %s", FUNC_2(VAR_1));
    FUNC_4(VAR_0.srcBuffer);
    FUNC_4(VAR_0.dstBuffer);
    FUNC_4(VAR_0.dictBuffer);
}
