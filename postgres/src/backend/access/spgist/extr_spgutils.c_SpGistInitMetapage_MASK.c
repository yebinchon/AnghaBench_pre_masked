
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int pd_lower; } ;
struct TYPE_7__ {TYPE_2__* cachedPage; } ;
struct TYPE_9__ {TYPE_1__ lastUsedPages; int magicNumber; } ;
struct TYPE_8__ {int blkno; } ;
typedef TYPE_3__ SpGistMetaPageData ;
typedef TYPE_4__* PageHeader ;
typedef scalar_t__ Page ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ) ;
 TYPE_3__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

void
FUNC_3(Page VAR_4)
{
 SpGistMetaPageData *VAR_5;
 int VAR_6;

 FUNC_0(VAR_4, VAR_3);
 VAR_5 = FUNC_1(VAR_4);
 FUNC_2(VAR_5, 0, sizeof(SpGistMetaPageData));
 VAR_5->magicNumber = VAR_2;


 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  VAR_5->lastUsedPages.cachedPage[VAR_6].blkno = VAR_0;






 ((PageHeader) VAR_4)->pd_lower =
  ((char *) VAR_5 + sizeof(SpGistMetaPageData)) - (char *) VAR_4;
}
