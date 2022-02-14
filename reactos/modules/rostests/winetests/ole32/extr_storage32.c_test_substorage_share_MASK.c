
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
 scalar_t__ FUNC_3 (int *,char const*) ;
 scalar_t__ FUNC_4 (int *,char const*,int *,int,int ,int ,int **) ;
 scalar_t__ FUNC_5 (int *,char const*,int *,int,int ,int **) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,char const*,char const*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,char*,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_11 (int ,int,int ,int **) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (int,char*,...) ;

__attribute__((used)) static void FUNC_13(void)
{
    IStorage *VAR_9, *VAR_10, *VAR_11;
    IStream *VAR_12, *VAR_13;
    HRESULT VAR_14;
    static const WCHAR VAR_15[] = { 'P','E','R','M','S','T','G',0 };
    static const WCHAR VAR_16[] = { 'C','O','N','T','E','N','T','S',0 };
    static const WCHAR VAR_17[] = { 'N','E','W','N','A','M','E',0 };
    BOOL VAR_18;

    FUNC_0(VAR_8);


    VAR_14 = FUNC_11( VAR_7, VAR_0 | VAR_3 |
                            VAR_2, 0, &VAR_9);
    FUNC_12(VAR_14==VAR_6, "StgCreateDocfile failed\n");


    VAR_14 = FUNC_1(VAR_9, VAR_15, VAR_2 | VAR_3, 0, 0, &VAR_10);
    FUNC_12(VAR_14==VAR_6, "IStorage->CreateStorage failed, hr=%08x\n", VAR_14);

    if (VAR_14 == VAR_6)
    {
        VAR_14 = FUNC_4(VAR_9, VAR_15, ((void*)0), VAR_2 | VAR_3, 0, 0, &VAR_11);
        FUNC_12(VAR_14==VAR_4, "IStorage->OpenStorage should fail %08x\n", VAR_14);

        if (VAR_14 == VAR_6)
            FUNC_6(VAR_11);

        VAR_14 = FUNC_4(VAR_9, VAR_15, ((void*)0), VAR_1 | VAR_3, 0, 0, &VAR_11);
        FUNC_12(VAR_14==VAR_4, "IStorage->OpenStorage should fail %08x\n", VAR_14);

        if (VAR_14 == VAR_6)
            FUNC_6(VAR_11);


        VAR_14 = FUNC_7(VAR_9, VAR_15, VAR_17);
        FUNC_12(VAR_14==VAR_4, "IStorage->RenameElement should fail %08x\n", VAR_14);
        if (FUNC_10(VAR_14)) FUNC_7(VAR_9, VAR_17, VAR_15);


        VAR_14 = FUNC_3(VAR_9, VAR_15);
        FUNC_12(VAR_14==VAR_6, "IStorage->DestroyElement failed, hr=%08x\n", VAR_14);

        VAR_14 = FUNC_2(VAR_10, VAR_16, VAR_2 | VAR_3, 0, 0, &VAR_12);
        FUNC_12(VAR_14==VAR_5, "IStorage->CreateStream failed, hr=%08x\n", VAR_14);

        if (VAR_14 == VAR_6)
            FUNC_8(VAR_12);

        FUNC_6(VAR_10);
    }


    VAR_14 = FUNC_2(VAR_9, VAR_16, VAR_2 | VAR_3, 0, 0, &VAR_12);
    FUNC_12(VAR_14==VAR_6, "IStorage->CreateStream failed, hr=%08x\n", VAR_14);

    if (VAR_14 == VAR_6)
    {
        VAR_14 = FUNC_5(VAR_9, VAR_16, ((void*)0), VAR_2 | VAR_3, 0, &VAR_13);
        FUNC_12(VAR_14==VAR_4, "IStorage->OpenStream should fail %08x\n", VAR_14);

        if (VAR_14 == VAR_6)
            FUNC_8(VAR_13);

        VAR_14 = FUNC_5(VAR_9, VAR_16, ((void*)0), VAR_1 | VAR_3, 0, &VAR_13);
        FUNC_12(VAR_14==VAR_4, "IStorage->OpenStream should fail %08x\n", VAR_14);

        if (VAR_14 == VAR_6)
            FUNC_8(VAR_13);


        VAR_14 = FUNC_7(VAR_9, VAR_16, VAR_17);
        FUNC_12(VAR_14==VAR_4, "IStorage->RenameElement should fail %08x\n", VAR_14);
        if (FUNC_10(VAR_14)) FUNC_7(VAR_9, VAR_17, VAR_16);


        VAR_14 = FUNC_3(VAR_9, VAR_16);
        FUNC_12(VAR_14==VAR_6, "IStorage->DestroyElement failed, hr=%08x\n", VAR_14);

        VAR_14 = FUNC_9(VAR_12, "this shouldn't work\n", 20, ((void*)0));
        FUNC_12(VAR_14==VAR_5, "IStream_Write should fail %08x\n", VAR_14);

        FUNC_8(VAR_12);
    }

    FUNC_6(VAR_9);

    VAR_18 = FUNC_0(VAR_8);
    FUNC_12(VAR_18, "deleted file\n");
}
