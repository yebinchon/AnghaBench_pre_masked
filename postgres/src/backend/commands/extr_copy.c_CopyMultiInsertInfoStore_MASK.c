
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64 ;
typedef int TupleTableSlot ;
struct TYPE_8__ {size_t nused; int * linenos; int ** slots; } ;
struct TYPE_7__ {int bufferedBytes; int bufferedTuples; } ;
struct TYPE_6__ {TYPE_3__* ri_CopyMultiInsertBuffer; } ;
typedef TYPE_1__ ResultRelInfo ;
typedef TYPE_2__ CopyMultiInsertInfo ;
typedef TYPE_3__ CopyMultiInsertBuffer ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void
FUNC_1(CopyMultiInsertInfo *VAR_0, ResultRelInfo *VAR_1,
       TupleTableSlot *VAR_2, int VAR_3, uint64 VAR_4)
{
 CopyMultiInsertBuffer *VAR_5 = VAR_1->ri_CopyMultiInsertBuffer;

 FUNC_0(VAR_5 != ((void*)0));
 FUNC_0(VAR_2 == VAR_5->slots[VAR_5->nused]);


 VAR_5->linenos[VAR_5->nused] = VAR_4;


 VAR_5->nused++;


 VAR_0->bufferedTuples++;
 VAR_0->bufferedBytes += VAR_3;
}
