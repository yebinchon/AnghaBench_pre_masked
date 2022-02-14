
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int tts_tableOid; } ;
typedef TYPE_2__ TupleTableSlot ;
struct TYPE_12__ {int t_self; } ;
struct TYPE_9__ {TYPE_5__ tupdata; } ;
struct TYPE_11__ {TYPE_1__ base; } ;
typedef int Snapshot ;
typedef int Relation ;
typedef int * ItemPointer ;
typedef TYPE_3__ BufferHeapTupleTableSlot ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,TYPE_2__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,int ,TYPE_5__*,int *) ;

__attribute__((used)) static bool
FUNC_5(Relation VAR_0,
       ItemPointer VAR_1,
       Snapshot VAR_2,
       TupleTableSlot *VAR_3)
{
 BufferHeapTupleTableSlot *VAR_4 = (BufferHeapTupleTableSlot *) VAR_3;
 Buffer VAR_5;

 FUNC_0(FUNC_3(VAR_3));

 VAR_4->base.tupdata.t_self = *VAR_1;
 if (FUNC_4(VAR_0, VAR_2, &VAR_4->base.tupdata, &VAR_5))
 {

  FUNC_1(&VAR_4->base.tupdata, VAR_3, VAR_5);
  VAR_3->tts_tableOid = FUNC_2(VAR_0);

  return 1;
 }

 return 0;
}
