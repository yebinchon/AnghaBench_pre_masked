
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IStorage ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int *,char const*,int,int ,int ,int **) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (int ,int,int ,int **) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static void FUNC_6(void)
{
    IStorage *VAR_9, *VAR_10, *VAR_11, *VAR_12;
    HRESULT VAR_13;
    static const WCHAR VAR_14[] = { 'S','T','G','1',0 };
    static const WCHAR VAR_15[] = { 'S','T','G','2',0 };
    BOOL VAR_16;

    FUNC_0(VAR_8);


    VAR_13 = FUNC_4( VAR_7, VAR_1 | VAR_3 |
                            VAR_2, 0, &VAR_9);
    FUNC_5(VAR_13==VAR_6, "StgCreateDocfile failed\n");


    VAR_13 = FUNC_2(VAR_9, VAR_14, VAR_2 | VAR_3, 0, 0, &VAR_10);
    FUNC_5(VAR_13==VAR_6, "IStorage->CreateStorage failed, hr=%08x\n", VAR_13);


    VAR_13 = FUNC_1(VAR_9, 0, ((void*)0), ((void*)0), VAR_10);
    FUNC_5(VAR_13==VAR_5, "IStorage->CopyTo failed, hr=%08x\n", VAR_13);


    VAR_13 = FUNC_2(VAR_9, VAR_15, VAR_2 | VAR_3 | VAR_4, 0, 0, &VAR_11);
    FUNC_5(VAR_13==VAR_6, "IStorage->CreateStorage failed, hr=%08x\n", VAR_13);


    VAR_13 = FUNC_1(VAR_9, 0, ((void*)0), ((void*)0), VAR_10);
    FUNC_5(VAR_13==VAR_5, "IStorage->CopyTo failed, hr=%08x\n", VAR_13);


    VAR_13 = FUNC_2(VAR_11, VAR_15, VAR_2 | VAR_3 | VAR_4, 0, 0, &VAR_12);
    FUNC_5(VAR_13==VAR_6, "IStorage->CreateStorage failed, hr=%08x\n", VAR_13);


    VAR_13 = FUNC_1(VAR_9, 0, ((void*)0), ((void*)0), VAR_12);
    FUNC_5(VAR_13==VAR_5, "IStorage->CopyTo failed, hr=%08x\n", VAR_13);


    VAR_13 = FUNC_1(VAR_9, 1, &VAR_0, ((void*)0), VAR_12);
    FUNC_5(VAR_13==VAR_6, "IStorage->CopyTo failed, hr=%08x\n", VAR_13);

    FUNC_3(VAR_12);
    FUNC_3(VAR_11);
    FUNC_3(VAR_10);
    FUNC_3(VAR_9);

    VAR_16 = FUNC_0(VAR_8);
    FUNC_5(VAR_16, "deleted file\n");
}
