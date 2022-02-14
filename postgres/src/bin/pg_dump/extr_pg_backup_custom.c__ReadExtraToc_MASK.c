
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int dataPos; int dataState; } ;
typedef TYPE_1__ lclTocEntry ;
struct TYPE_9__ {void* formatData; } ;
typedef TYPE_2__ TocEntry ;
struct TYPE_10__ {scalar_t__ version; } ;
typedef TYPE_3__ ArchiveHandle ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(ArchiveHandle *VAR_1, TocEntry *VAR_2)
{
 lclTocEntry *VAR_3 = (lclTocEntry *) VAR_2->formatData;

 if (VAR_3 == ((void*)0))
 {
  VAR_3 = (lclTocEntry *) FUNC_2(sizeof(lclTocEntry));
  VAR_2->formatData = (void *) VAR_3;
 }

 VAR_3->dataState = FUNC_1(VAR_1, &(VAR_3->dataPos));





 if (VAR_1->version < VAR_0)
  FUNC_0(VAR_1);
}
