
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int nItem; } ;
struct TYPE_10__ {int rcList; } ;
typedef TYPE_1__ LISTVIEW_INFO ;
typedef TYPE_2__ ITERATOR ;


 scalar_t__ FUNC_0 (TYPE_1__ const*,int ,int ) ;
 int FUNC_1 (TYPE_1__ const*,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__ const*,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(const LISTVIEW_INFO *VAR_1)
{
    ITERATOR VAR_2;

    FUNC_3(&VAR_2, VAR_1, &VAR_1->rcList);
    while(FUNC_4(&VAR_2))
    {
 if (FUNC_0(VAR_1, VAR_2.nItem, VAR_0))
     FUNC_1(VAR_1, VAR_2.nItem);
    }
    FUNC_2(&VAR_2);
}
