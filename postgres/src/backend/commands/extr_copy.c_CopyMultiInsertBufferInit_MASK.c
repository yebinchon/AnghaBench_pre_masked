
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_3__ {scalar_t__ nused; int bistate; int * resultRelInfo; int slots; } ;
typedef int ResultRelInfo ;
typedef TYPE_1__ CopyMultiInsertBuffer ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static CopyMultiInsertBuffer *
FUNC_3(ResultRelInfo *VAR_1)
{
 CopyMultiInsertBuffer *VAR_2;

 VAR_2 = (CopyMultiInsertBuffer *) FUNC_2(sizeof(CopyMultiInsertBuffer));
 FUNC_1(VAR_2->slots, 0, sizeof(TupleTableSlot *) * VAR_0);
 VAR_2->resultRelInfo = VAR_1;
 VAR_2->bistate = FUNC_0();
 VAR_2->nused = 0;

 return VAR_2;
}
