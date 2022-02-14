
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iHotItem; int hwndSelf; } ;
typedef int LRESULT ;
typedef int INT ;
typedef TYPE_1__ HEADER_INFO ;
typedef int HDC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static LRESULT
FUNC_3 (HEADER_INFO *VAR_0)
{

    INT VAR_1 = VAR_0->iHotItem;
    HDC VAR_2 = FUNC_0 (VAR_0->hwndSelf);

    VAR_0->iHotItem = -1;
    if (VAR_1 != -1) FUNC_1 (VAR_0, VAR_1);
    FUNC_2 (VAR_0->hwndSelf, VAR_2);

    return 0;
}
