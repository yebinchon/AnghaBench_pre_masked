
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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

__attribute__((used)) static void FUNC_2(void)
{
    VAR_0 = FUNC_1("mapi32.dll");

    VAR_8 = (void*)FUNC_0(VAR_0, "ScInitMapiUtil@4");
    VAR_2 = (void*)FUNC_0(VAR_0, "DeinitMapiUtil@0");
    VAR_10 = (void*)FUNC_0(VAR_0, "SwapPword@8");
    VAR_9 = (void*)FUNC_0(VAR_0, "SwapPlong@8");
    VAR_4 = (void*)FUNC_0(VAR_0, "HexFromBin@12");
    VAR_3 = (void*)FUNC_0(VAR_0, "FBinFromHex@8");
    VAR_11 = (void*)FUNC_0(VAR_0, "UFromSz@4");
    VAR_12 = (void*)FUNC_0(VAR_0, "UlFromSzHex@4");
    VAR_1 = (void*)FUNC_0(VAR_0, "CbOfEncoded@4");
    VAR_5 = (void*)FUNC_0(VAR_0, "IsBadBoundedStringPtr@8");
    VAR_6 = (void*)FUNC_0(VAR_0, "MAPIInitialize");
    VAR_7 = (void*)FUNC_0(VAR_0, "MAPIUninitialize");
}
