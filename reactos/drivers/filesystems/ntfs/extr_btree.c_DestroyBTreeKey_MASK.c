
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {scalar_t__ LesserChild; struct TYPE_4__* IndexEntry; } ;
typedef TYPE_1__* PB_TREE_KEY ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_0 ;

VOID
FUNC_2(PB_TREE_KEY VAR_1)
{
    if (VAR_1->IndexEntry)
        FUNC_1(VAR_1->IndexEntry, VAR_0);

    if (VAR_1->LesserChild)
        FUNC_0(VAR_1->LesserChild);

    FUNC_1(VAR_1, VAR_0);
}
