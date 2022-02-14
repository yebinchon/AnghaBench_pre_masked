
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int fsState; int fsStyle; int rect; } ;
struct TYPE_4__ {int nNumButtons; TYPE_2__* buttons; } ;
typedef TYPE_1__ TOOLBAR_INFO ;
typedef TYPE_2__ TBUTTON_INFO ;
typedef int POINT ;
typedef int INT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int const) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int VAR_4 ;

__attribute__((used)) static INT
FUNC_2 (const TOOLBAR_INFO *VAR_5, const POINT *VAR_6, BOOL *VAR_7)
{
    TBUTTON_INFO *VAR_8;
    INT VAR_9;

    if (VAR_7)
        *VAR_7 = VAR_1;

    VAR_8 = VAR_5->buttons;
    for (VAR_9 = 0; VAR_9 < VAR_5->nNumButtons; VAR_9++, VAR_8++) {
 if (VAR_8->fsState & VAR_2)
     continue;

 if (VAR_8->fsStyle & VAR_0) {
     if (FUNC_0 (&VAR_8->rect, *VAR_6)) {
  FUNC_1(" ON SEPARATOR %d\n", VAR_9);
  return -VAR_9;
     }
 }
 else {
     if (FUNC_0 (&VAR_8->rect, *VAR_6)) {
  FUNC_1(" ON BUTTON %d\n", VAR_9);
                if (VAR_7)
                    *VAR_7 = VAR_4;
  return VAR_9;
     }
 }
    }

    FUNC_1(" NOWHERE\n");
    return VAR_3;
}
