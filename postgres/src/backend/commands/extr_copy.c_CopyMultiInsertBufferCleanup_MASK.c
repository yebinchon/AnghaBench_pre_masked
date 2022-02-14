
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ nused; TYPE_1__* resultRelInfo; int ** slots; int bistate; } ;
struct TYPE_8__ {int ti_options; } ;
struct TYPE_7__ {int ri_RelationDesc; int * ri_CopyMultiInsertBuffer; } ;
typedef TYPE_2__ CopyMultiInsertInfo ;
typedef TYPE_3__ CopyMultiInsertBuffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static inline void
FUNC_5(CopyMultiInsertInfo *VAR_1,
        CopyMultiInsertBuffer *VAR_2)
{
 int VAR_3;


 FUNC_0(VAR_2->nused == 0);


 VAR_2->resultRelInfo->ri_CopyMultiInsertBuffer = ((void*)0);

 FUNC_2(VAR_2->bistate);


 for (VAR_3 = 0; VAR_3 < VAR_0 && VAR_2->slots[VAR_3] != ((void*)0); VAR_3++)
  FUNC_1(VAR_2->slots[VAR_3]);

 FUNC_4(VAR_2->resultRelInfo->ri_RelationDesc,
        VAR_1->ti_options);

 FUNC_3(VAR_2);
}
