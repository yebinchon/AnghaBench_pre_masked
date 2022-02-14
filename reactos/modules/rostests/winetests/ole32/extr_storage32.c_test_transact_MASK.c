
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
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,char const*,int,int ,int ,int **) ;
 scalar_t__ FUNC_3 (int *,char const*,int,int ,int ,int **) ;
 scalar_t__ FUNC_4 (int *,char const*,int *,int,int *,int ,int **) ;
 scalar_t__ FUNC_5 (int *,char const*,int *,int,int ,int **) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,char*,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_10 (int ,int,int ,int **) ;
 scalar_t__ FUNC_11 (int ,int *,int,int *,int ,int **) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_12 (int,char*,...) ;

__attribute__((used)) static void FUNC_13(void)
{
    IStorage *VAR_15 = ((void*)0), *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
    HRESULT VAR_18;
    IStream *VAR_19 = ((void*)0);
    static const WCHAR VAR_20[] = { 'C','O','N','T','E','N','T','S',0 };
    static const WCHAR VAR_21[] = { 'F','O','O',0 };
    static const WCHAR VAR_22[] = { 'P','E','R','M','S','T','G',0 };
    static const WCHAR VAR_23[] = { 'T','E','M','P','S','T','G',0 };
    BOOL VAR_24;

    FUNC_0(VAR_14);


    VAR_18 = FUNC_10( VAR_13, VAR_2 | VAR_7 |
                            VAR_5 |VAR_8, 0, &VAR_15);
    FUNC_12(VAR_18==VAR_12, "StgCreateDocfile failed\n");


    VAR_18 = FUNC_3(VAR_15, VAR_21, VAR_7 | VAR_5, 0, 0, &VAR_19 );
    FUNC_12(VAR_18==VAR_12, "IStorage->CreateStream failed\n");

    VAR_18 = FUNC_9(VAR_19, "this is stream 1\n", 16, ((void*)0));
    FUNC_12(VAR_18==VAR_12, "IStream->Write failed\n");

    FUNC_8(VAR_19);

    VAR_18 = FUNC_2(VAR_15, VAR_22, VAR_5 | VAR_7, 0, 0, &VAR_16);
    FUNC_12(VAR_18==VAR_12, "IStorage->CreateStorage failed, hr=%08x\n", VAR_18);

    if (VAR_18 == VAR_12)
    {

        VAR_18 = FUNC_2(VAR_16, VAR_22, VAR_5 | VAR_7, 0, 0, &VAR_17);
        FUNC_12(VAR_18==VAR_12, "IStorage->CreateStorage failed, hr=%08x\n", VAR_18);

        if (VAR_18 == VAR_12)
            FUNC_6(VAR_17);

        VAR_18 = FUNC_1(VAR_15, 0);
        FUNC_12(VAR_18==VAR_12, "IStorage->Commit failed\n");

        VAR_18 = FUNC_2(VAR_16, VAR_23, VAR_5 | VAR_7, 0, 0, &VAR_17);
        FUNC_12(VAR_18==VAR_12, "IStorage->CreateStorage failed, hr=%08x\n", VAR_18);

        if (VAR_18 == VAR_12)
            FUNC_6(VAR_17);

        FUNC_6(VAR_16);
    }


    VAR_19 = ((void*)0);
    VAR_18 = FUNC_3(VAR_15, VAR_20, VAR_7 | VAR_5, 0, 0, &VAR_19 );
    FUNC_12(VAR_18==VAR_12, "IStorage->CreateStream failed\n");

    VAR_18 = FUNC_9(VAR_19, "this is stream 2\n", 16, ((void*)0));
    FUNC_12(VAR_18==VAR_12, "IStream->Write failed\n");


    VAR_18 = FUNC_7(VAR_19, VAR_1 | VAR_0);
    FUNC_12(VAR_18==VAR_12, "IStream->Commit failed\n");

    VAR_18 = FUNC_2(VAR_15, VAR_23, VAR_5 | VAR_7, 0, 0, &VAR_16);
    FUNC_12(VAR_18==VAR_12, "IStorage->CreateStorage failed, hr=%08x\n", VAR_18);

    if (VAR_18 == VAR_12)
        FUNC_6(VAR_16);

    FUNC_8(VAR_19);

    FUNC_6(VAR_15);

    VAR_19 = ((void*)0);
    VAR_15 = ((void*)0);
    VAR_18 = FUNC_11( VAR_13, ((void*)0), VAR_6 | VAR_4 | VAR_8, ((void*)0), 0, &VAR_15);
    FUNC_12(VAR_18==VAR_12, "StgOpenStorage failed\n");

    if (!VAR_15)
        return;

    VAR_18 = FUNC_5(VAR_15, VAR_20, ((void*)0), VAR_6|VAR_4, 0, &VAR_19 );
    FUNC_12(VAR_18==VAR_10, "IStorage->OpenStream failed %08x\n", VAR_18);

    VAR_18 = FUNC_5(VAR_15, VAR_20, ((void*)0), VAR_3|VAR_7|VAR_5, 0, &VAR_19 );
    FUNC_12(VAR_18==VAR_11, "IStorage->OpenStream failed %08x\n", VAR_18);

    VAR_18 = FUNC_5(VAR_15, VAR_20, ((void*)0), VAR_8|VAR_7|VAR_5, 0, &VAR_19 );
    FUNC_12(VAR_18==VAR_11, "IStorage->OpenStream failed %08x\n", VAR_18);

    VAR_18 = FUNC_4(VAR_15, VAR_20, ((void*)0), VAR_8|VAR_7|VAR_5, ((void*)0), 0, &VAR_16 );
    FUNC_12(VAR_18==VAR_9, "IStorage->OpenStream failed %08x\n", VAR_18);

    VAR_18 = FUNC_5(VAR_15, VAR_20, ((void*)0), VAR_7|VAR_5, 0, &VAR_19 );
    FUNC_12(VAR_18==VAR_9, "IStorage->OpenStream should fail %08x\n", VAR_18);
    if (VAR_18 == VAR_12)
        FUNC_8(VAR_19);

    VAR_18 = FUNC_4(VAR_15, VAR_23, ((void*)0), VAR_7|VAR_5, ((void*)0), 0, &VAR_16 );
    FUNC_12(VAR_18==VAR_9, "IStorage->OpenStorage should fail %08x\n", VAR_18);
    if (VAR_18 == VAR_12)
        FUNC_6(VAR_16);

    VAR_18 = FUNC_4(VAR_15, VAR_21, ((void*)0), VAR_8|VAR_7|VAR_5, ((void*)0), 0, &VAR_16 );
    FUNC_12(VAR_18==VAR_9, "IStorage->OpenStream failed %08x\n", VAR_18);

    VAR_18 = FUNC_5(VAR_15, VAR_21, ((void*)0), VAR_7|VAR_5, 0, &VAR_19 );
    FUNC_12(VAR_18==VAR_12, "IStorage->OpenStream should succeed %08x\n", VAR_18);
    if (VAR_18 == VAR_12)
        FUNC_8(VAR_19);

    VAR_18 = FUNC_4(VAR_15, VAR_22, ((void*)0), VAR_7|VAR_5, ((void*)0), 0, &VAR_16 );
    FUNC_12(VAR_18==VAR_12, "IStorage->OpenStorage should succeed %08x\n", VAR_18);
    if (VAR_18 == VAR_12)
    {
        VAR_18 = FUNC_4(VAR_16, VAR_22, ((void*)0), VAR_7|VAR_5, ((void*)0), 0, &VAR_17 );
        FUNC_12(VAR_18==VAR_12, "IStorage->OpenStorage should succeed %08x\n", VAR_18);
        if (VAR_18 == VAR_12)
            FUNC_6(VAR_17);

        VAR_18 = FUNC_4(VAR_16, VAR_23, ((void*)0), VAR_7|VAR_5, ((void*)0), 0, &VAR_17 );
        FUNC_12(VAR_18==VAR_9, "IStorage->OpenStorage should fail %08x\n", VAR_18);
        if (VAR_18 == VAR_12)
            FUNC_6(VAR_17);

        FUNC_6(VAR_16);
    }

    FUNC_6(VAR_15);

    VAR_24 = FUNC_0(VAR_14);
    FUNC_12(VAR_24, "deleted file\n");
}
