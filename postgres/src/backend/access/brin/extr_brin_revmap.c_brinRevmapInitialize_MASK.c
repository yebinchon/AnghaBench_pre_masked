
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pagesPerRange; int lastRevmapPage; } ;
struct TYPE_5__ {int rm_currBuf; int rm_metaBuf; int rm_lastRevmapPage; int rm_pagesPerRange; int rm_irel; } ;
typedef int Snapshot ;
typedef int Relation ;
typedef int Page ;
typedef int Buffer ;
typedef TYPE_1__ BrinRevmap ;
typedef TYPE_2__ BrinMetaPageData ;
typedef int BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 TYPE_1__* FUNC_5 (int) ;

BrinRevmap *
FUNC_6(Relation VAR_4, BlockNumber *VAR_5,
      Snapshot VAR_6)
{
 BrinRevmap *VAR_7;
 Buffer VAR_8;
 BrinMetaPageData *VAR_9;
 Page VAR_10;

 VAR_8 = FUNC_3(VAR_4, VAR_0);
 FUNC_1(VAR_8, VAR_1);
 VAR_10 = FUNC_0(VAR_8);
 FUNC_4(VAR_6, VAR_4, VAR_10);
 VAR_9 = (BrinMetaPageData *) FUNC_2(VAR_10);

 VAR_7 = FUNC_5(sizeof(BrinRevmap));
 VAR_7->rm_irel = VAR_4;
 VAR_7->rm_pagesPerRange = VAR_9->pagesPerRange;
 VAR_7->rm_lastRevmapPage = VAR_9->lastRevmapPage;
 VAR_7->rm_metaBuf = VAR_8;
 VAR_7->rm_currBuf = VAR_3;

 *VAR_5 = VAR_9->pagesPerRange;

 FUNC_1(VAR_8, VAR_2);

 return VAR_7;
}
