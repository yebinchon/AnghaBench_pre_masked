
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ginVersion; int nEntries; int nDataPages; int nEntryPages; int nTotalPages; int nPendingPages; } ;
struct TYPE_5__ {int ginVersion; int nEntries; int nDataPages; int nEntryPages; int nTotalPages; int nPendingPages; } ;
typedef int Relation ;
typedef int Page ;
typedef TYPE_1__ GinStatsData ;
typedef TYPE_2__ GinMetaPageData ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(Relation VAR_2, GinStatsData *VAR_3)
{
 Buffer VAR_4;
 Page VAR_5;
 GinMetaPageData *VAR_6;

 VAR_4 = FUNC_3(VAR_2, VAR_0);
 FUNC_2(VAR_4, VAR_1);
 VAR_5 = FUNC_0(VAR_4);
 VAR_6 = FUNC_1(VAR_5);

 VAR_3->nPendingPages = VAR_6->nPendingPages;
 VAR_3->nTotalPages = VAR_6->nTotalPages;
 VAR_3->nEntryPages = VAR_6->nEntryPages;
 VAR_3->nDataPages = VAR_6->nDataPages;
 VAR_3->nEntries = VAR_6->nEntries;
 VAR_3->ginVersion = VAR_6->ginVersion;

 FUNC_4(VAR_4);
}
