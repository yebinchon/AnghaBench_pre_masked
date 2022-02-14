
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ numberOfOrderBys; int nPtrs; int iPtr; scalar_t__* reconTups; scalar_t__ want_itup; scalar_t__* distances; scalar_t__ searchNonNulls; scalar_t__ searchNulls; int scanQueue; int traversalCxt; } ;
typedef TYPE_1__* SpGistScanOpaque ;
typedef int MemoryContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_5(SpGistScanOpaque VAR_1)
{
 MemoryContext VAR_2;

 FUNC_0(VAR_1->traversalCxt);

 VAR_2 = FUNC_1(VAR_1->traversalCxt);


 VAR_1->scanQueue = FUNC_2(VAR_0, VAR_1);

 if (VAR_1->searchNulls)

  FUNC_4(VAR_1, 1);

 if (VAR_1->searchNonNulls)

  FUNC_4(VAR_1, 0);

 FUNC_1(VAR_2);

 if (VAR_1->numberOfOrderBys > 0)
 {

  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_1->nPtrs; VAR_3++)
   if (VAR_1->distances[VAR_3])
    FUNC_3(VAR_1->distances[VAR_3]);
 }

 if (VAR_1->want_itup)
 {

  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_1->nPtrs; VAR_4++)
   FUNC_3(VAR_1->reconTups[VAR_4]);
 }
 VAR_1->iPtr = VAR_1->nPtrs = 0;
}
