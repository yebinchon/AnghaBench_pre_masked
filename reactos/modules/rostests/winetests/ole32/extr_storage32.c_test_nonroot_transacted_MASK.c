
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
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_9 (int ,int,int ,int **) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (int,char*,...) ;

__attribute__((used)) static void FUNC_11(void)
{
    IStorage *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
    HRESULT VAR_13;
    IStream *VAR_14 = ((void*)0);
    static const WCHAR VAR_15[] = { 'P','E','R','M','S','T','G',0 };
    static const WCHAR VAR_16[] = { 'C','O','N','T','E','N','T','S',0 };
    static const WCHAR VAR_17[] = { 'F','O','O',0 };
    BOOL VAR_18;

    FUNC_0(VAR_9);


    VAR_13 = FUNC_9( VAR_8, VAR_0 | VAR_3 |
                            VAR_2 |VAR_4, 0, &VAR_10);
    FUNC_10(VAR_13==VAR_7, "StgCreateDocfile failed\n");


    VAR_13 = FUNC_2(VAR_10, VAR_15, VAR_2 | VAR_3 | VAR_4, 0, 0, &VAR_11);
    FUNC_10(VAR_13==VAR_7, "IStorage->CreateStorage failed, hr=%08x\n", VAR_13);

    if (VAR_13 == VAR_7)
    {

        VAR_13 = FUNC_3(VAR_11, VAR_16, VAR_3 | VAR_2, 0, 0, &VAR_14 );
        FUNC_10(VAR_13==VAR_7, "IStorage->CreateStream failed\n");
        if (VAR_13 == VAR_7)
            FUNC_8(VAR_14);

        FUNC_1(VAR_11, 0);


        VAR_13 = FUNC_3(VAR_11, VAR_17, VAR_3 | VAR_2, 0, 0, &VAR_14 );
        FUNC_10(VAR_13==VAR_7, "IStorage->CreateStream failed\n");
        if (VAR_13 == VAR_7)
            FUNC_8(VAR_14);

        FUNC_7(VAR_11);


        VAR_13 = FUNC_5(VAR_11, VAR_16, ((void*)0), VAR_3|VAR_2, 0, &VAR_14 );
        FUNC_10(VAR_13==VAR_7, "IStorage->OpenStream should succeed %08x\n", VAR_13);
        if (VAR_13 == VAR_7)
            FUNC_8(VAR_14);

        VAR_13 = FUNC_5(VAR_11, VAR_17, ((void*)0), VAR_3|VAR_2, 0, &VAR_14 );
        FUNC_10(VAR_13==VAR_6, "IStorage->OpenStream should fail %08x\n", VAR_13);
        if (VAR_13 == VAR_7)
            FUNC_8(VAR_14);

        FUNC_6(VAR_11);
    }


    VAR_13 = FUNC_4(VAR_10, VAR_15, ((void*)0), VAR_1 | VAR_3 | VAR_4, ((void*)0), 0, &VAR_11);
    FUNC_10(VAR_13==VAR_7, "IStorage->OpenStorage failed, hr=%08x\n", VAR_13);

    if (VAR_13 == VAR_7)
    {

        VAR_13 = FUNC_2(VAR_11, VAR_15, VAR_2 | VAR_3, 0, 0, &VAR_12);
        FUNC_10(VAR_13==VAR_7, "IStorage->CreateStorage failed, hr=%08x\n", VAR_13);
        if (VAR_13 == VAR_7)
            FUNC_6(VAR_12);


        VAR_13 = FUNC_1(VAR_11, 0);
        FUNC_10(VAR_13==VAR_5, "IStorage->Commit should fail, hr=%08x\n", VAR_13);

        FUNC_6(VAR_11);
    }

    FUNC_6(VAR_10);


    VAR_13 = FUNC_9( VAR_8, VAR_0 | VAR_3 |
                            VAR_2, 0, &VAR_10);
    FUNC_10(VAR_13==VAR_7, "StgCreateDocfile failed\n");


    VAR_13 = FUNC_2(VAR_10, VAR_15, VAR_2 | VAR_3 | VAR_4, 0, 0, &VAR_11);
    FUNC_10(VAR_13==VAR_7, "IStorage->CreateStorage failed, hr=%08x\n", VAR_13);

    if (VAR_13 == VAR_7)
    {

        VAR_13 = FUNC_3(VAR_11, VAR_16, VAR_3 | VAR_2, 0, 0, &VAR_14 );
        FUNC_10(VAR_13==VAR_7, "IStorage->CreateStream failed\n");
        if (VAR_13 == VAR_7)
            FUNC_8(VAR_14);

        FUNC_1(VAR_11, 0);


        VAR_13 = FUNC_3(VAR_11, VAR_17, VAR_3 | VAR_2, 0, 0, &VAR_14 );
        FUNC_10(VAR_13==VAR_7, "IStorage->CreateStream failed\n");
        if (VAR_13 == VAR_7)
            FUNC_8(VAR_14);

        FUNC_7(VAR_11);


        VAR_13 = FUNC_5(VAR_11, VAR_16, ((void*)0), VAR_3|VAR_2, 0, &VAR_14 );
        FUNC_10(VAR_13==VAR_7, "IStorage->OpenStream should succeed %08x\n", VAR_13);
        if (VAR_13 == VAR_7)
            FUNC_8(VAR_14);

        VAR_13 = FUNC_5(VAR_11, VAR_17, ((void*)0), VAR_3|VAR_2, 0, &VAR_14 );
        FUNC_10(VAR_13==VAR_6, "IStorage->OpenStream should fail %08x\n", VAR_13);
        if (VAR_13 == VAR_7)
            FUNC_8(VAR_14);

        FUNC_6(VAR_11);
    }

    FUNC_6(VAR_10);

    VAR_18 = FUNC_0(VAR_9);
    FUNC_10(VAR_18, "deleted file\n");
}
