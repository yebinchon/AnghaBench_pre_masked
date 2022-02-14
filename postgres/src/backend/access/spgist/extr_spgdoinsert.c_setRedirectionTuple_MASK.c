
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int page; } ;
struct TYPE_4__ {scalar_t__ tupstate; int pointer; } ;
typedef TYPE_1__* SpGistDeadTuple ;
typedef TYPE_2__ SPPageDesc ;
typedef int OffsetNumber ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_5(SPPageDesc *VAR_2, OffsetNumber VAR_3,
     BlockNumber VAR_4, OffsetNumber VAR_5)
{
 SpGistDeadTuple VAR_6;

 VAR_6 = (SpGistDeadTuple) FUNC_3(VAR_2->page,
            FUNC_4(VAR_2->page, VAR_3));
 FUNC_0(VAR_6->tupstate == VAR_1);
 FUNC_0(FUNC_1(&VAR_6->pointer) == VAR_0);
 FUNC_2(&VAR_6->pointer, VAR_4, VAR_5);
}
