
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* items; int hwndSelf; int bRectsValid; } ;
struct TYPE_5__ {int rect; } ;
typedef size_t INT ;
typedef TYPE_2__ HEADER_INFO ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static void
FUNC_2 (HEADER_INFO *VAR_1, INT VAR_2)
{
    if (!VAR_1->bRectsValid)
        FUNC_0(VAR_1);

    FUNC_1(VAR_1->hwndSelf, &VAR_1->items[VAR_2].rect, VAR_0);
}
