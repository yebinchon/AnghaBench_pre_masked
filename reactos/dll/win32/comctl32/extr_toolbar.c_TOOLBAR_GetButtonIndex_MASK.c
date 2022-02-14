
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ idCommand; } ;
struct TYPE_4__ {scalar_t__ nNumButtons; TYPE_2__* buttons; } ;
typedef TYPE_1__ TOOLBAR_INFO ;
typedef TYPE_2__ TBUTTON_INFO ;
typedef scalar_t__ INT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,scalar_t__,...) ;

__attribute__((used)) static INT
FUNC_1 (const TOOLBAR_INFO *VAR_0, INT VAR_1, BOOL VAR_2)
{
    TBUTTON_INFO *VAR_3;
    INT VAR_4;

    if (VAR_2) {
 FUNC_0("command is really index command=%d\n", VAR_1);
 if (VAR_1 >= VAR_0->nNumButtons) return -1;
 return VAR_1;
    }
    VAR_3 = VAR_0->buttons;
    for (VAR_4 = 0; VAR_4 < VAR_0->nNumButtons; VAR_4++, VAR_3++) {
 if (VAR_3->idCommand == VAR_1) {
     FUNC_0("command=%d index=%d\n", VAR_1, VAR_4);
     return VAR_4;
 }
    }
    FUNC_0("no index found for command=%d\n", VAR_1);
    return -1;
}
