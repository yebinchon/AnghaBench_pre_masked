
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int hwndSelf; int hFont; int nHeight; } ;
struct TYPE_5__ {int tmHeight; } ;
typedef TYPE_1__ TEXTMETRICW ;
typedef int LRESULT ;
typedef TYPE_2__ HOTKEY_INFO ;
typedef int HFONT ;
typedef int HDC ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static LRESULT
FUNC_5 (HOTKEY_INFO *VAR_1, HFONT VAR_2, BOOL VAR_3)
{
    TEXTMETRICW VAR_4;
    HDC VAR_5;
    HFONT VAR_6 = 0;

    VAR_1->hFont = VAR_2;

    VAR_5 = FUNC_0 (VAR_1->hwndSelf);
    if (VAR_1->hFont)
 VAR_6 = FUNC_4 (VAR_5, VAR_1->hFont);

    FUNC_1 (VAR_5, &VAR_4);
    VAR_1->nHeight = VAR_4.tmHeight;

    if (VAR_1->hFont)
 FUNC_4 (VAR_5, VAR_6);
    FUNC_3 (VAR_1->hwndSelf, VAR_5);

    if (VAR_3)
 FUNC_2 (VAR_1->hwndSelf, ((void*)0), VAR_0);

    return 0;
}
