
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int filename; } ;
typedef TYPE_1__ lclTocEntry ;
struct TYPE_9__ {int * dataFH; } ;
typedef TYPE_2__ lclContext ;
struct TYPE_10__ {scalar_t__ formatData; } ;
typedef TYPE_3__ TocEntry ;
struct TYPE_11__ {int compression; scalar_t__ formatData; } ;
typedef TYPE_4__ ArchiveHandle ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (TYPE_4__*,char*,int ) ;

__attribute__((used)) static void
FUNC_3(ArchiveHandle *VAR_2, TocEntry *VAR_3)
{
 lclTocEntry *VAR_4 = (lclTocEntry *) VAR_3->formatData;
 lclContext *VAR_5 = (lclContext *) VAR_2->formatData;
 char VAR_6[VAR_0];

 FUNC_2(VAR_2, VAR_6, VAR_4->filename);

 VAR_5->dataFH = FUNC_0(VAR_6, VAR_1, VAR_2->compression);
 if (VAR_5->dataFH == ((void*)0))
  FUNC_1("could not open output file \"%s\": %m", VAR_6);
}
