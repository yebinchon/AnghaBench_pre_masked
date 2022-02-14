
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Flags; } ;
typedef TYPE_1__ USER_MARSHAL_CB ;
typedef scalar_t__ ULONG_PTR ;
typedef int ULONG ;
typedef int RPC_MESSAGE ;
typedef int MIDL_STUB_MESSAGE ;
typedef int * HGLOBAL ;
typedef int DWORD ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 unsigned char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int **) ;
 int FUNC_7 (int *,unsigned char*,int **) ;
 int FUNC_8 (int *,int ,int **) ;
 int FUNC_9 (int *,unsigned char*,int **) ;
 unsigned char* FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ,int ,unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (TYPE_1__*,int *,int *,unsigned char*,int,int ) ;
 int FUNC_14 (int,char*,...) ;

__attribute__((used)) static void FUNC_15(void)
{
    USER_MARSHAL_CB VAR_2;
    MIDL_STUB_MESSAGE VAR_3;
    RPC_MESSAGE VAR_4;
    unsigned char *VAR_5;
    ULONG VAR_6, VAR_7;
    HGLOBAL VAR_8;
    HGLOBAL VAR_9;
    unsigned char *VAR_10;
    int VAR_11;

    VAR_8 = ((void*)0);
    FUNC_13(&VAR_2, &VAR_3, &VAR_4, ((void*)0), 0, VAR_0);
    VAR_6 = FUNC_8(&VAR_2.Flags, 0, &VAR_8);


    FUNC_14((VAR_6 == 8) || FUNC_12(VAR_6 == 12) || FUNC_12(VAR_6 == 16), "Size should be 8, instead of %d\n", VAR_6);
    VAR_5 = FUNC_10(FUNC_0(), 0, VAR_6);
    FUNC_13(&VAR_2, &VAR_3, &VAR_4, VAR_5, VAR_6, VAR_0);
    FUNC_7(&VAR_2.Flags, VAR_5, &VAR_8);
    VAR_10 = VAR_5;
    FUNC_14(*(ULONG *)VAR_10 == VAR_1, "Context should be WDT_REMOTE_CALL instead of 0x%08x\n", *(ULONG *)VAR_10);
    VAR_10 += sizeof(ULONG);
    FUNC_14(*(ULONG *)VAR_10 == 0, "buffer+4 should be HGLOBAL\n");
    FUNC_13(&VAR_2, &VAR_3, &VAR_4, VAR_5, VAR_6, VAR_0);
    VAR_9 = ((void*)0);
    FUNC_9(&VAR_2.Flags, VAR_5, &VAR_9);
    FUNC_14(VAR_9 == VAR_8, "Didn't unmarshal properly\n");
    FUNC_11(FUNC_0(), 0, VAR_5);
    FUNC_13(&VAR_2, &VAR_3, &VAR_4, ((void*)0), 0, VAR_0);
    FUNC_6(&VAR_2.Flags, &VAR_9);


    for(VAR_7 = 0; VAR_7 <= 17; VAR_7++)
    {
        ULONG VAR_12, VAR_13;

        VAR_8 = FUNC_1(0, VAR_7);
        VAR_5 = FUNC_3(VAR_8);
        for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
            VAR_5[VAR_11] = VAR_11;
        FUNC_5(VAR_8);
        VAR_12 = FUNC_4(VAR_8);
        VAR_13 = VAR_12 + 5 * sizeof(DWORD);
        FUNC_13(&VAR_2, &VAR_3, &VAR_4, ((void*)0), 0, VAR_0);
        VAR_6 = FUNC_8(&VAR_2.Flags, 0, &VAR_8);


        FUNC_14(VAR_6 == VAR_13 ||
           FUNC_12(VAR_6 == VAR_13 + 4) ||
           FUNC_12(VAR_6 == VAR_13 + 8),
           "%d: got size %d\n", VAR_7, VAR_6);
        VAR_5 = FUNC_10(FUNC_0(), 0, VAR_6);
        FUNC_13(&VAR_2, &VAR_3, &VAR_4, VAR_5, VAR_6, VAR_0);
        FUNC_7(&VAR_2.Flags, VAR_5, &VAR_8);
        VAR_10 = VAR_5;
        FUNC_14(*(ULONG *)VAR_10 == VAR_1, "Context should be WDT_REMOTE_CALL instead of 0x%08x\n", *(ULONG *)VAR_10);
        VAR_10 += sizeof(ULONG);
        FUNC_14(*(ULONG *)VAR_10 == (ULONG)(ULONG_PTR)VAR_8, "buffer+0x4 should be HGLOBAL\n");
        VAR_10 += sizeof(ULONG);
        FUNC_14(*(ULONG *)VAR_10 == VAR_12, "%d: buffer+0x8 %08x\n", VAR_7, *(ULONG *)VAR_10);
        VAR_10 += sizeof(ULONG);
        FUNC_14(*(ULONG *)VAR_10 == (ULONG)(ULONG_PTR)VAR_8, "buffer+0xc should be HGLOBAL\n");
        VAR_10 += sizeof(ULONG);
        FUNC_14(*(ULONG *)VAR_10 == VAR_12, "%d: buffer+0x10 %08x\n", VAR_7, *(ULONG *)VAR_10);
        VAR_10 += sizeof(ULONG);
        for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
            FUNC_14(VAR_10[VAR_11] == VAR_11, "buffer+0x%x should be %d\n", 0x10 + VAR_11, VAR_11);

        FUNC_13(&VAR_2, &VAR_3, &VAR_4, VAR_5, VAR_6, VAR_0);
        VAR_9 = ((void*)0);
        FUNC_9(&VAR_2.Flags, VAR_5, &VAR_9);
        FUNC_14(VAR_9 != ((void*)0), "Didn't unmarshal properly\n");
        FUNC_11(FUNC_0(), 0, VAR_5);
        FUNC_13(&VAR_2, &VAR_3, &VAR_4, ((void*)0), 0, VAR_0);
        FUNC_6(&VAR_2.Flags, &VAR_9);
        FUNC_2(VAR_8);
    }
}
