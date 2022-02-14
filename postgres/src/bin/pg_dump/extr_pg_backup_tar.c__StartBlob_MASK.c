
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int TH; } ;
typedef TYPE_1__ lclTocEntry ;
struct TYPE_10__ {int blobToc; } ;
typedef TYPE_2__ lclContext ;
struct TYPE_11__ {scalar_t__ formatData; } ;
typedef TYPE_3__ TocEntry ;
struct TYPE_12__ {scalar_t__ compression; scalar_t__ formatData; } ;
typedef int Oid ;
typedef TYPE_4__ ArchiveHandle ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char*,int,char*) ;
 int FUNC_2 (TYPE_4__*,char*,char) ;
 int FUNC_3 (TYPE_4__*,int ,char*,int,char*) ;

__attribute__((used)) static void
FUNC_4(ArchiveHandle *VAR_0, TocEntry *VAR_1, Oid VAR_2)
{
 lclContext *VAR_3 = (lclContext *) VAR_0->formatData;
 lclTocEntry *VAR_4 = (lclTocEntry *) VAR_1->formatData;
 char VAR_5[255];
 char *VAR_6;

 if (VAR_2 == 0)
  FUNC_0("invalid OID for large object (%u)", VAR_2);

 if (VAR_0->compression != 0)
  VAR_6 = ".gz";
 else
  VAR_6 = "";

 FUNC_1(VAR_5, "blob_%u.dat%s", VAR_2, VAR_6);

 FUNC_3(VAR_0, VAR_3->blobToc, "%u %s\n", VAR_2, VAR_5);

 VAR_4->TH = FUNC_2(VAR_0, VAR_5, 'w');
}
