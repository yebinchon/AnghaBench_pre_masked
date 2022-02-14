
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float WCHAR ;
typedef scalar_t__ HRESULT ;
typedef float* BSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (float const*,int *) ;
 scalar_t__ FUNC_1 (float*) ;
 scalar_t__ FUNC_2 (int ,float*,float*,int ) ;
 scalar_t__ FUNC_3 (int ,float*,float*,int ) ;
 scalar_t__ FUNC_4 (int ,float*,int ) ;
 scalar_t__ FUNC_5 (int ,float*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (float*) ;
 scalar_t__ VAR_5 ;
 float* FUNC_7 (float const*) ;
 int FUNC_8 (float*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (float*) ;
 int FUNC_10 (float const*,float const*,float*) ;
 int VAR_8 ;
 int FUNC_11 (int,char*,scalar_t__) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (float*) ;

__attribute__((used)) static void FUNC_14(void)
{
    static const WCHAR VAR_9[] = {'f','i','l','e','s','y','s','t','e','m','3','_','t','e','s','t',0};
    static const WCHAR VAR_10[] = {'s','r','c','1',0};
    static const WCHAR VAR_11[] = {'s','r','c','*',0};
    static const WCHAR VAR_12[] = {'d','s','t',0};
    static const WCHAR VAR_13[] = {0};

    WCHAR VAR_14[VAR_4];
    BSTR VAR_15, VAR_16;
    HRESULT VAR_17;

    if(!FUNC_0(VAR_9, ((void*)0))) {
        FUNC_12("can't create temporary directory\n");
        return;
    }

    FUNC_10(VAR_9, VAR_10, VAR_14);
    VAR_15 = FUNC_7(VAR_14);
    FUNC_10(VAR_9, VAR_12, VAR_14);
    VAR_16 = FUNC_7(VAR_14);
    VAR_17 = FUNC_2(VAR_8, VAR_15, VAR_16, VAR_7);
    FUNC_11(VAR_17 == VAR_1, "CopyFile returned %x, expected CTL_E_FILENOTFOUND\n", VAR_17);

    VAR_17 = FUNC_3(VAR_8, VAR_15, VAR_16, VAR_7);
    FUNC_11(VAR_17 == VAR_2, "CopyFolder returned %x, expected CTL_E_PATHNOTFOUND\n", VAR_17);

    FUNC_11(FUNC_9(VAR_15), "can't create %s file\n", FUNC_13(VAR_15));
    VAR_17 = FUNC_2(VAR_8, VAR_15, VAR_16, VAR_7);
    FUNC_11(VAR_17 == VAR_5, "CopyFile returned %x, expected S_OK\n", VAR_17);

    VAR_17 = FUNC_3(VAR_8, VAR_15, VAR_16, VAR_7);
    FUNC_11(VAR_17 == VAR_2, "CopyFolder returned %x, expected CTL_E_PATHNOTFOUND\n", VAR_17);

    VAR_17 = FUNC_4(VAR_8, VAR_15, VAR_6);
    FUNC_11(VAR_17 == VAR_5, "DeleteFile returned %x, expected S_OK\n", VAR_17);

    FUNC_11(FUNC_0(VAR_15, ((void*)0)), "can't create %s\n", FUNC_13(VAR_15));
    VAR_17 = FUNC_2(VAR_8, VAR_15, VAR_16, VAR_7);
    FUNC_11(VAR_17 == VAR_1, "CopyFile returned %x, expected CTL_E_FILENOTFOUND\n", VAR_17);

    VAR_17 = FUNC_3(VAR_8, VAR_15, VAR_16, VAR_7);
    FUNC_11(VAR_17 == VAR_0, "CopyFolder returned %x, expected CTL_E_FILEALREADYEXISTS\n", VAR_17);

    VAR_17 = FUNC_4(VAR_8, VAR_16, VAR_7);
    FUNC_11(VAR_17 == VAR_5, "DeleteFile returned %x, expected S_OK\n", VAR_17);

    VAR_17 = FUNC_3(VAR_8, VAR_15, VAR_16, VAR_7);
    FUNC_11(VAR_17 == VAR_5, "CopyFolder returned %x, expected S_OK\n", VAR_17);

    VAR_17 = FUNC_3(VAR_8, VAR_15, VAR_16, VAR_7);
    FUNC_11(VAR_17 == VAR_5, "CopyFolder returned %x, expected S_OK\n", VAR_17);
    FUNC_10(VAR_14, VAR_10, VAR_14);
    FUNC_11(FUNC_1(VAR_14) == VAR_3,
            "%s file exists\n", FUNC_13(VAR_14));

    FUNC_10(VAR_9, VAR_12, VAR_14);
    FUNC_10(VAR_14, VAR_13, VAR_14);
    FUNC_8(VAR_16);
    VAR_16 = FUNC_7(VAR_14);
    VAR_17 = FUNC_3(VAR_8, VAR_15, VAR_16, VAR_7);
    FUNC_11(VAR_17 == VAR_5, "CopyFolder returned %x, expected S_OK\n", VAR_17);
    FUNC_10(VAR_14, VAR_10, VAR_14);
    FUNC_11(FUNC_1(VAR_14) != VAR_3,
            "%s directory doesn't exist\n", FUNC_13(VAR_14));
    FUNC_11(FUNC_6(VAR_14), "can't remove %s directory\n", FUNC_13(VAR_14));
    FUNC_10(VAR_9, VAR_12, VAR_14);
    FUNC_8(VAR_16);
    VAR_16 = FUNC_7(VAR_14);


    FUNC_10(VAR_9, VAR_11, VAR_14);
    FUNC_8(VAR_15);
    VAR_15 = FUNC_7(VAR_14);
    VAR_17 = FUNC_3(VAR_8, VAR_15, VAR_16, VAR_7);
    FUNC_11(VAR_17 == VAR_5, "CopyFolder returned %x, expected S_OK\n", VAR_17);
    FUNC_10(VAR_9, VAR_12, VAR_14);
    FUNC_10(VAR_14, VAR_10, VAR_14);
    FUNC_11(FUNC_1(VAR_14) != VAR_3,
            "%s directory doesn't exist\n", FUNC_13(VAR_14));

    VAR_17 = FUNC_5(VAR_8, VAR_16, VAR_6);
    FUNC_11(VAR_17 == VAR_5, "DeleteFolder returned %x, expected S_OK\n", VAR_17);

    VAR_17 = FUNC_3(VAR_8, VAR_15, VAR_16, VAR_7);
    FUNC_11(VAR_17 == VAR_2, "CopyFolder returned %x, expected CTL_E_PATHNOTFOUND\n", VAR_17);

    FUNC_10(VAR_9, VAR_10, VAR_14);
    FUNC_8(VAR_15);
    VAR_15 = FUNC_7(VAR_14);
    FUNC_10(VAR_14, VAR_10, VAR_14);
    FUNC_11(FUNC_9(VAR_14), "can't create %s file\n", FUNC_13(VAR_14));
    VAR_17 = FUNC_3(VAR_8, VAR_15, VAR_16, VAR_6);
    FUNC_11(VAR_17 == VAR_5, "CopyFolder returned %x, expected S_OK\n", VAR_17);

    VAR_17 = FUNC_3(VAR_8, VAR_15, VAR_16, VAR_6);
    FUNC_11(VAR_17 == VAR_0, "CopyFolder returned %x, expected CTL_E_FILEALREADYEXISTS\n", VAR_17);

    VAR_17 = FUNC_3(VAR_8, VAR_15, VAR_16, VAR_7);
    FUNC_11(VAR_17 == VAR_5, "CopyFolder returned %x, expected S_OK\n", VAR_17);
    FUNC_8(VAR_15);
    FUNC_8(VAR_16);

    VAR_15 = FUNC_7(VAR_9);
    VAR_17 = FUNC_5(VAR_8, VAR_15, VAR_6);
    FUNC_11(VAR_17 == VAR_5, "DeleteFolder returned %x, expected S_OK\n", VAR_17);
    FUNC_8(VAR_15);
}
