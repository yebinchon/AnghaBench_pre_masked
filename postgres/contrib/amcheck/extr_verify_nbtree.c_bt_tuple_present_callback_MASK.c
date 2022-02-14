
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int heaptuplespresent; int readonly; int rel; int heaprel; int filter; int heapallindexed; } ;
struct TYPE_9__ {int t_tid; } ;
typedef int Relation ;
typedef int * ItemPointer ;
typedef TYPE_1__* IndexTuple ;
typedef int Datum ;
typedef TYPE_2__ BtreeCheckState ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,unsigned char*,int ) ;
 TYPE_1__* FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_12 (int ,int *,int*) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_14(Relation VAR_2, ItemPointer VAR_3, Datum *VAR_4,
        bool *VAR_5, bool VAR_6, void *VAR_7)
{
 BtreeCheckState *VAR_8 = (BtreeCheckState *) VAR_7;
 IndexTuple VAR_9,
    VAR_10;

 FUNC_0(VAR_8->heapallindexed);


 VAR_9 = FUNC_12(FUNC_4(VAR_2), VAR_4, VAR_5);
 VAR_9->t_tid = *VAR_3;
 VAR_10 = FUNC_7(VAR_8, VAR_9);


 if (FUNC_6(VAR_8->filter, (unsigned char *) VAR_10,
       FUNC_1(VAR_10)))
  FUNC_8(VAR_1,
    (FUNC_9(VAR_0),
     FUNC_11("heap tuple (%u,%u) from table \"%s\" lacks matching index tuple within index \"%s\"",
      FUNC_2(&(VAR_9->t_tid)),
      FUNC_3(&(VAR_9->t_tid)),
      FUNC_5(VAR_8->heaprel),
      FUNC_5(VAR_8->rel)),
     !VAR_8->readonly
     ? FUNC_10("Retrying verification using the function bt_index_parent_check() might provide a more specific error.")
     : 0));

 VAR_8->heaptuplespresent++;
 FUNC_13(VAR_9);

 if (VAR_10 != VAR_9)
  FUNC_13(VAR_10);
}
