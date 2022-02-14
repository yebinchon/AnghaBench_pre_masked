
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ WPARAM ;
struct TYPE_7__ {int bRedraw; int root; } ;
typedef TYPE_1__ TREEVIEW_INFO ;
typedef int LRESULT ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static LRESULT
FUNC_4(TREEVIEW_INFO* VAR_0, WPARAM VAR_1)
{
    VAR_0->bRedraw = VAR_1 != 0;

    if (VAR_0->bRedraw)
    {
        FUNC_3(VAR_0, VAR_0->root);
        FUNC_1(VAR_0, ((void*)0));
        FUNC_2(VAR_0);
        FUNC_0(VAR_0, ((void*)0));
    }
    return 0;
}
