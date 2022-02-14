
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctx; int * cdict; int dstBuffer; int srcBuffer; } ;
typedef TYPE_1__ cRess_t ;
typedef int LZ4F_errorCode_t ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int const) ;
 scalar_t__ FUNC_4 (int const) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(cRess_t VAR_0)
{
    FUNC_5(VAR_0.srcBuffer);
    FUNC_5(VAR_0.dstBuffer);

    FUNC_1(VAR_0.cdict);
    VAR_0.cdict = ((void*)0);

    { LZ4F_errorCode_t const VAR_1 = FUNC_2(VAR_0.ctx);
      if (FUNC_4(VAR_1)) FUNC_0(38, "Error : can't free LZ4F context resource : %s", FUNC_3(VAR_1)); }
}
