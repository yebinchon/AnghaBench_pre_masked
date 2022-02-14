
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;

__attribute__((used)) static BOOL FUNC_2(void)
{
    VAR_0 = FUNC_1("mapi32.dll");

    VAR_20 = (void*)FUNC_0(VAR_0, "PropCopyMore@16");
    VAR_25 = (void*)FUNC_0(VAR_0, "UlPropSize@4");
    VAR_11 = (void*)FUNC_0(VAR_0, "FPropContainsProp@12");
    VAR_10 = (void*)FUNC_0(VAR_0, "FPropCompareProp@12");
    VAR_12 = (void*)FUNC_0(VAR_0, "LPropCompareProp@8");
    VAR_19 = (void*)FUNC_0(VAR_0, "PpropFindProp@12");
    VAR_22 = (void*)FUNC_0(VAR_0, "ScCountProps@12");
    VAR_21 = (void*)FUNC_0(VAR_0, "ScCopyProps@16");
    VAR_24 = (void*)FUNC_0(VAR_0, "ScRelocProps@20");
    VAR_13 = (void*)FUNC_0(VAR_0, "LpValFindProp@12");
    VAR_6 = (void*)FUNC_0(VAR_0, "FBadRglpszA@8");
    VAR_7 = (void*)FUNC_0(VAR_0, "FBadRglpszW@8");
    VAR_9 = (void*)FUNC_0(VAR_0, "FBadRowSet@4");
    VAR_5 = (void*)FUNC_0(VAR_0, "FBadPropTag@4");
    VAR_8 = (void*)FUNC_0(VAR_0, "FBadRow@4");
    VAR_4 = (void*)FUNC_0(VAR_0, "FBadProp@4");
    VAR_3 = (void*)FUNC_0(VAR_0, "FBadColumnSet@4");
    VAR_1 = (void*)FUNC_0(VAR_0, "CreateIProp@24");

    VAR_23 = (void*)FUNC_0(VAR_0, "ScInitMapiUtil@4");
    VAR_2 = (void*)FUNC_0(VAR_0, "DeinitMapiUtil@0");
    VAR_14 = (void*)FUNC_0(VAR_0, "MAPIAllocateBuffer");
    VAR_15 = (void*)FUNC_0(VAR_0, "MAPIAllocateMore");
    VAR_16 = (void*)FUNC_0(VAR_0, "MAPIFreeBuffer");
    VAR_17 = (void*)FUNC_0(VAR_0, "MAPIInitialize");
    VAR_18 = (void*)FUNC_0(VAR_0, "MAPIUninitialize");

    return VAR_14 && VAR_15 && VAR_16 &&
           VAR_23 && VAR_2;
}
