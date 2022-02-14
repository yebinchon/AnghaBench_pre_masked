
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int szFile; } ;
struct TYPE_12__ {int next; int merge; scalar_t__ nItems; } ;
struct TYPE_9__ {int pszIndex; } ;
struct TYPE_11__ {TYPE_5__* index; TYPE_2__* tabs; TYPE_8__* pCHMInfo; TYPE_1__ WinType; } ;
struct TYPE_10__ {int hwnd; } ;
typedef int IndexItem ;
typedef int IStream ;
typedef TYPE_3__ HHInfo ;


 int * FUNC_0 (TYPE_8__*,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 size_t VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;
 TYPE_5__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*,int *,TYPE_5__*) ;

void FUNC_7(HHInfo *VAR_1)
{
    IStream *VAR_2;

    VAR_1->index = FUNC_5(sizeof(IndexItem));
    VAR_1->index->nItems = 0;
    FUNC_2(&VAR_1->index->merge, VAR_1->pCHMInfo->szFile, VAR_1->WinType.pszIndex);

    VAR_2 = FUNC_0(VAR_1->pCHMInfo, VAR_1->pCHMInfo->szFile, &VAR_1->index->merge);
    if(!VAR_2) {
        FUNC_3("Could not get index stream\n");
        return;
    }

    FUNC_6(VAR_1, VAR_2, VAR_1->index);
    FUNC_1(VAR_2);

    FUNC_4(VAR_1->tabs[VAR_0].hwnd, VAR_1->index->next);
}
