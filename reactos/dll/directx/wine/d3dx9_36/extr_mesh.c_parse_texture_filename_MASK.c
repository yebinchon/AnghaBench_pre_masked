
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int filename_in ;
struct TYPE_9__ {TYPE_1__* lpVtbl; } ;
struct TYPE_8__ {int (* Unlock ) (TYPE_2__*) ;int (* Lock ) (TYPE_2__*,int*,void const**) ;} ;
typedef int SIZE_T ;
typedef TYPE_2__ ID3DXFileData ;
typedef int HRESULT ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*,int*,void const**) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static HRESULT FUNC_11(ID3DXFileData *VAR_3, char **VAR_4)
{
    HRESULT VAR_5;
    SIZE_T VAR_6;
    BYTE *VAR_7;
    char *VAR_8;
    char *VAR_9 = ((void*)0);






    FUNC_3(FUNC_1(), 0, *VAR_4);
    *VAR_4 = ((void*)0);

    VAR_5 = VAR_3->lpVtbl->Lock(VAR_3, &VAR_6, (const void**)&VAR_7);
    if (FUNC_0(VAR_5)) return VAR_5;


    if (VAR_6 < sizeof(VAR_8))
    {
        FUNC_4("truncated data (%lu bytes)\n", VAR_6);
        VAR_3->lpVtbl->Unlock(VAR_3);
        return VAR_1;
    }
    VAR_8 = *(char **)VAR_7;

    VAR_9 = FUNC_2(FUNC_1(), 0, FUNC_6(VAR_8) + 1);
    if (!VAR_9) {
        VAR_3->lpVtbl->Unlock(VAR_3);
        return VAR_2;
    }

    FUNC_5(VAR_9, VAR_8);
    *VAR_4 = VAR_9;

    VAR_3->lpVtbl->Unlock(VAR_3);

    return VAR_0;
}
