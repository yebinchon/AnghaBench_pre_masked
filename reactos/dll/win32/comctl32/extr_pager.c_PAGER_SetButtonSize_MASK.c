
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nButtonSize; int hwndSelf; } ;
typedef TYPE_1__ PAGER_INFO ;
typedef int INT ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static INT
FUNC_2 (PAGER_INFO* VAR_0, INT VAR_1)
{
    INT VAR_2 = VAR_0->nButtonSize;

    VAR_0->nButtonSize = VAR_1;
    FUNC_1("[%p] %d\n", VAR_0->hwndSelf, VAR_0->nButtonSize);

    FUNC_0(VAR_0);

    return VAR_2;
}
