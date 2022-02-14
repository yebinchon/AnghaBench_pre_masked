
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lastRevmapPage; int pagesPerRange; } ;
struct TYPE_4__ {scalar_t__ revmapNumPages; int pagesPerRange; } ;
typedef int Relation ;
typedef int Page ;
typedef int Buffer ;
typedef TYPE_1__ BrinStatsData ;
typedef TYPE_2__ BrinMetaPageData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(Relation VAR_2, BrinStatsData *VAR_3)
{
 Buffer VAR_4;
 Page VAR_5;
 BrinMetaPageData *VAR_6;

 VAR_4 = FUNC_3(VAR_2, VAR_0);
 FUNC_1(VAR_4, VAR_1);
 VAR_5 = FUNC_0(VAR_4);
 VAR_6 = (BrinMetaPageData *) FUNC_2(VAR_5);

 VAR_3->pagesPerRange = VAR_6->pagesPerRange;
 VAR_3->revmapNumPages = VAR_6->lastRevmapPage - 1;

 FUNC_4(VAR_4);
}
