
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int isRoot; struct TYPE_10__* child; int leftBlkno; } ;
struct TYPE_9__ {int strategy; int index; } ;
typedef TYPE_1__ GinVacuumState ;
typedef TYPE_2__ DataPageDeleteStack ;
typedef int Buffer ;
typedef int BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int,TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7(GinVacuumState *VAR_4, BlockNumber VAR_5)
{
 if (FUNC_4(VAR_4, VAR_5))
 {




  Buffer VAR_6;
  DataPageDeleteStack VAR_7,
       *VAR_8,
       *VAR_9;

  VAR_6 = FUNC_1(VAR_4->index, VAR_2, VAR_5,
         VAR_3, VAR_4->strategy);





  FUNC_0(VAR_6);

  FUNC_5(&VAR_7, 0, sizeof(DataPageDeleteStack));
  VAR_7.leftBlkno = VAR_0;
  VAR_7.isRoot = 1;

  FUNC_3(VAR_4, VAR_5, 1, &VAR_7, VAR_1);

  VAR_8 = VAR_7.child;

  while (VAR_8)
  {
   VAR_9 = VAR_8->child;
   FUNC_6(VAR_8);
   VAR_8 = VAR_9;
  }

  FUNC_2(VAR_6);
 }
}
