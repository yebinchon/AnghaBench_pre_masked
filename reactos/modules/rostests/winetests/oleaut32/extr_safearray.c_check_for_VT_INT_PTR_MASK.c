
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lLbound; scalar_t__ cElements; } ;
typedef TYPE_1__ SAFEARRAYBOUND ;
typedef int SAFEARRAY ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ,int,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{


    SAFEARRAY* VAR_5;
    SAFEARRAYBOUND VAR_6;
    VAR_6.cElements = 0;
    VAR_6.lLbound = 0;
    VAR_5 = FUNC_0(VAR_3, 1, &VAR_6);
    if (VAR_5) {
        HRESULT VAR_7;
        FUNC_3("VT_INT_PTR is supported\n");
        VAR_4 = VAR_2;
        VAR_7 = FUNC_1(VAR_5);
        FUNC_2(VAR_7 == VAR_1, "got 0x%08x\n", VAR_7);
    }
    else {
        FUNC_3("VT_INT_PTR is not supported\n");
        VAR_4 = VAR_0;
    }
}
