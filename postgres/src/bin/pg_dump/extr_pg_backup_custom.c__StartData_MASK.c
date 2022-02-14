
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int dataState; int dataPos; } ;
typedef TYPE_1__ lclTocEntry ;
struct TYPE_12__ {int cs; } ;
typedef TYPE_2__ lclContext ;
struct TYPE_13__ {int dumpId; scalar_t__ formatData; } ;
typedef TYPE_3__ TocEntry ;
struct TYPE_14__ {int compression; scalar_t__ formatData; } ;
typedef TYPE_4__ ArchiveHandle ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(ArchiveHandle *VAR_3, TocEntry *VAR_4)
{
 lclContext *VAR_5 = (lclContext *) VAR_3->formatData;
 lclTocEntry *VAR_6 = (lclTocEntry *) VAR_4->formatData;

 VAR_6->dataPos = FUNC_3(VAR_3, VAR_5);
 VAR_6->dataState = VAR_1;

 FUNC_2(VAR_3, VAR_0);
 FUNC_1(VAR_3, VAR_4->dumpId);

 VAR_5->cs = FUNC_0(VAR_3->compression, VAR_2);
}
