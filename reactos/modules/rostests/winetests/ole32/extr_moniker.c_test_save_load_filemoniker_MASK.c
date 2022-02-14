
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_6__ {int LowPart; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
typedef TYPE_2__ ULARGE_INTEGER ;
struct TYPE_8__ {scalar_t__ QuadPart; } ;
typedef TYPE_3__ LARGE_INTEGER ;
typedef int IStream ;
typedef int IMoniker ;
typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (int ,int **) ;
 int FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_3__,int ,int *) ;
 int FUNC_7 (int *,TYPE_2__) ;
 int FUNC_8 (int *,int*,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_11(void)
{
    IMoniker* VAR_3;
    IStream* VAR_4;
    HRESULT VAR_5;
    ULARGE_INTEGER VAR_6;
    LARGE_INTEGER VAR_7, VAR_8, VAR_9;
    DWORD VAR_10 = 0xFEDCBA98;
    int VAR_11;


    VAR_7.QuadPart = 0;
    VAR_8.QuadPart = sizeof(WORD) + sizeof(DWORD) + (FUNC_9(VAR_2) + 1) + sizeof(WORD);
    VAR_9.QuadPart = VAR_8.QuadPart + sizeof(WORD);


    VAR_5 = FUNC_1(((void*)0), VAR_1, &VAR_4);
    FUNC_10(VAR_5, "CreateStreamOnHGlobal");

    VAR_6.u.LowPart = 128;
    VAR_5 = FUNC_7(VAR_4, VAR_6);
    FUNC_10(VAR_5, "IStream_SetSize");


    VAR_5 = FUNC_0(VAR_2, &VAR_3);
    FUNC_10(VAR_5, "CreateFileMoniker");

    VAR_5 = FUNC_4(VAR_3, VAR_4, VAR_1);
    FUNC_10(VAR_5, "IMoniker_Save");
    FUNC_3(VAR_3);


    VAR_5 = FUNC_6(VAR_4, VAR_7, VAR_0, ((void*)0));
    FUNC_10(VAR_5, "IStream_Seek");
    VAR_5 = FUNC_8(VAR_4, &VAR_10, sizeof(WORD), ((void*)0));
    FUNC_10(VAR_5, "IStream_Write");

    VAR_5 = FUNC_6(VAR_4, VAR_8, VAR_0, ((void*)0));
    FUNC_10(VAR_5, "IStream_Seek");
    VAR_5 = FUNC_8(VAR_4, &VAR_10, sizeof(WORD), ((void*)0));
    FUNC_10(VAR_5, "IStream_Write");

    VAR_5 = FUNC_6(VAR_4, VAR_9, VAR_0, ((void*)0));
    FUNC_10(VAR_5, "IStream_Seek");
    for(VAR_11 = 0; VAR_11 < 5; ++VAR_11){
        VAR_5 = FUNC_8(VAR_4, &VAR_10, sizeof(DWORD), ((void*)0));
        FUNC_10(VAR_5, "IStream_Write");
    }


    VAR_5 = FUNC_6(VAR_4, VAR_7, VAR_0, ((void*)0));
    FUNC_10(VAR_5, "IStream_Seek");


    VAR_5 = FUNC_0(VAR_2, &VAR_3);
    FUNC_10(VAR_5, "CreateFileMoniker");

    VAR_5 = FUNC_2(VAR_3, VAR_4);
    FUNC_10(VAR_5, "IMoniker_Load");

    FUNC_3(VAR_3);
    FUNC_5(VAR_4);
}
