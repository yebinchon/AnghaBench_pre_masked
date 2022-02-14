
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int size ;
typedef char WCHAR ;
struct TYPE_4__ {int pStorage; } ;
typedef int * LPWSTR ;
typedef int * LPCSTR ;
typedef int IStream ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_1__ CHMInfo ;


 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,char const*,int *,int ,int ,int **) ;
 int FUNC_3 (int *,int*,int,int*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *) ;
 int* FUNC_8 (int) ;
 int FUNC_9 (int*) ;
 int * FUNC_10 (int *) ;

LPWSTR FUNC_11(CHMInfo *VAR_1, DWORD VAR_2)
{
    IStream *VAR_3;
    DWORD VAR_4, VAR_5, VAR_6;
    DWORD *VAR_7;
    LPCSTR VAR_8 = ((void*)0);
    HRESULT VAR_9;

    static const WCHAR VAR_10[] = {'#','I','V','B',0};

    VAR_9 = FUNC_2(VAR_1->pStorage, VAR_10, ((void*)0), VAR_0, 0, &VAR_3);
    if(FUNC_0(VAR_9)) {
        FUNC_6("Could not open #IVB stream: %08x\n", VAR_9);
        return ((void*)0);
    }

    VAR_9 = FUNC_3(VAR_3, &VAR_4, sizeof(VAR_4), &VAR_5);
    if(FUNC_0(VAR_9)) {
        FUNC_6("Read failed: %08x\n", VAR_9);
        FUNC_4(VAR_3);
        return ((void*)0);
    }

    VAR_7 = FUNC_8(VAR_4);
    VAR_9 = FUNC_3(VAR_3, VAR_7, VAR_4, &VAR_5);
    FUNC_4(VAR_3);
    if(FUNC_0(VAR_9)) {
        FUNC_6("Read failed: %08x\n", VAR_9);
        FUNC_9(VAR_7);
        return ((void*)0);
    }

    VAR_4 /= 2*sizeof(DWORD);

    for(VAR_6=0; VAR_6<VAR_4; VAR_6++) {
        if(VAR_7[2*VAR_6] == VAR_2) {
            VAR_8 = FUNC_1(VAR_1, VAR_7[2*VAR_6+1]);
            break;
        }
    }

    FUNC_9(VAR_7);

    FUNC_5("returning %s\n", FUNC_7(VAR_8));
    return FUNC_10(VAR_8);
}
