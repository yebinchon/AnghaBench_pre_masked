
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_7__ {int idFrom; int code; int hwndFrom; } ;
struct TYPE_6__ {scalar_t__ bUnicode; int hwndSelf; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef TYPE_2__ NMHDR ;
typedef int LPARAM ;
typedef int INT ;
typedef int HWND ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (char*,int ,int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static INT
FUNC_4 (NMHDR *VAR_1, const REBAR_INFO *VAR_2, UINT VAR_3)
{
    HWND VAR_4;

    VAR_4 = FUNC_1 (VAR_2);
    VAR_1->idFrom = FUNC_0 (VAR_2->hwndSelf);
    VAR_1->hwndFrom = VAR_2->hwndSelf;
    VAR_1->code = VAR_3;

    FUNC_3("window %p, code=%08x, via %s\n", VAR_4, VAR_3, (VAR_2->bUnicode)?"Unicode":"ANSI");

    return FUNC_2(VAR_4, VAR_0, VAR_1->idFrom, (LPARAM)VAR_1);
}
