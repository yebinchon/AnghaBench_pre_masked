
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ ULONG ;
typedef int STATSTG ;
typedef int IStream ;
typedef int IStorage ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,char const*,int,int ,int ,int **) ;
 scalar_t__ FUNC_2 (int *,char const*,int,int ,int ,int **) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int,int) ;
 scalar_t__ FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,char*,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_8 (int ,int,int ,int **) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int,char*,...) ;

__attribute__((used)) static void FUNC_10(void)
{
    IStorage *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    HRESULT VAR_12;
    IStream *VAR_13 = ((void*)0);
    static const WCHAR VAR_14[] = { 'C','O','N','T','E','N','T','S',0 };
    static const WCHAR VAR_15[] = { 'P','E','R','M','S','T','G',0 };
    ULONG VAR_16;
    STATSTG VAR_17;
    BOOL VAR_18;

    FUNC_0(VAR_8);


    VAR_12 = FUNC_8( VAR_7, VAR_1 | VAR_3 |
                            VAR_2 |VAR_4, 0, &VAR_9);
    FUNC_9(VAR_12==VAR_6, "StgCreateDocfile failed\n");


    VAR_12 = FUNC_1(VAR_9, VAR_15, VAR_2 | VAR_3, 0, 0, &VAR_10);
    FUNC_9(VAR_12==VAR_6, "IStorage->CreateStorage failed, hr=%08x\n", VAR_12);

    if (VAR_12 == VAR_6)
    {

        VAR_12 = FUNC_2(VAR_10, VAR_14, VAR_3 | VAR_2, 0, 0, &VAR_13 );
        FUNC_9(VAR_12==VAR_6, "IStorage->CreateStream failed\n");

        if (VAR_12 == VAR_6)
        {

            VAR_12 = FUNC_1(VAR_10, VAR_15, VAR_3 | VAR_2, 0, 0, &VAR_11 );
            FUNC_9(VAR_12==VAR_6, "IStorage->CreateStorage failed\n");
        }


        VAR_16 = FUNC_3(VAR_10);
        FUNC_9(VAR_16 == 0, "IStorage still has %u references\n", VAR_16);


        if (VAR_12 == VAR_6)
        {
            VAR_12 = FUNC_7(VAR_13, "this should fail\n", 17, ((void*)0));
            FUNC_9(VAR_12==VAR_5, "IStream->Write should fail, hr=%x\n", VAR_12);

            FUNC_6(VAR_13);

            VAR_12 = FUNC_5(VAR_11, &VAR_17, VAR_0);
            FUNC_9(VAR_12==VAR_5, "IStorage_Stat should fail %08x\n", VAR_12);

            VAR_12 = FUNC_4(VAR_11, 1, 1);
            FUNC_9(VAR_12==VAR_5, "IStorage_Stat should fail %08x\n", VAR_12);

            FUNC_3(VAR_11);
        }
    }

    FUNC_3(VAR_9);

    VAR_18 = FUNC_0(VAR_8);
    FUNC_9(VAR_18, "deleted file\n");
}
