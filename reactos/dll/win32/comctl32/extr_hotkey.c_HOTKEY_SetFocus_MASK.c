
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hwndSelf; int CaretPos; int nHeight; int bFocus; } ;
typedef int LRESULT ;
typedef TYPE_1__ HOTKEY_INFO ;


 int FUNC_0 (int ,int *,int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

__attribute__((used)) static LRESULT
FUNC_4 (HOTKEY_INFO *VAR_2)
{
    VAR_2->bFocus = VAR_1;

    FUNC_0 (VAR_2->hwndSelf, ((void*)0), 1, VAR_2->nHeight);
    FUNC_2 (VAR_2->CaretPos, FUNC_1(VAR_0));
    FUNC_3 (VAR_2->hwndSelf);

    return 0;
}
