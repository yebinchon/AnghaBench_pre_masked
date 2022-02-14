
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cbSize; int hwndList; int hwndItem; int hwndCombo; int stateButton; int rcButton; int rcItem; } ;
struct TYPE_5__ {int wState; int hWndLBox; int hWndEdit; int self; int buttonRect; int textRect; } ;
typedef int LRESULT ;
typedef TYPE_1__ HEADCOMBO ;
typedef TYPE_2__ COMBOBOXINFO ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static LRESULT FUNC_1(const HEADCOMBO *VAR_5, COMBOBOXINFO *VAR_6)
{
    if (!VAR_6 || (VAR_6->cbSize < sizeof(COMBOBOXINFO)))
        return VAR_1;

    VAR_6->rcItem = VAR_5->textRect;
    VAR_6->rcButton = VAR_5->buttonRect;
    VAR_6->stateButton = 0;
    if (VAR_5->wState & VAR_0)
        VAR_6->stateButton |= VAR_3;
    if (FUNC_0(&VAR_5->buttonRect))
        VAR_6->stateButton |= VAR_2;
    VAR_6->hwndCombo = VAR_5->self;
    VAR_6->hwndItem = VAR_5->hWndEdit;
    VAR_6->hwndList = VAR_5->hWndLBox;
    return VAR_4;
}
