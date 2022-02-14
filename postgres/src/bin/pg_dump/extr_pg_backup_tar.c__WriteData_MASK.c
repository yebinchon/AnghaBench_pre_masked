
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int TH; } ;
typedef TYPE_2__ lclTocEntry ;
struct TYPE_7__ {TYPE_1__* currToc; } ;
struct TYPE_5__ {scalar_t__ formatData; } ;
typedef TYPE_3__ ArchiveHandle ;


 int VAR_0 ;
 size_t FUNC_0 (void const*,size_t,int ) ;

__attribute__((used)) static void
FUNC_1(ArchiveHandle *VAR_1, const void *VAR_2, size_t VAR_3)
{
 lclTocEntry *VAR_4 = (lclTocEntry *) VAR_1->currToc->formatData;

 if (FUNC_0(VAR_2, VAR_3, VAR_4->TH) != VAR_3)
  VAR_0;

 return;
}
