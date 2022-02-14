
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char WPARAM ;
typedef int WCHAR ;
struct TYPE_13__ {int flags; char* psz; } ;
struct TYPE_12__ {scalar_t__ nItemCount; scalar_t__ lastKeyPressTimestamp; int nSearchParamLength; char* szSearchParam; char charCode; int nFocusedItem; int dwStyle; } ;
struct TYPE_11__ {int iItem; int cchTextMax; int * pszText; scalar_t__ iSubItem; int mask; } ;
struct TYPE_10__ {int iStart; int hdr; TYPE_5__ lvfi; } ;
typedef TYPE_1__ NMLVFINDITEMW ;
typedef TYPE_2__ LVITEMW ;
typedef int LPNMHDR ;
typedef int LPARAM ;
typedef TYPE_3__ LISTVIEW_INFO ;
typedef scalar_t__ INT ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static INT FUNC_7(LISTVIEW_INFO *VAR_8, WPARAM VAR_9, LPARAM VAR_10)
{
    WCHAR VAR_11[VAR_7];
    DWORD VAR_12;
    LVITEMW VAR_13;
    int VAR_14;
    INT VAR_15;
    INT VAR_16;


    if (!VAR_9 || !VAR_10 || VAR_8->nItemCount == 0) return 0;


    if (!FUNC_3(VAR_9) &&
        VAR_9 != '.' && VAR_9 != '`' && VAR_9 != '!' &&
        VAR_9 != '@' && VAR_9 != '#' && VAR_9 != '$' &&
        VAR_9 != '%' && VAR_9 != '^' && VAR_9 != '&' &&
        VAR_9 != '*' && VAR_9 != '(' && VAR_9 != ')' &&
        VAR_9 != '-' && VAR_9 != '_' && VAR_9 != '+' &&
        VAR_9 != '=' && VAR_9 != '\\'&& VAR_9 != ']' &&
        VAR_9 != '}' && VAR_9 != '[' && VAR_9 != '{' &&
        VAR_9 != '/' && VAR_9 != '?' && VAR_9 != '>' &&
        VAR_9 != '<' && VAR_9 != ',' && VAR_9 != '~')
        return 0;


    VAR_12 = VAR_8->lastKeyPressTimestamp;
    VAR_8->lastKeyPressTimestamp = FUNC_0();
    VAR_16 = VAR_8->lastKeyPressTimestamp - VAR_12;

    if (VAR_16 >= 0 && VAR_16 < VAR_1)
    {
        if (VAR_8->nSearchParamLength < VAR_7 - 1)
            VAR_8->szSearchParam[VAR_8->nSearchParamLength++] = VAR_9;

        if (VAR_8->charCode != VAR_9)
            VAR_8->charCode = VAR_9 = 0;
    }
    else
    {
        VAR_8->charCode = VAR_9;
        VAR_8->szSearchParam[0] = VAR_9;
        VAR_8->nSearchParamLength = 1;
    }




    if (VAR_8->nFocusedItem >= 0 && VAR_8->nItemCount > 1)
    {


        VAR_14 = VAR_8->nSearchParamLength > 1 ? VAR_8->nFocusedItem : VAR_8->nFocusedItem + 1;
        if (VAR_14 == VAR_8->nItemCount) VAR_14 = 0;
    }
    else
        VAR_14 = 0;


    if (VAR_8->dwStyle & VAR_6)
    {
        NMLVFINDITEMW VAR_17;

        FUNC_5(&VAR_17.lvfi, 0, sizeof(VAR_17.lvfi));
        VAR_17.lvfi.flags = (VAR_3 | VAR_2);
        VAR_17.lvfi.psz = VAR_8->szSearchParam;
        VAR_17.iStart = VAR_14;

        VAR_8->szSearchParam[VAR_8->nSearchParamLength] = 0;

        VAR_15 = FUNC_6(VAR_8, VAR_5, (LPNMHDR)&VAR_17.hdr);
    }
    else
    {
        int VAR_18 = VAR_14, VAR_19;


        VAR_15 = -1;
        VAR_19 = VAR_8->nItemCount;


        while (1)
        {

            if (VAR_18 == VAR_8->nItemCount && VAR_14 > 0)
            {
                VAR_19 = VAR_14;
                VAR_14 = 0;
            }

            for (VAR_18 = VAR_14; VAR_18 < VAR_19; VAR_18++)
            {

                VAR_13.mask = VAR_4;
                VAR_13.iItem = VAR_18;
                VAR_13.iSubItem = 0;
                VAR_13.pszText = VAR_11;
                VAR_13.cchTextMax = VAR_7;
                if (!FUNC_1(VAR_8, &VAR_13)) return 0;

                if (!FUNC_4(VAR_13.pszText, VAR_8->szSearchParam, VAR_8->nSearchParamLength))
                {
                    VAR_15 = VAR_18;
                    break;
                }



                else if (VAR_15 == -1 && VAR_8->nSearchParamLength == 1 && !FUNC_4(VAR_13.pszText, VAR_8->szSearchParam, 1))
                {

                    VAR_15 = VAR_18;
                }
            }

            if ( VAR_15 != -1 ||
                 VAR_19 != VAR_8->nItemCount ||
                (VAR_14 == 0 && VAR_19 == VAR_8->nItemCount) )
                break;
        };
    }

    if (VAR_15 != -1)
        FUNC_2(VAR_8, VAR_15, VAR_0);

    return 0;
}
