
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT_PTR ;
typedef int UINT ;
struct TYPE_6__ {void* dwClientInstance; void* dwCallback; int dwFlags; int type; } ;
typedef TYPE_1__* LPWINE_MLD ;
typedef scalar_t__* LPHANDLE ;
typedef scalar_t__ HANDLE ;
typedef void* DWORD_PTR ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 size_t VAR_1 ;
 size_t FUNC_5 (int ) ;
 TYPE_1__** VAR_2 ;
 int FUNC_6 (char*,int ,int ,scalar_t__*,int *,void**,void**) ;

LPWINE_MLD FUNC_7(UINT VAR_3, UINT VAR_4, LPHANDLE VAR_5, DWORD* VAR_6,
       DWORD_PTR* VAR_7, DWORD_PTR* VAR_8)
{
    LPWINE_MLD VAR_9;
    UINT_PTR VAR_10;
    FUNC_6("(%d, %04x, %p, %p, %p, %p)\n",
          VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

    VAR_9 = FUNC_3(FUNC_1(), VAR_0, VAR_3);
    if (!VAR_9) return ((void*)0);


    for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) if (!VAR_2[VAR_10]) break;

    if (VAR_10 == VAR_1) {

 FUNC_0("Too many open drivers\n");
        FUNC_4(FUNC_1(), 0, VAR_9);
 return ((void*)0);
    }
    VAR_2[VAR_10] = VAR_9;
    *VAR_5 = (HANDLE)(VAR_10 | 0x8000);

    VAR_9->type = VAR_4;
    if ((UINT_PTR)*VAR_5 < FUNC_5(VAR_4) || ((UINT_PTR)*VAR_5 >> 16)) {




 FUNC_0("Shouldn't happen. Bad allocation scheme\n");
    }

    VAR_9->dwFlags = FUNC_2(*VAR_6);
    VAR_9->dwCallback = *VAR_7;
    VAR_9->dwClientInstance = *VAR_8;

    return VAR_9;
}
