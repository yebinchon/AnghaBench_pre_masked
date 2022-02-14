
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* rd_indam; } ;
struct TYPE_8__ {int (* aminsert ) (TYPE_2__*,int *,int*,int ,TYPE_2__*,int ,int *) ;int ampredlocks; } ;
typedef TYPE_2__* Relation ;
typedef int ItemPointer ;
typedef int IndexUniqueCheck ;
typedef int IndexInfo ;
typedef int HeapTuple ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int *,int*,int ,TYPE_2__*,int ,int *) ;

bool
FUNC_3(Relation VAR_3,
    Datum *VAR_4,
    bool *VAR_5,
    ItemPointer VAR_6,
    Relation VAR_7,
    IndexUniqueCheck VAR_8,
    IndexInfo *VAR_9)
{
 VAR_1;
 FUNC_0(VAR_2);

 if (!(VAR_3->rd_indam->ampredlocks))
  FUNC_1(VAR_3,
            (HeapTuple) ((void*)0),
            VAR_0);

 return VAR_3->rd_indam->aminsert(VAR_3, VAR_4, VAR_5,
            VAR_6, VAR_7,
            VAR_8, VAR_9);
}
