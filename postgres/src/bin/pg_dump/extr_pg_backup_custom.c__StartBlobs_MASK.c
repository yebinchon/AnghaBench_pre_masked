
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int dataState; int dataPos; } ;
typedef TYPE_1__ lclTocEntry ;
typedef int lclContext ;
struct TYPE_10__ {int dumpId; scalar_t__ formatData; } ;
typedef TYPE_2__ TocEntry ;
struct TYPE_11__ {scalar_t__ formatData; } ;
typedef TYPE_3__ ArchiveHandle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int *) ;

__attribute__((used)) static void
FUNC_3(ArchiveHandle *VAR_2, TocEntry *VAR_3)
{
 lclContext *VAR_4 = (lclContext *) VAR_2->formatData;
 lclTocEntry *VAR_5 = (lclTocEntry *) VAR_3->formatData;

 VAR_5->dataPos = FUNC_2(VAR_2, VAR_4);
 VAR_5->dataState = VAR_1;

 FUNC_1(VAR_2, VAR_0);
 FUNC_0(VAR_2, VAR_3->dumpId);
}
