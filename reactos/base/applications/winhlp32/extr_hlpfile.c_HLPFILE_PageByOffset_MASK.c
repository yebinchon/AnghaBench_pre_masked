
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {int lpszPath; TYPE_1__* first_page; } ;
struct TYPE_5__ {int offset; struct TYPE_5__* next; } ;
typedef int LONG ;
typedef TYPE_1__ HLPFILE_PAGE ;
typedef TYPE_2__ HLPFILE ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ) ;

HLPFILE_PAGE *FUNC_3(HLPFILE* VAR_0, LONG VAR_1, ULONG* VAR_2)
{
    HLPFILE_PAGE* VAR_3;
    HLPFILE_PAGE* VAR_4;

    if (!VAR_0) return 0;

    FUNC_1("<%s>[%x]\n", FUNC_2(VAR_0->lpszPath), VAR_1);

    if (VAR_1 == 0xFFFFFFFF) return ((void*)0);
    VAR_3 = ((void*)0);

    for (VAR_4 = ((void*)0), VAR_3 = VAR_0->first_page; VAR_3; VAR_3 = VAR_3->next)
    {
        if (VAR_3->offset <= VAR_1 && (!VAR_4 || VAR_4->offset < VAR_3->offset))
        {
            *VAR_2 = VAR_1 - VAR_3->offset;
            VAR_4 = VAR_3;
        }
    }
    if (!VAR_4)
        FUNC_0("Page of offset %u not found in file %s\n",
                 VAR_1, FUNC_2(VAR_0->lpszPath));
    return VAR_4;
}
