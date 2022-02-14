
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IStream ;
typedef int IStorage ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,char const*,int,int ,int ,int **) ;
 scalar_t__ FUNC_2 (int *,char const*,int,int ,int ,int **) ;
 scalar_t__ FUNC_3 (int *,char const*,int *,int,int *,int ,int **) ;
 scalar_t__ FUNC_4 (int *,char const*,int *,int,int ,int **) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,char const*,char const*) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_9 (int ,int,int ,int **) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int,char*,...) ;

__attribute__((used)) static void FUNC_11(void)
{
    IStorage *VAR_7, *VAR_8;
    IStream *VAR_9;
    HRESULT VAR_10;
    static const WCHAR VAR_11[] = { 'P','E','R','M','S','T','G',0 };
    static const WCHAR VAR_12[] = { 'S','T','G',0 };
    static const WCHAR VAR_13[] = { 'C','O','N','T','E','N','T','S',0 };
    static const WCHAR VAR_14[] = { 'E','N','T','S',0 };
    BOOL VAR_15;

    FUNC_0(VAR_6);


    VAR_10 = FUNC_9( VAR_5, VAR_0 | VAR_2 |
                            VAR_1, 0, &VAR_7);
    FUNC_10(VAR_10==VAR_4, "StgCreateDocfile failed\n");


    VAR_10 = FUNC_1(VAR_7, VAR_11, VAR_1 | VAR_2, 0, 0, &VAR_8);
    FUNC_10(VAR_10==VAR_4, "IStorage->CreateStorage failed, hr=%08x\n", VAR_10);


    VAR_10 = FUNC_2(VAR_8, VAR_13, VAR_1 | VAR_2, 0, 0, &VAR_9);
    FUNC_10(VAR_10==VAR_4, "IStorage->CreateStream failed, hr=%08x\n", VAR_10);
    FUNC_7(VAR_9);


    VAR_10 = FUNC_6(VAR_8, VAR_13, VAR_14);
    FUNC_10(VAR_10==VAR_4, "IStorage->RenameElement failed, hr=%08x\n", VAR_10);


    VAR_10 = FUNC_4(VAR_8, VAR_13, ((void*)0), VAR_1 | VAR_2, 0, &VAR_9);
    FUNC_10(VAR_10==VAR_3, "IStorage_OpenStream should fail, hr=%08x\n", VAR_10);
    if (FUNC_8(VAR_10)) FUNC_7(VAR_9);


    VAR_10 = FUNC_4(VAR_8, VAR_14, ((void*)0), VAR_1 | VAR_2, 0, &VAR_9);
    FUNC_10(VAR_10==VAR_4, "IStorage_OpenStream failed, hr=%08x\n", VAR_10);
    if (FUNC_8(VAR_10)) FUNC_7(VAR_9);

    FUNC_5(VAR_8);


    FUNC_6(VAR_7, VAR_11, VAR_12);


    VAR_10 = FUNC_3(VAR_7, VAR_11, ((void*)0), VAR_1 | VAR_2, ((void*)0), 0, &VAR_8);
    FUNC_10(VAR_10==VAR_3, "IStorage_OpenStream should fail, hr=%08x\n", VAR_10);
    if (FUNC_8(VAR_10)) FUNC_5(VAR_8);


    VAR_10 = FUNC_3(VAR_7, VAR_12, ((void*)0), VAR_1 | VAR_2, ((void*)0), 0, &VAR_8);
    FUNC_10(VAR_10==VAR_4, "IStorage_OpenStream should fail, hr=%08x\n", VAR_10);
    if (FUNC_8(VAR_10))
    {

        VAR_10 = FUNC_4(VAR_8, VAR_14, ((void*)0), VAR_1 | VAR_2, 0, &VAR_9);
        FUNC_10(VAR_10==VAR_4, "IStorage_OpenStream failed, hr=%08x\n", VAR_10);
        if (FUNC_8(VAR_10)) FUNC_7(VAR_9);

        FUNC_5(VAR_8);
    }

    FUNC_5(VAR_7);

    VAR_15 = FUNC_0(VAR_6);
    FUNC_10(VAR_15, "deleted file\n");
}
