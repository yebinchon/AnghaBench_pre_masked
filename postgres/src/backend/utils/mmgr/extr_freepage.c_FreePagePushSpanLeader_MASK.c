
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * freelist; } ;
struct TYPE_7__ {size_t npages; int prev; int next; int magic; } ;
typedef size_t Size ;
typedef TYPE_1__ FreePageSpanLeader ;
typedef TYPE_2__ FreePageManager ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t,int ) ;
 scalar_t__ FUNC_1 (char*,size_t) ;
 char* FUNC_2 (TYPE_2__*) ;
 TYPE_1__* FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(FreePageManager *VAR_2, Size VAR_3, Size VAR_4)
{
 char *VAR_5 = FUNC_2(VAR_2);
 Size VAR_6 = FUNC_0(VAR_4, VAR_0) - 1;
 FreePageSpanLeader *VAR_7 = FUNC_3(VAR_5, VAR_2->freelist[VAR_6]);
 FreePageSpanLeader *VAR_8;

 VAR_8 = (FreePageSpanLeader *) FUNC_1(VAR_5, VAR_3);
 VAR_8->magic = VAR_1;
 VAR_8->npages = VAR_4;
 FUNC_4(VAR_5, VAR_8->next, VAR_7);
 FUNC_4(VAR_5, VAR_8->prev, (FreePageSpanLeader *) ((void*)0));
 if (VAR_7 != ((void*)0))
  FUNC_4(VAR_5, VAR_7->prev, VAR_8);
 FUNC_4(VAR_5, VAR_2->freelist[VAR_6], VAR_8);
}
