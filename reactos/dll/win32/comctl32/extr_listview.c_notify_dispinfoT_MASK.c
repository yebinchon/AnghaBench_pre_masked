
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_11__ {int mask; int cchTextMax; scalar_t__* pszText; } ;
struct TYPE_10__ {scalar_t__ code; } ;
struct TYPE_9__ {scalar_t__ notifyFormat; } ;
struct TYPE_8__ {TYPE_7__ item; TYPE_4__ hdr; } ;
typedef scalar_t__* LPWSTR ;
typedef char* LPSTR ;
typedef TYPE_1__* LPNMLVDISPINFOW ;
typedef char* LPCSTR ;
typedef TYPE_2__ LISTVIEW_INFO ;
typedef int INT ;
typedef int CHAR ;
typedef int BOOL ;


 scalar_t__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ,char*,int,scalar_t__*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (int ,int ,scalar_t__*,int,char*,int,int *,int *) ;
 scalar_t__ FUNC_5 (TYPE_7__*,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__*) ;
 int FUNC_8 (scalar_t__*,scalar_t__*) ;
 int FUNC_9 (TYPE_2__ const*,scalar_t__,TYPE_4__*) ;
 int FUNC_10 (char*,char*) ;

__attribute__((used)) static BOOL FUNC_11(const LISTVIEW_INFO *VAR_7, UINT VAR_8, LPNMLVDISPINFOW VAR_9, BOOL VAR_10)
{
    INT VAR_11 = 0, VAR_12;
    LPWSTR VAR_13 = ((void*)0), VAR_14;
    BOOL VAR_15 = VAR_1;
    BOOL VAR_16 = VAR_1;
    BOOL VAR_17;

    if ((VAR_9->item.mask & VAR_2) && FUNC_7(VAR_9->item.pszText))
    {
 VAR_16 = ( VAR_10 && VAR_7->notifyFormat == VAR_5);
 VAR_15 = (!VAR_10 && VAR_7->notifyFormat == VAR_6);
    }

    VAR_12 = VAR_9->item.cchTextMax;
    VAR_14 = VAR_9->item.pszText;

    if (VAR_16 || VAR_15)
    {
        if (VAR_8 != VAR_4)
        {
            VAR_11 = VAR_15 ?
         FUNC_2(VAR_0, 0, (LPCSTR)VAR_9->item.pszText, -1, ((void*)0), 0):
         FUNC_4(VAR_0, 0, VAR_9->item.pszText, -1, ((void*)0), 0, ((void*)0), ((void*)0));
        }
        else
        {
            VAR_11 = VAR_9->item.cchTextMax;
            *VAR_9->item.pszText = 0;
        }

        VAR_13 = FUNC_0( (VAR_15 ? sizeof(WCHAR) : sizeof(CHAR)) * VAR_11);
        if (!VAR_13) return VAR_1;

        if (VAR_15)
            FUNC_2(VAR_0, 0, (LPCSTR)VAR_9->item.pszText, -1,
                         VAR_13, VAR_11);
        else
            FUNC_4(VAR_0, 0, VAR_9->item.pszText, -1, (LPSTR) VAR_13,
                         VAR_11, ((void*)0), ((void*)0));

        VAR_9->item.pszText = VAR_13;
        VAR_9->item.cchTextMax = VAR_11;
    }

    if (VAR_7->notifyFormat == VAR_5)
        VAR_8 = FUNC_6(VAR_8);

    FUNC_3(" pdi->item=%s\n", FUNC_5(&VAR_9->item, VAR_7->notifyFormat != VAR_5));
    VAR_17 = FUNC_9(VAR_7, VAR_8, &VAR_9->hdr);
    FUNC_3(" resulting code=%d\n", VAR_9->hdr.code);

    if (VAR_15 || VAR_16)
    {
        if (VAR_15 && (VAR_9->hdr.code == VAR_3))
        {
            FUNC_10((char*)VAR_14, (char*)VAR_9->item.pszText);
        }
        else if (VAR_16 && (VAR_9->hdr.code == VAR_4))
        {
            FUNC_8(VAR_14, VAR_9->item.pszText);
        }
        else if (VAR_15)
        {
     FUNC_4(VAR_0, 0, VAR_9->item.pszText, -1, (LPSTR) VAR_14,
                VAR_12, ((void*)0), ((void*)0));
        }
        else
            FUNC_2(VAR_0, 0, (LPSTR) VAR_9->item.pszText, -1,
                VAR_14, VAR_12);

        VAR_9->item.pszText = VAR_14;
        VAR_9->item.cchTextMax = VAR_12;

        FUNC_1(VAR_13);
        return VAR_17;
    }


    if (!VAR_10 && (VAR_9->hdr.code == VAR_4) && (VAR_9->item.mask & VAR_2))
    {
        VAR_11 = FUNC_4(VAR_0, 0, VAR_9->item.pszText, -1, ((void*)0), 0, ((void*)0), ((void*)0));

        VAR_13 = FUNC_0(VAR_11 * sizeof(CHAR));
        if (!VAR_13) return VAR_1;

        FUNC_4(VAR_0, 0, VAR_9->item.pszText, -1, (LPSTR) VAR_13,
                VAR_12, ((void*)0), ((void*)0));

        FUNC_10((LPSTR)VAR_9->item.pszText, (LPSTR)VAR_13);
        FUNC_1(VAR_13);
    }

    return VAR_17;
}
