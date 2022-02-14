
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_5__ {int nused; int ** slots; } ;
struct TYPE_4__ {int ri_RelationDesc; TYPE_2__* ri_CopyMultiInsertBuffer; } ;
typedef TYPE_1__ ResultRelInfo ;
typedef int CopyMultiInsertInfo ;
typedef TYPE_2__ CopyMultiInsertBuffer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * FUNC_1 (int ,int *) ;

__attribute__((used)) static inline TupleTableSlot *
FUNC_2(CopyMultiInsertInfo *VAR_1,
        ResultRelInfo *VAR_2)
{
 CopyMultiInsertBuffer *VAR_3 = VAR_2->ri_CopyMultiInsertBuffer;
 int VAR_4 = VAR_3->nused;

 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_4 < VAR_0);

 if (VAR_3->slots[VAR_4] == ((void*)0))
  VAR_3->slots[VAR_4] = FUNC_1(VAR_2->ri_RelationDesc, ((void*)0));
 return VAR_3->slots[VAR_4];
}
