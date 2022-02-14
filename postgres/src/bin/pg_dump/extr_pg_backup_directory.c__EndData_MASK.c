
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * dataFH; } ;
typedef TYPE_1__ lclContext ;
typedef int TocEntry ;
struct TYPE_5__ {scalar_t__ formatData; } ;
typedef TYPE_2__ ArchiveHandle ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(ArchiveHandle *VAR_0, TocEntry *VAR_1)
{
 lclContext *VAR_2 = (lclContext *) VAR_0->formatData;


 FUNC_0(VAR_2->dataFH);

 VAR_2->dataFH = ((void*)0);
}
