
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int fsStyle; int fsState; } ;
struct TYPE_4__ {int nNumButtons; TYPE_2__* buttons; } ;
typedef TYPE_1__ TOOLBAR_INFO ;
typedef TYPE_2__ TBUTTON_INFO ;
typedef int INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static INT
FUNC_0 (const TOOLBAR_INFO *VAR_3, INT VAR_4)
{
    TBUTTON_INFO *VAR_5;
    INT VAR_6;

    if ((VAR_4 < 0) || (VAR_4 > VAR_3->nNumButtons))
 return -1;


    VAR_5 = &VAR_3->buttons[VAR_4];
    if ((VAR_5->fsStyle & VAR_0) == VAR_0) {
 if (VAR_5->fsState & VAR_2)
     return VAR_4;
    }


    VAR_6 = VAR_4 - 1;
    while (VAR_6 >= 0) {
 VAR_5 = &VAR_3->buttons[VAR_6];
 if ((VAR_5->fsStyle & VAR_1) == VAR_1) {
     if (VAR_5->fsState & VAR_2)
  return VAR_6;
 }
 else
     break;
 VAR_6--;
    }


    VAR_6 = VAR_4 + 1;
    while (VAR_6 < VAR_3->nNumButtons) {
 VAR_5 = &VAR_3->buttons[VAR_6];
 if ((VAR_5->fsStyle & VAR_1) == VAR_1) {
     if (VAR_5->fsState & VAR_2)
  return VAR_6;
 }
 else
     break;
 VAR_6++;
    }

    return -1;
}
