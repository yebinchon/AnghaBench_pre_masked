
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {int idFrom; int code; int hwndFrom; } ;
struct TYPE_5__ {int hwndNotify; scalar_t__ bUnicode; int hwndSelf; } ;
typedef TYPE_1__ TOOLBAR_INFO ;
typedef TYPE_2__ NMHDR ;
typedef int LPARAM ;
typedef int INT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (char*,int ,int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static INT
FUNC_4 (NMHDR *VAR_1, const TOOLBAR_INFO *VAR_2, UINT VAR_3)
{
 if(!FUNC_1(VAR_2->hwndSelf))
     return 0;

    VAR_1->idFrom = FUNC_0 (VAR_2->hwndSelf);
    VAR_1->hwndFrom = VAR_2->hwndSelf;
    VAR_1->code = VAR_3;

    FUNC_3("to window %p, code=%08x, %s\n", VAR_2->hwndNotify, VAR_3,
   (VAR_2->bUnicode) ? "via Unicode" : "via ANSI");

    return FUNC_2(VAR_2->hwndNotify, VAR_0, VAR_1->idFrom, (LPARAM)VAR_1);
}
