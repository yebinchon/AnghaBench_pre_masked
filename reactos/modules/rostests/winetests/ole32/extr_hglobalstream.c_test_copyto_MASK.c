
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int szHello ;
typedef int buffer ;
typedef int ULONG ;
struct TYPE_6__ {int QuadPart; } ;
typedef TYPE_1__ ULARGE_INTEGER ;
typedef int LARGE_INTEGER ;
typedef int IStream ;
typedef int HRESULT ;


 int FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int *,int *,TYPE_1__,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int *,char*,int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const,int ,TYPE_1__*) ;
 int FUNC_6 (int *,char const*,int,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char** VAR_4 ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (char*,char const*) ;

__attribute__((used)) static void FUNC_10(void)
{
    IStream *VAR_5, *VAR_6;
    HRESULT VAR_7 = FUNC_0(((void*)0), VAR_2, &VAR_5);
    static const char VAR_8[] = "Hello";
    ULARGE_INTEGER VAR_9;
    static const char *VAR_10[] =
    {
        "TestStream_Write",
        ((void*)0)
    };
    ULONG VAR_11;
    ULARGE_INTEGER VAR_12;
    ULARGE_INTEGER VAR_13;
    ULARGE_INTEGER VAR_14;
    static const LARGE_INTEGER VAR_15;
    char VAR_16[15];

    FUNC_8(VAR_7, "CreateStreamOnHGlobal");

    VAR_4 = VAR_10;

    VAR_7 = FUNC_6(VAR_5, VAR_8, sizeof(VAR_8), &VAR_11);
    FUNC_8(VAR_7, "IStream_Write");
    FUNC_7(VAR_11 == sizeof(VAR_8), "only %d bytes written\n", VAR_11);

    VAR_7 = FUNC_5(VAR_5, VAR_15, VAR_1, ((void*)0));
    FUNC_8(VAR_7, "IStream_Seek");

    VAR_9.QuadPart = sizeof(VAR_8);
    VAR_7 = FUNC_2(VAR_5, &VAR_3, VAR_9, &VAR_12, &VAR_13);
    FUNC_7(VAR_13.QuadPart == 5, "ullWritten was %d instead\n", (ULONG)VAR_13.QuadPart);
    FUNC_7(VAR_12.QuadPart == sizeof(VAR_8), "only %d bytes read\n", (ULONG)VAR_12.QuadPart);
    FUNC_8(VAR_7, "IStream_CopyTo");

    FUNC_7(!*VAR_4, "Method sequence starting from %s not called\n", *VAR_4);

    VAR_7 = FUNC_1(VAR_5, &VAR_6);
    FUNC_8(VAR_7, "IStream_Clone");

    VAR_7 = FUNC_5(VAR_6, VAR_15, VAR_0, &VAR_14);
    FUNC_8(VAR_7, "IStream_Seek");
    FUNC_7(VAR_14.QuadPart == sizeof(VAR_8), "libNewPosition wasn't set correctly for the cloned stream\n");

    VAR_7 = FUNC_5(VAR_6, VAR_15, VAR_1, ((void*)0));
    FUNC_8(VAR_7, "IStream_Seek");

    VAR_7 = FUNC_3(VAR_6, VAR_16, sizeof(VAR_16), ((void*)0));
    FUNC_8(VAR_7, "IStream_Read");
    FUNC_7(!FUNC_9(VAR_16, VAR_8), "read data \"%s\" didn't match originally written data\n", VAR_16);

    FUNC_4(VAR_6);
    FUNC_4(VAR_5);
}
