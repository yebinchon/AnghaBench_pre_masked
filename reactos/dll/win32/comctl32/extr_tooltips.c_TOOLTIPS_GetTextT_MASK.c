
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_11__ {TYPE_1__* tools; } ;
struct TYPE_10__ {scalar_t__ cbSize; char* lpszText; } ;
struct TYPE_9__ {int * lpszText; } ;
typedef TYPE_2__ TTTOOLINFOW ;
typedef TYPE_3__ TOOLTIPS_INFO ;
typedef int LRESULT ;
typedef int LPSTR ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__ const*,int,char*) ;
 int FUNC_1 (TYPE_3__ const*,TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ,char*,int,int ,int ,int *,int *) ;

__attribute__((used)) static LRESULT
FUNC_3 (const TOOLTIPS_INFO *VAR_4, TTTOOLINFOW *VAR_5, BOOL VAR_6)
{
    INT VAR_7;

    if (!VAR_5) return 0;
    if (VAR_5->cbSize < VAR_3)
 return 0;

    VAR_7 = FUNC_1 (VAR_4, VAR_5);
    if (VAR_7 == -1) return 0;

    if (VAR_4->tools[VAR_7].lpszText == ((void*)0))
 return 0;

    if (VAR_6) {
        VAR_5->lpszText[0] = '\0';
        FUNC_0(VAR_4, VAR_7, VAR_5->lpszText);
    }
    else {
        WCHAR VAR_8[VAR_1];






        VAR_8[0] = '\0';
        FUNC_0(VAR_4, VAR_7, VAR_8);
        FUNC_2(VAR_0, 0, VAR_8, -1, (LPSTR)VAR_5->lpszText,
                                                   VAR_2, ((void*)0), ((void*)0));
    }

    return 0;
}
