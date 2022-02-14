
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hwndSelf; scalar_t__ haveFocus; } ;
typedef int LRESULT ;
typedef int HWND ;
typedef TYPE_1__ DATETIME_INFO ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static LRESULT
FUNC_4 (DATETIME_INFO *VAR_2, HWND VAR_3)
{
    FUNC_3("lost focus to %p\n", VAR_3);

    if (VAR_2->haveFocus) {
 FUNC_0 (VAR_2, VAR_0);
 VAR_2->haveFocus = 0;
        FUNC_1 (VAR_2, -1);
    }

    FUNC_2 (VAR_2->hwndSelf, ((void*)0), VAR_1);

    return 0;
}
