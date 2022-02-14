
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ cy; int flags; scalar_t__ cx; int y; int x; } ;
typedef TYPE_1__ WINDOWPOS ;
struct TYPE_12__ {int hwndCombo; scalar_t__ hwndEdit; int hwndSelf; } ;
struct TYPE_11__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_2__ RECT ;
typedef int LRESULT ;
typedef scalar_t__ INT ;
typedef TYPE_3__ COMBOEX_INFO ;


 int FUNC_0 (TYPE_3__ const*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,int ,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (char*,int ,scalar_t__,...) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static LRESULT FUNC_7 (const COMBOEX_INFO *VAR_3, WINDOWPOS *VAR_4)
{
    RECT VAR_5, VAR_6, VAR_7;
    INT VAR_8, VAR_9;

    FUNC_2 (VAR_3->hwndSelf, &VAR_5);
    FUNC_1 (VAR_3->hwndSelf, &VAR_6);
    FUNC_2 (VAR_3->hwndCombo, &VAR_7);


    VAR_8 = VAR_4->cx
     + (VAR_5.right-VAR_5.left)
            - (VAR_6.right-VAR_6.left);

    FUNC_5("winpos=(%d,%d %dx%d) flags=0x%08x\n",
   VAR_4->x, VAR_4->y, VAR_4->cx, VAR_4->cy, VAR_4->flags);
    FUNC_5("EX window=(%s), client=(%s)\n",
          FUNC_6(&VAR_5), FUNC_6(&VAR_6));
    FUNC_5("CB window=(%s), EX setting=(0,0)-(%d,%d)\n",
          FUNC_6(&VAR_5), VAR_8, VAR_7.bottom-VAR_7.top);

    if (VAR_8) FUNC_4 (VAR_3->hwndCombo, VAR_0, 0, 0,
        VAR_8,
        VAR_7.bottom-VAR_7.top,
        VAR_1);

    FUNC_2 (VAR_3->hwndCombo, &VAR_7);


    VAR_9 = (VAR_7.bottom-VAR_7.top)
      + (VAR_5.bottom-VAR_5.top)
             - (VAR_6.bottom-VAR_6.top);
    VAR_4->cy = VAR_9;
    if (VAR_3->hwndEdit) {
 FUNC_0 (VAR_3);
 FUNC_3 (VAR_3->hwndCombo, 0, VAR_2);
    }

    return 0;
}
