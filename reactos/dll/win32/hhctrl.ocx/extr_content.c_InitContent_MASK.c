
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int insert_type_t ;
struct TYPE_15__ {int child; int merge; } ;
struct TYPE_12__ {int pszToc; } ;
struct TYPE_14__ {TYPE_4__* content; TYPE_2__* tabs; TYPE_10__* pCHMInfo; TYPE_1__ WinType; } ;
struct TYPE_13__ {int hwnd; } ;
struct TYPE_11__ {int szFile; } ;
typedef int IStream ;
typedef TYPE_3__ HHInfo ;
typedef int ContentItem ;


 int * FUNC_0 (TYPE_10__*,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 size_t VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *,TYPE_4__*) ;
 TYPE_4__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*,int *,TYPE_4__*,int *) ;
 int FUNC_7 (int *,TYPE_4__*) ;

void FUNC_8(HHInfo *VAR_1)
{
    IStream *VAR_2;
    insert_type_t VAR_3;

    VAR_1->content = FUNC_5(sizeof(ContentItem));
    FUNC_2(&VAR_1->content->merge, VAR_1->pCHMInfo->szFile, VAR_1->WinType.pszToc);

    VAR_2 = FUNC_0(VAR_1->pCHMInfo, VAR_1->pCHMInfo->szFile, &VAR_1->content->merge);
    if(!VAR_2) {
        FUNC_3("Could not get content stream\n");
        return;
    }

    VAR_1->content->child = FUNC_6(VAR_1, VAR_2, VAR_1->content, &VAR_3);
    FUNC_1(VAR_2);

    FUNC_7(((void*)0), VAR_1->content);
    FUNC_4(VAR_1->tabs[VAR_0].hwnd, ((void*)0), VAR_1->content);
}
