
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ginVersion; scalar_t__ nEntries; scalar_t__ nDataPages; scalar_t__ nEntryPages; scalar_t__ nTotalPages; scalar_t__ nPendingHeapTuples; scalar_t__ nPendingPages; scalar_t__ tailFreeSize; int tail; int head; } ;
struct TYPE_4__ {int pd_lower; } ;
typedef TYPE_1__* PageHeader ;
typedef scalar_t__ Page ;
typedef TYPE_2__ GinMetaPageData ;
typedef int Buffer ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 TYPE_2__* FUNC_3 (scalar_t__) ;
 int VAR_2 ;

void
FUNC_4(Buffer VAR_3)
{
 GinMetaPageData *VAR_4;
 Page VAR_5 = FUNC_0(VAR_3);

 FUNC_2(VAR_5, VAR_1, FUNC_1(VAR_3));

 VAR_4 = FUNC_3(VAR_5);

 VAR_4->head = VAR_4->tail = VAR_2;
 VAR_4->tailFreeSize = 0;
 VAR_4->nPendingPages = 0;
 VAR_4->nPendingHeapTuples = 0;
 VAR_4->nTotalPages = 0;
 VAR_4->nEntryPages = 0;
 VAR_4->nDataPages = 0;
 VAR_4->nEntries = 0;
 VAR_4->ginVersion = VAR_0;






 ((PageHeader) VAR_5)->pd_lower =
  ((char *) VAR_4 + sizeof(GinMetaPageData)) - (char *) VAR_5;
}
