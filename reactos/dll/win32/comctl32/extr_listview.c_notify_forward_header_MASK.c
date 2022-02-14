
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int * pszText; } ;
struct TYPE_10__ {scalar_t__ notifyFormat; int hwndNotify; } ;
struct TYPE_7__ {int idFrom; int code; } ;
struct TYPE_9__ {TYPE_2__* pitem; TYPE_1__ hdr; } ;
struct TYPE_8__ {int mask; scalar_t__ type; scalar_t__ pvFilter; int * pszText; } ;
typedef int NMHEADERW ;
typedef TYPE_3__ NMHEADERA ;
typedef int LRESULT ;
typedef void* LPSTR ;
typedef int * LPCWSTR ;
typedef int LPARAM ;
typedef TYPE_4__ LISTVIEW_INFO ;
typedef TYPE_5__ HD_TEXTFILTERA ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int **,int *) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static LRESULT FUNC_4(const LISTVIEW_INFO *VAR_5, NMHEADERW *VAR_6)
{
    LPCWSTR VAR_7 = ((void*)0), VAR_8 = ((void*)0);
    LRESULT VAR_9;
    NMHEADERA *VAR_10 = (NMHEADERA*) VAR_6;


    if (VAR_5->notifyFormat == VAR_3)
        return FUNC_1(VAR_5->hwndNotify, VAR_4, VAR_10->hdr.idFrom,
                            (LPARAM)VAR_10);



    if (VAR_10->pitem)
    {

        if (VAR_10->pitem->mask & VAR_2)
        {
            VAR_7 = (LPCWSTR)VAR_10->pitem->pszText;
            VAR_10->pitem->pszText = ((void*)0);
            FUNC_2(&VAR_10->pitem->pszText, VAR_7);
        }

        if ((VAR_10->pitem->mask & VAR_1) && (VAR_10->pitem->type == VAR_0) &&
             VAR_10->pitem->pvFilter)
        {
            VAR_8 = (LPCWSTR)((HD_TEXTFILTERA*)VAR_10->pitem->pvFilter)->pszText;
            ((HD_TEXTFILTERA*)VAR_10->pitem->pvFilter)->pszText = ((void*)0);
            FUNC_2(&((HD_TEXTFILTERA*)VAR_10->pitem->pvFilter)->pszText, VAR_8);
        }
    }
    VAR_10->hdr.code = FUNC_3(VAR_10->hdr.code);

    VAR_9 = FUNC_1(VAR_5->hwndNotify, VAR_4, VAR_10->hdr.idFrom,
                       (LPARAM)VAR_10);


    if(VAR_7)
    {
        FUNC_0(VAR_10->pitem->pszText);
        VAR_10->pitem->pszText = (LPSTR)VAR_7;
    }
    if(VAR_8)
    {
        FUNC_0(((HD_TEXTFILTERA*)VAR_10->pitem->pvFilter)->pszText);
        ((HD_TEXTFILTERA*)VAR_10->pitem->pvFilter)->pszText = (LPSTR)VAR_8;
    }

    return VAR_9;
}
