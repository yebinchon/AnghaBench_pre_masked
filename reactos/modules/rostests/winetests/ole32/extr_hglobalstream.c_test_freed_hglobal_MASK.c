
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int teststring ;
typedef int buffer ;
typedef int ULONG ;
struct TYPE_3__ {int QuadPart; } ;
typedef TYPE_1__ ULARGE_INTEGER ;
typedef int IStream ;
typedef int HRESULT ;
typedef int * HGLOBAL ;


 int FUNC_0 (int *,int ,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int * FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int,int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_1__) ;
 int FUNC_9 (int *,char*,int,int*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (char*,int ,int) ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 (int,char*) ;
 int FUNC_14 (char*,char const*) ;
 int FUNC_15 (char*,char const*) ;
 scalar_t__ FUNC_16 (char const*) ;

__attribute__((used)) static void FUNC_17(void)
{
    static const char VAR_5[] = "this is a test string";
    HRESULT VAR_6;
    IStream *VAR_7;
    HGLOBAL VAR_8;
    char *VAR_9;
    char VAR_10[sizeof(VAR_5) + 8];
    ULARGE_INTEGER VAR_11;
    ULONG VAR_12, VAR_13;

    VAR_8 = FUNC_2(VAR_2|VAR_4|VAR_3, FUNC_16(VAR_5) + 1);
    FUNC_12(VAR_8 != ((void*)0), "GlobalAlloc failed with error %d\n", FUNC_1());
    VAR_9 = FUNC_4(VAR_8);
    FUNC_15(VAR_9, VAR_5);
    FUNC_5(VAR_8);

    VAR_6 = FUNC_0(VAR_8, VAR_1, &VAR_7);
    FUNC_13(VAR_6, "CreateStreamOnHGlobal");

    VAR_6 = FUNC_6(VAR_7, VAR_10, sizeof(VAR_10), &VAR_12);
    FUNC_13(VAR_6, "IStream_Read");
    FUNC_12(!FUNC_14(VAR_10, VAR_5), "buffer data %s differs\n", VAR_10);
    FUNC_12(VAR_12 == sizeof(VAR_5) ||
       FUNC_10(VAR_12 == ((sizeof(VAR_5) + 3) & ~3)),
       "read should be sizeof(teststring) instead of %d\n", VAR_12);

    FUNC_3(VAR_8);

    FUNC_11(VAR_10, 0, sizeof(VAR_10));
    VAR_12 = -1;
    VAR_6 = FUNC_6(VAR_7, VAR_10, sizeof(VAR_10), &VAR_12);
    FUNC_13(VAR_6, "IStream_Read");
    FUNC_12(VAR_10[0] == 0, "buffer data should be untouched\n");
    FUNC_12(VAR_12 == 0, "read should be 0 instead of %d\n", VAR_12);

    VAR_11.QuadPart = sizeof(VAR_10);
    VAR_6 = FUNC_8(VAR_7, VAR_11);
    FUNC_12(VAR_6 == VAR_0, "IStream_SetSize with invalid HGLOBAL should return E_OUTOFMEMORY instead of 0x%08x\n", VAR_6);

    VAR_6 = FUNC_9(VAR_7, VAR_10, sizeof(VAR_10), &VAR_13);
    FUNC_12(VAR_6 == VAR_0, "IStream_Write with invalid HGLOBAL should return E_OUTOFMEMORY instead of 0x%08x\n", VAR_6);
    FUNC_12(VAR_13 == 0, "written should be 0 instead of %d\n", VAR_13);

    FUNC_7(VAR_7);
}
