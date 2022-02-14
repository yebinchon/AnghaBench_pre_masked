
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LONG ;
typedef int HKEY ;
typedef scalar_t__ HCERTSTORE ;
typedef int BOOL ;


 int VAR_0 ;
 char const* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int,char const*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_3 () ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char const* VAR_15 ;
 char const* VAR_16 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ,int *,int ,int ,int *,int *,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int,char*,...) ;

__attribute__((used)) static void FUNC_10(void)
{
    static const WCHAR VAR_17[] = { '\\',0 };
    HCERTSTORE VAR_18;
    WCHAR VAR_19[VAR_14];
    HKEY VAR_20;
    LONG VAR_21;

    VAR_18 = FUNC_2(VAR_7, 0, 0, 0, ((void*)0));
    FUNC_9(!VAR_18 && FUNC_3() == VAR_11,
     "Expected ERROR_FILE_NOT_FOUND, got %08x\n", FUNC_3());
    VAR_18 = FUNC_2(VAR_7, 0, 0,
     VAR_9 | VAR_8, VAR_15);
    FUNC_9(!VAR_18 && FUNC_3() == VAR_11,
     "Expected ERROR_FILE_NOT_FOUND, got %08x\n", FUNC_3());
    VAR_18 = FUNC_2(VAR_7, 0, 0,
     VAR_9 | VAR_8, VAR_16);
    FUNC_9(!VAR_18 && FUNC_3() == VAR_11,
     "Expected ERROR_FILE_NOT_FOUND, got %08x\n", FUNC_3());

    VAR_18 = FUNC_2(VAR_7, 0, 0,
     VAR_8 | VAR_5, VAR_15);
    FUNC_9(!VAR_18 && FUNC_3() == VAR_11,
     "Expected ERROR_FILE_NOT_FOUND, got %08x\n", FUNC_3());

    FUNC_8(VAR_19, VAR_2);
    FUNC_7(VAR_19, VAR_17);
    FUNC_7(VAR_19, VAR_16);
    VAR_21 = FUNC_5(VAR_12, VAR_19, 0, ((void*)0), 0, VAR_13,
     ((void*)0), &VAR_20, ((void*)0));
    FUNC_9(!VAR_21, "RegCreateKeyEx failed: %d\n", VAR_21);
    if (!VAR_21)
        FUNC_4(VAR_20);

    VAR_18 = FUNC_2(VAR_7, 0, 0,
     VAR_8 | VAR_3, VAR_16);
    FUNC_9(!VAR_18 && FUNC_3() == VAR_10,
     "Expected ERROR_FILE_EXISTS, got %08x\n", FUNC_3());

    VAR_18 = FUNC_2(VAR_7, 0, 0,
     VAR_8 | VAR_5, VAR_16);
    FUNC_9(VAR_18 != 0, "CertOpenStore failed: %08x\n", FUNC_3());
    if (VAR_18)
    {
        HCERTSTORE VAR_22 = FUNC_2(VAR_6, 0, 0,
         VAR_3, ((void*)0));


        if (VAR_22)
        {
            BOOL VAR_23 = FUNC_0(VAR_18, VAR_22, 0, 0);
            FUNC_9(VAR_23, "CertAddStoreToCollection failed: %08x\n", FUNC_3());
            FUNC_1(VAR_22, 0);
        }
        FUNC_1(VAR_18, 0);
    }


    VAR_18 = FUNC_2(VAR_7, 0, 0,
     VAR_8 | VAR_5, VAR_1);
    FUNC_9(!VAR_18, "Expected ERROR_FILE_NOT_FOUND, got %08x\n", FUNC_3());
    VAR_18 = FUNC_2(VAR_7, 0, 0,
     VAR_8, VAR_1);
    FUNC_9(VAR_18 != 0, "CertOpenStore failed: %08x\n", FUNC_3());
    if (VAR_18)
        FUNC_1(VAR_18, 0);

    VAR_18 = FUNC_2(VAR_7, 0, 0,
     VAR_8 | VAR_4, VAR_1);
    FUNC_9(!VAR_18, "Didn't expect a store to be returned when deleting\n");
    FUNC_6(VAR_12, VAR_0);
}
