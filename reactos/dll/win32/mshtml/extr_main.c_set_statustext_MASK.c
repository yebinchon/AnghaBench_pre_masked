
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int frame; } ;
typedef int * LPCWSTR ;
typedef int INT ;
typedef TYPE_1__ HTMLDocumentObj ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (void**,int *,int *) ;
 int FUNC_2 (int ,int,int *,int) ;
 int VAR_1 ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int *,int *) ;
 int ** VAR_2 ;

void FUNC_8(HTMLDocumentObj* VAR_3, INT VAR_4, LPCWSTR VAR_5)
{
    int VAR_6 = VAR_4 - VAR_0;
    WCHAR *VAR_7 = VAR_2[VAR_6];
    DWORD VAR_8;

    if(!VAR_3->frame)
        return;

    if(!VAR_7) {
        VAR_8 = 255;
        VAR_7 = FUNC_3(VAR_8 * sizeof(WCHAR));
        VAR_8 = FUNC_2(VAR_1, VAR_4, VAR_7, VAR_8) + 1;
        VAR_7 = FUNC_5(VAR_7, VAR_8 * sizeof(WCHAR));
        if(FUNC_1((void**)&VAR_2[VAR_6], VAR_7, ((void*)0))) {
            FUNC_4(VAR_7);
            VAR_7 = VAR_2[VAR_6];
        }
    }

    if(VAR_5) {
        WCHAR *VAR_9;

        VAR_8 = FUNC_6(VAR_7) + FUNC_6(VAR_5) - 1;
        VAR_9 = FUNC_3(VAR_8 * sizeof(WCHAR));

        FUNC_7(VAR_9, VAR_8, VAR_7, VAR_5);

        VAR_7 = VAR_9;
    }

    FUNC_0(VAR_3->frame, VAR_7);

    if(VAR_5)
        FUNC_4(VAR_7);
}
