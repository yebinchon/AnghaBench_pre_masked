
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_5__ {int version; size_t wTOMapLen; int lpszPath; int Context; int * TOMap; } ;
typedef size_t LONG ;
typedef int HLPFILE_PAGE ;
typedef TYPE_1__ HLPFILE ;
typedef int BYTE ;


 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int ,int ,int ) ;
 int * FUNC_2 (TYPE_1__*,int *) ;
 int * FUNC_3 (TYPE_1__*,int ,int *) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (char*,size_t,int ) ;
 int FUNC_6 (char*,int ,size_t) ;
 int VAR_0 ;
 int FUNC_7 (int ) ;

HLPFILE_PAGE *FUNC_8(HLPFILE* VAR_1, LONG VAR_2, ULONG* VAR_3)
{
    BYTE *VAR_4;

    if (!VAR_1) return ((void*)0);
    if (!VAR_2) return FUNC_2(VAR_1, VAR_3);

    FUNC_6("<%s>[%x]\n", FUNC_7(VAR_1->lpszPath), VAR_2);


    if (VAR_1->version <= 16)
    {
        if (VAR_2 >= VAR_1->wTOMapLen) return ((void*)0);
        return FUNC_3(VAR_1, VAR_1->TOMap[VAR_2], VAR_3);
    }

    VAR_4 = FUNC_1(VAR_1->Context, FUNC_4(VAR_2), VAR_0);
    if (!VAR_4)
    {
        FUNC_5("Page of hash %x not found in file %s\n", VAR_2, FUNC_7(VAR_1->lpszPath));
        return ((void*)0);
    }

    return FUNC_3(VAR_1, FUNC_0(VAR_4, 4), VAR_3);
}
