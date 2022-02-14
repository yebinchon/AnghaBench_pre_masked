
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_3__ {int off; int tuple; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
typedef TYPE_2__ BufferHeapTupleTableSlot ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int *,int) ;

__attribute__((used)) static void
FUNC_3(TupleTableSlot *VAR_0, int VAR_1)
{
 BufferHeapTupleTableSlot *VAR_2 = (BufferHeapTupleTableSlot *) VAR_0;

 FUNC_0(!FUNC_1(VAR_0));

 FUNC_2(VAR_0, VAR_2->base.tuple, &VAR_2->base.off, VAR_1);
}
