
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_4__ {scalar_t__ lastRevmapPage; int pagesPerRange; int brinVersion; int brinMagic; } ;
struct TYPE_3__ {int pd_lower; } ;
typedef TYPE_1__* PageHeader ;
typedef scalar_t__ Page ;
typedef TYPE_2__ BrinMetaPageData ;
typedef int BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;

void
FUNC_2(Page VAR_2, BlockNumber VAR_3, uint16 VAR_4)
{
 BrinMetaPageData *VAR_5;

 FUNC_1(VAR_2, VAR_1);

 VAR_5 = (BrinMetaPageData *) FUNC_0(VAR_2);

 VAR_5->brinMagic = VAR_0;
 VAR_5->brinVersion = VAR_4;
 VAR_5->pagesPerRange = VAR_3;






 VAR_5->lastRevmapPage = 0;






 ((PageHeader) VAR_2)->pd_lower =
  ((char *) VAR_5 + sizeof(BrinMetaPageData)) - (char *) VAR_2;
}
