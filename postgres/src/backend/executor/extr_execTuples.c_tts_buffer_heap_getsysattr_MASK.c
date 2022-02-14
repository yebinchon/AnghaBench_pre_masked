
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int tts_tupleDescriptor; } ;
typedef TYPE_2__ TupleTableSlot ;
struct TYPE_6__ {int tuple; } ;
struct TYPE_8__ {TYPE_1__ base; } ;
typedef int Datum ;
typedef TYPE_3__ BufferHeapTupleTableSlot ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int,int ,int*) ;

__attribute__((used)) static Datum
FUNC_3(TupleTableSlot *VAR_0, int VAR_1, bool *VAR_2)
{
 BufferHeapTupleTableSlot *VAR_3 = (BufferHeapTupleTableSlot *) VAR_0;

 FUNC_0(!FUNC_1(VAR_0));

 return FUNC_2(VAR_3->base.tuple, VAR_1,
         VAR_0->tts_tupleDescriptor, VAR_2);
}
