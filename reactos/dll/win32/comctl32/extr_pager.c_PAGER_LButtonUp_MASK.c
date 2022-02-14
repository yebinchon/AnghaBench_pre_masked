
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int TLbtnState; int BRbtnState; int hwndSelf; } ;
typedef TYPE_1__ PAGER_INFO ;
typedef int LRESULT ;
typedef int INT ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static LRESULT
FUNC_2 (PAGER_INFO* VAR_5, INT VAR_6, INT VAR_7, INT VAR_8)
{
    FUNC_1("[%p]\n", VAR_5->hwndSelf);

    FUNC_0 (VAR_5->hwndSelf, VAR_3);
    FUNC_0 (VAR_5->hwndSelf, VAR_4);


    if (VAR_5->TLbtnState & (VAR_1 | VAR_0))
        VAR_5->TLbtnState = VAR_2;
    if (VAR_5->BRbtnState & (VAR_1 | VAR_0))
        VAR_5->BRbtnState = VAR_2;

    return 0;
}
