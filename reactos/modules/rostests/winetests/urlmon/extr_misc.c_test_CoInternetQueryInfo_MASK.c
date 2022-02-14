
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
struct TYPE_3__ {int uses_net; int url; } ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char,int) ;
 int FUNC_2 (int,char*,int,int,...) ;
 int FUNC_3 (int ,int ,int ,int *,int,int*,int ) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_4(void)
{
    BYTE VAR_4[100];
    DWORD VAR_5, VAR_6;
    HRESULT VAR_7;

    for(VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++) {
        VAR_5 = 0xdeadbeef;
        FUNC_1(VAR_4, '?', sizeof(VAR_4));
        VAR_7 = FUNC_3(VAR_3[0].url, VAR_1, 0, VAR_4, sizeof(VAR_4), &VAR_5, 0);
        FUNC_2(VAR_7 == VAR_2, "[%d] CoInternetQueryInfo failed: %08x\n", VAR_6, VAR_7);
        FUNC_2(VAR_5 == sizeof(DWORD), "[%d] cb = %d\n", VAR_6, VAR_5);
        FUNC_2(*(DWORD*)VAR_4 == VAR_3[VAR_6].uses_net, "[%d] ret %x, expected %x\n",
           VAR_6, *(DWORD*)VAR_4, VAR_3[VAR_6].uses_net);

        VAR_7 = FUNC_3(VAR_3[0].url, VAR_1, 0, VAR_4, 3, &VAR_5, 0);
        FUNC_2(VAR_7 == VAR_0, "[%d] CoInternetQueryInfo failed: %08x, expected E_FAIL\n", VAR_6, VAR_7);
        VAR_7 = FUNC_3(VAR_3[0].url, VAR_1, 0, ((void*)0), sizeof(VAR_4), &VAR_5, 0);
        FUNC_2(VAR_7 == VAR_0, "[%d] CoInternetQueryInfo failed: %08x, expected E_FAIL\n", VAR_6, VAR_7);

        FUNC_1(VAR_4, '?', sizeof(VAR_4));
        VAR_7 = FUNC_3(VAR_3[0].url, VAR_1, 0, VAR_4, sizeof(VAR_4), ((void*)0), 0);
        FUNC_2(VAR_7 == VAR_2, "[%d] CoInternetQueryInfo failed: %08x\n", VAR_6, VAR_7);
        FUNC_2(*(DWORD*)VAR_4 == VAR_3[VAR_6].uses_net, "[%d] ret %x, expected %x\n",
           VAR_6, *(DWORD*)VAR_4, VAR_3[VAR_6].uses_net);
    }
}
