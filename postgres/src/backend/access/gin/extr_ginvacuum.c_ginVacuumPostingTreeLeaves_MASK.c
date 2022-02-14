
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int rightlink; } ;
struct TYPE_5__ {int strategy; int index; int tmpCxt; } ;
typedef int PostingItem ;
typedef int Page ;
typedef int MemoryContext ;
typedef TYPE_1__ GinVacuumState ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int ,scalar_t__) ;
 TYPE_4__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (int ,int ) ;
 int VAR_5 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int VAR_6 ;
 int FUNC_12 (int ,int ,int ,int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_15(GinVacuumState *VAR_7, BlockNumber VAR_8)
{
 Buffer VAR_9;
 Page VAR_10;
 bool VAR_11 = 0;
 MemoryContext VAR_12;


 while (1)
 {
  PostingItem *VAR_13;

  VAR_9 = FUNC_12(VAR_7->index, VAR_5, VAR_8,
         VAR_6, VAR_7->strategy);
  FUNC_7(VAR_9, VAR_2);
  VAR_10 = FUNC_1(VAR_9);

  FUNC_0(FUNC_5(VAR_10));

  if (FUNC_6(VAR_10))
  {
   FUNC_7(VAR_9, VAR_3);
   FUNC_7(VAR_9, VAR_1);
   break;
  }

  FUNC_0(FUNC_10(VAR_10) >= VAR_0);

  VAR_13 = FUNC_3(VAR_10, VAR_0);
  VAR_8 = FUNC_11(VAR_13);
  FUNC_0(VAR_8 != VAR_4);

  FUNC_13(VAR_9);
 }


 while (1)
 {
  VAR_12 = FUNC_9(VAR_7->tmpCxt);
  FUNC_14(VAR_7->index, VAR_9, VAR_7);
  FUNC_9(VAR_12);
  FUNC_8(VAR_7->tmpCxt);

  if (FUNC_2(VAR_10))
   VAR_11 = 1;

  VAR_8 = FUNC_4(VAR_10)->rightlink;

  FUNC_13(VAR_9);

  if (VAR_8 == VAR_4)
   break;

  VAR_9 = FUNC_12(VAR_7->index, VAR_5, VAR_8,
         VAR_6, VAR_7->strategy);
  FUNC_7(VAR_9, VAR_1);
  VAR_10 = FUNC_1(VAR_9);
 }

 return VAR_11;
}
