
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
 scalar_t__ FUNC_1 (int *,int ,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int *,char const*,int,int ,int ,int **) ;
 scalar_t__ FUNC_3 (int *,char const*,int,int ,int ,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (int ,int,int ,int **) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int,char*,...) ;

__attribute__((used)) static void FUNC_8(void)
{
    IStorage *VAR_6, *VAR_7, *VAR_8, *VAR_9;
    IStream *VAR_10;
    HRESULT VAR_11;
    static const WCHAR VAR_12[] = { 'S','T','G','1',0 };
    static const WCHAR VAR_13[] = { 'S','T','G','2',0 };
    static const WCHAR VAR_14[] = { 'C','O','N','T','E','N','T','S',0 };
    BOOL VAR_15;

    FUNC_0(VAR_5);


    VAR_11 = FUNC_6( VAR_4, VAR_0 | VAR_2 |
                            VAR_1, 0, &VAR_6);
    FUNC_7(VAR_11==VAR_3, "StgCreateDocfile failed\n");


    VAR_11 = FUNC_2(VAR_6, VAR_12, VAR_1 | VAR_2, 0, 0, &VAR_7);
    FUNC_7(VAR_11==VAR_3, "IStorage->CreateStorage failed, hr=%08x\n", VAR_11);


    VAR_11 = FUNC_2(VAR_6, VAR_13, VAR_1 | VAR_2, 0, 0, &VAR_8);
    FUNC_7(VAR_11==VAR_3, "IStorage->CreateStorage failed, hr=%08x\n", VAR_11);


    VAR_11 = FUNC_3(VAR_7, VAR_14, VAR_1 | VAR_2, 0, 0, &VAR_10);
    FUNC_7(VAR_11==VAR_3, "IStorage->CreateStream failed, hr=%08x\n", VAR_11);


    VAR_11 = FUNC_1(VAR_7, 0, ((void*)0), ((void*)0), VAR_8);
    FUNC_7(VAR_11==VAR_3, "IStorage->CopyTo failed, hr=%08x\n", VAR_11);

    FUNC_5(VAR_10);


    VAR_11 = FUNC_2(VAR_7, VAR_12, VAR_1 | VAR_2, 0, 0, &VAR_9);
    FUNC_7(VAR_11==VAR_3, "IStorage->CreateStorage failed, hr=%08x\n", VAR_11);


    VAR_11 = FUNC_1(VAR_7, 0, ((void*)0), ((void*)0), VAR_8);
    FUNC_7(VAR_11==VAR_3, "IStorage->CopyTo failed, hr=%08x\n", VAR_11);

    FUNC_4(VAR_9);
    FUNC_4(VAR_8);
    FUNC_4(VAR_7);
    FUNC_4(VAR_6);

    VAR_15 = FUNC_0(VAR_5);
    FUNC_7(VAR_15, "deleted file\n");
}
