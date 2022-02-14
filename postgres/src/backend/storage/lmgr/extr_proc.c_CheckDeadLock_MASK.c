
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * next; int * prev; } ;
struct TYPE_8__ {TYPE_1__* waitLock; TYPE_2__ links; } ;
struct TYPE_6__ {int tag; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (TYPE_3__*,int ) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_8(void)
{
 int VAR_6;
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  FUNC_3(FUNC_5(VAR_6), VAR_2);
 if (VAR_3->links.prev == ((void*)0) ||
  VAR_3->links.next == ((void*)0))
  goto check_done;







 VAR_5 = FUNC_1(VAR_3);

 if (VAR_5 == VAR_0)
 {
  FUNC_0(VAR_3->waitLock != ((void*)0));
  FUNC_7(VAR_3, FUNC_6(&(VAR_3->waitLock->tag)));
 }
check_done:
 for (VAR_6 = VAR_4; --VAR_6 >= 0;)
  FUNC_4(FUNC_5(VAR_6));
}
