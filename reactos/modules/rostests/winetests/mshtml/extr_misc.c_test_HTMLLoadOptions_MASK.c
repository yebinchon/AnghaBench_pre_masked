
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int data ;
typedef int buf ;
typedef int IHtmlLoadOptions ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int,int *,void**) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int *,int,int*,scalar_t__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int,...) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int*,int,int) ;
 int FUNC_6 (int,char*,...) ;

__attribute__((used)) static void FUNC_7(void)
{
    IHtmlLoadOptions *VAR_8;
    BYTE VAR_9[100];
    DWORD VAR_10, VAR_11, VAR_12 = 0xdeadbeef;
    HRESULT VAR_13;

    VAR_13 = FUNC_0(&VAR_2, ((void*)0), VAR_1|VAR_0,
            &VAR_6, (void**)&VAR_8);
    FUNC_6(VAR_13 == VAR_7, "creating HTMLLoadOptions failed: %08x\n", VAR_13);
    if(FUNC_1(VAR_13))
        return;

    for(VAR_11=0; VAR_11 <= VAR_5+3; VAR_11++) {
        VAR_10 = 0xdeadbeef;
        FUNC_5(VAR_9, 0xdd, sizeof(VAR_9));
        VAR_13 = FUNC_2(VAR_8, VAR_11, ((void*)0), &VAR_10);
        FUNC_6(VAR_13 == VAR_7, "QueryOption failed: %08x\n", VAR_13);
        FUNC_6(VAR_10 == 0, "size = %d\n", VAR_10);
        FUNC_6(VAR_9[0] == 0xdd, "buf changed\n");
    }

    VAR_10 = 0xdeadbeef;
    VAR_13 = FUNC_2(VAR_8, VAR_4, ((void*)0), &VAR_10);
    FUNC_6(VAR_13 == VAR_7, "QueryOption failed: %08x\n", VAR_13);
    FUNC_6(VAR_10 == 0, "size = %d\n", VAR_10);

    VAR_13 = FUNC_4(VAR_8, VAR_4, &VAR_12, sizeof(VAR_12));
    FUNC_6(VAR_13 == VAR_7, "SetOption failed: %08x\n", VAR_13);

    VAR_10 = sizeof(VAR_12);
    FUNC_5(VAR_9, 0xdd, sizeof(VAR_9));
    VAR_13 = FUNC_2(VAR_8, VAR_4, VAR_9, &VAR_10);
    FUNC_6(VAR_13 == VAR_7, "QueryOption failed: %08x\n", VAR_13);
    FUNC_6(VAR_10 == sizeof(VAR_12), "size = %d\n", VAR_10);
    FUNC_6(*(DWORD*)VAR_9 == VAR_12, "unexpected buf\n");

    VAR_10 = sizeof(VAR_12)-1;
    FUNC_5(VAR_9, 0xdd, sizeof(VAR_9));
    VAR_13 = FUNC_2(VAR_8, VAR_4, VAR_9, &VAR_10);
    FUNC_6(VAR_13 == VAR_3, "QueryOption failed: %08x\n", VAR_13);
    FUNC_6(VAR_10 == sizeof(VAR_12) || !VAR_10, "size = %d\n", VAR_10);
    FUNC_6(VAR_9[0] == 0xdd, "buf changed\n");

    VAR_12 = 100;
    VAR_13 = FUNC_4(VAR_8, VAR_4, &VAR_12, 0);
    FUNC_6(VAR_13 == VAR_7, "SetOption failed: %08x\n", VAR_13);

    VAR_10 = 0xdeadbeef;
    FUNC_5(VAR_9, 0xdd, sizeof(VAR_9));
    VAR_13 = FUNC_2(VAR_8, VAR_4, VAR_9, &VAR_10);
    FUNC_6(VAR_13 == VAR_7, "QueryOption failed: %08x\n", VAR_13);
    FUNC_6(VAR_10 == 0, "size = %d\n", VAR_10);
    FUNC_6(VAR_9[0] == 0xdd, "buf changed\n");

    VAR_13 = FUNC_4(VAR_8, VAR_4, ((void*)0), 0);
    FUNC_6(VAR_13 == VAR_7, "SetOption failed: %08x\n", VAR_13);

    VAR_13 = FUNC_4(VAR_8, 1000, &VAR_12, sizeof(VAR_12));
    FUNC_6(VAR_13 == VAR_7, "SetOption failed: %08x\n", VAR_13);

    VAR_10 = sizeof(VAR_12);
    FUNC_5(VAR_9, 0xdd, sizeof(VAR_9));
    VAR_13 = FUNC_2(VAR_8, 1000, VAR_9, &VAR_10);
    FUNC_6(VAR_13 == VAR_7, "QueryOption failed: %08x\n", VAR_13);
    FUNC_6(VAR_10 == sizeof(VAR_12), "size = %d\n", VAR_10);
    FUNC_6(*(DWORD*)VAR_9 == VAR_12, "unexpected buf\n");

    VAR_13 = FUNC_4(VAR_8, 1000, VAR_9, sizeof(VAR_9));
    FUNC_6(VAR_13 == VAR_7, "SetOption failed: %08x\n", VAR_13);

    VAR_10 = 0xdeadbeef;
    VAR_13 = FUNC_2(VAR_8, 1000, VAR_9, &VAR_10);
    FUNC_6(VAR_13 == VAR_7, "QueryOption failed: %08x\n", VAR_13);
    FUNC_6(VAR_10 == sizeof(VAR_9), "size = %d\n", VAR_10);

    FUNC_3(VAR_8);
}
