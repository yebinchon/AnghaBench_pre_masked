
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* directory; int * dataFH; } ;
typedef TYPE_1__ lclContext ;
typedef int TocEntry ;
struct TYPE_5__ {int compression; scalar_t__ formatData; } ;
typedef int Oid ;
typedef TYPE_2__ ArchiveHandle ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*,char*,int) ;

__attribute__((used)) static void
FUNC_3(ArchiveHandle *VAR_2, TocEntry *VAR_3, Oid VAR_4)
{
 lclContext *VAR_5 = (lclContext *) VAR_2->formatData;
 char VAR_6[VAR_0];

 FUNC_2(VAR_6, VAR_0, "%s/blob_%u.dat", VAR_5->directory, VAR_4);

 VAR_5->dataFH = FUNC_0(VAR_6, VAR_1, VAR_2->compression);

 if (VAR_5->dataFH == ((void*)0))
  FUNC_1("could not open output file \"%s\": %m", VAR_6);
}
