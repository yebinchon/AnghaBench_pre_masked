
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef int lvi ;
typedef int WCHAR ;
struct TYPE_15__ {int * chm_file; } ;
struct TYPE_23__ {struct TYPE_23__* parent; TYPE_1__ merge; int * local; int * name; } ;
struct TYPE_16__ {int hwndPopup; int hwndList; } ;
struct TYPE_22__ {int current_tab; TYPE_13__* pCHMInfo; TYPE_2__ popup; } ;
struct TYPE_17__ {int * chm_file; } ;
struct TYPE_21__ {int nItems; TYPE_3__ merge; TYPE_6__* items; int * keyword; } ;
struct TYPE_20__ {int * local; int * name; } ;
struct TYPE_19__ {int iItem; int mask; int lParam; int * pszText; int cchTextMax; } ;
struct TYPE_18__ {int * filename; } ;
struct TYPE_14__ {int * szFile; } ;
typedef TYPE_4__ SearchItem ;
typedef TYPE_5__ LVITEMW ;
typedef int LRESULT ;
typedef int * LPCWSTR ;
typedef int LPARAM ;
typedef TYPE_6__ IndexSubItem ;
typedef TYPE_7__ IndexItem ;
typedef TYPE_8__ HHInfo ;
typedef TYPE_9__ ContentItem ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (TYPE_13__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_8__*,int *,int *) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;



 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_5__*,int ,int) ;

__attribute__((used)) static LRESULT FUNC_9(HHInfo *VAR_5, void *VAR_6)
{
    LPCWSTR VAR_7 = ((void*)0), VAR_8 = ((void*)0), VAR_9 = ((void*)0);
    ContentItem *VAR_10;
    SearchItem *VAR_11;
    IndexItem *VAR_12;

    if(!VAR_6 || !VAR_5)
        return 0;

    switch (VAR_5->current_tab)
    {
    case 130:
        VAR_10 = (ContentItem *) VAR_6;
        VAR_8 = VAR_10->name;
        VAR_9 = VAR_10->local;
        while(VAR_10) {
            if(VAR_10->merge.chm_file) {
                VAR_7 = VAR_10->merge.chm_file;
                break;
            }
            VAR_10 = VAR_10->parent;
        }
        break;
    case 129:
        VAR_12 = (IndexItem *) VAR_6;
        if(VAR_12->nItems == 0) {
            FUNC_0("No entries for this item!\n");
            return 0;
        }
        if(VAR_12->nItems > 1) {
            int VAR_13 = 0;
            LVITEMW VAR_14;

            FUNC_3(VAR_5->popup.hwndList, VAR_2, 0, 0);
            for(VAR_13=0;VAR_13<VAR_12->nItems;VAR_13++) {
                IndexSubItem *VAR_15 = &VAR_12->items[VAR_13];
                WCHAR *VAR_16 = VAR_12->keyword;

                if(!VAR_15->name)
                    VAR_15->name = FUNC_1(VAR_5->pCHMInfo, VAR_15->local);
                if(VAR_15->name)
                    VAR_16 = VAR_15->name;
                FUNC_8(&VAR_14, 0, sizeof(VAR_14));
                VAR_14.iItem = VAR_13;
                VAR_14.mask = VAR_1|VAR_0;
                VAR_14.cchTextMax = FUNC_7(VAR_16)+1;
                VAR_14.pszText = VAR_16;
                VAR_14.lParam = (LPARAM) VAR_15;
                FUNC_3(VAR_5->popup.hwndList, VAR_3, 0, (LPARAM)&VAR_14);
            }
            FUNC_4(VAR_5->popup.hwndPopup, VAR_4);
            return 0;
        }
        VAR_8 = VAR_12->items[0].name;
        VAR_9 = VAR_12->items[0].local;
        VAR_7 = VAR_12->merge.chm_file;
        break;
    case 128:
        VAR_11 = (SearchItem *) VAR_6;
        VAR_8 = VAR_11->filename;
        VAR_9 = VAR_11->filename;
        VAR_7 = VAR_5->pCHMInfo->szFile;
        break;
    default:
        FUNC_0("Unhandled operation for this tab!\n");
        return 0;
    }

    if(!VAR_7)
    {
        FUNC_0("No help file found for this item!\n");
        return 0;
    }

    FUNC_5("name %s loal %s\n", FUNC_6(VAR_8), FUNC_6(VAR_9));

    FUNC_2(VAR_5, VAR_7, VAR_9);
    return 0;
}
