
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TupleQueueReader ;
struct TYPE_3__ {int ** reader; } ;
typedef int HeapTuple ;
typedef TYPE_1__ GatherMergeState ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int,int*) ;

__attribute__((used)) static HeapTuple
FUNC_2(GatherMergeState *VAR_0, int VAR_1, bool VAR_2,
      bool *VAR_3)
{
 TupleQueueReader *VAR_4;
 HeapTuple VAR_5;


 FUNC_0();
 VAR_4 = VAR_0->reader[VAR_1 - 1];
 VAR_5 = FUNC_1(VAR_4, VAR_2, VAR_3);

 return VAR_5;
}
