
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {unsigned int wMapLen; int lpszPath; TYPE_1__* Map; } ;
struct TYPE_5__ {scalar_t__ lMap; int offset; } ;
typedef scalar_t__ LONG ;
typedef int HLPFILE_PAGE ;
typedef TYPE_2__ HLPFILE ;


 int * FUNC_0 (TYPE_2__*,int ,int *) ;
 int FUNC_1 (char*,scalar_t__,int ) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 int FUNC_3 (int ) ;

HLPFILE_PAGE *FUNC_4(HLPFILE* VAR_0, LONG VAR_1, ULONG* VAR_2)
{
    unsigned int VAR_3;

    if (!VAR_0) return 0;

    FUNC_2("<%s>[%x]\n", FUNC_3(VAR_0->lpszPath), VAR_1);

    for (VAR_3 = 0; VAR_3 < VAR_0->wMapLen; VAR_3++)
    {
        if (VAR_0->Map[VAR_3].lMap == VAR_1)
            return FUNC_0(VAR_0, VAR_0->Map[VAR_3].offset, VAR_2);
    }

    FUNC_1("Page of Map %x not found in file %s\n", VAR_1, FUNC_3(VAR_0->lpszPath));
    return ((void*)0);
}
