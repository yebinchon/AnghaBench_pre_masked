
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {size_t relptr_off; } ;
struct TYPE_10__ {TYPE_3__* freelist; } ;
struct TYPE_9__ {TYPE_3__ next; int npages; TYPE_3__ prev; } ;
typedef size_t Size ;
typedef TYPE_1__ FreePageSpanLeader ;
typedef TYPE_2__ FreePageManager ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (char*,size_t) ;
 char* FUNC_3 (TYPE_2__*) ;
 TYPE_1__* FUNC_4 (char*,TYPE_3__) ;
 int FUNC_5 (TYPE_3__,TYPE_3__) ;

__attribute__((used)) static void
FUNC_6(FreePageManager *VAR_2, Size VAR_3)
{
 char *VAR_4 = FUNC_3(VAR_2);
 FreePageSpanLeader *VAR_5;
 FreePageSpanLeader *VAR_6;
 FreePageSpanLeader *VAR_7;

 VAR_5 = (FreePageSpanLeader *) FUNC_2(VAR_4, VAR_3);

 VAR_6 = FUNC_4(VAR_4, VAR_5->next);
 VAR_7 = FUNC_4(VAR_4, VAR_5->prev);
 if (VAR_6 != ((void*)0))
  FUNC_5(VAR_6->prev, VAR_5->prev);
 if (VAR_7 != ((void*)0))
  FUNC_5(VAR_7->next, VAR_5->next);
 else
 {
  Size VAR_8 = FUNC_1(VAR_5->npages, VAR_0) - 1;

  FUNC_0(VAR_2->freelist[VAR_8].relptr_off == VAR_3 * VAR_1);
  FUNC_5(VAR_2->freelist[VAR_8], VAR_5->next);
 }
}
