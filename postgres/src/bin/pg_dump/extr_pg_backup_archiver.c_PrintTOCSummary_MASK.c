
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ teSection ;
typedef int stamp_str ;
struct TYPE_14__ {int oid; int tableoid; } ;
struct TYPE_15__ {scalar_t__ section; scalar_t__ nDeps; int * dependencies; int desc; TYPE_2__ catalogId; int dumpId; int owner; int namespace; int tag; struct TYPE_15__* next; } ;
typedef TYPE_3__ TocEntry ;
struct TYPE_13__ {TYPE_4__* ropt; } ;
struct TYPE_17__ {int format; TYPE_3__* toc; int archiveDumpVersion; int archiveRemoteVersion; scalar_t__ offSize; scalar_t__ intSize; int version; int compression; int tocCount; int archdbname; int createDate; TYPE_1__ public; } ;
struct TYPE_16__ {scalar_t__ filename; scalar_t__ strict_names; scalar_t__ verbose; } ;
typedef TYPE_4__ RestoreOptions ;
typedef int OutputContext ;
typedef TYPE_5__ ArchiveHandle ;
typedef int Archive ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_5__*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,scalar_t__,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_3__*,scalar_t__,TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,char*,...) ;



 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 char* FUNC_11 (int ,int) ;
 int FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 (char*,int,int ,int ) ;

void
FUNC_14(Archive *VAR_5)
{
 ArchiveHandle *VAR_6 = (ArchiveHandle *) VAR_5;
 RestoreOptions *VAR_7 = VAR_6->public.ropt;
 TocEntry *VAR_8;
 teSection VAR_9;
 OutputContext VAR_10;
 const char *VAR_11;
 char VAR_12[64];

 VAR_10 = FUNC_4(VAR_6);
 if (VAR_7->filename)
  FUNC_5(VAR_6, VAR_7->filename, 0 );

 if (FUNC_13(VAR_12, sizeof(VAR_12), VAR_0,
     FUNC_10(&VAR_6->createDate)) == 0)
  FUNC_12(VAR_12, "[unknown]");

 FUNC_8(VAR_6, ";\n; Archive created at %s\n", VAR_12);
 FUNC_8(VAR_6, ";     dbname: %s\n;     TOC Entries: %d\n;     Compression: %d\n",
    FUNC_11(VAR_6->archdbname, 0),
    VAR_6->tocCount, VAR_6->compression);

 switch (VAR_6->format)
 {
  case 130:
   VAR_11 = "CUSTOM";
   break;
  case 129:
   VAR_11 = "DIRECTORY";
   break;
  case 128:
   VAR_11 = "TAR";
   break;
  default:
   VAR_11 = "UNKNOWN";
 }

 FUNC_8(VAR_6, ";     Dump Version: %d.%d-%d\n",
    FUNC_0(VAR_6->version), FUNC_1(VAR_6->version), FUNC_2(VAR_6->version));
 FUNC_8(VAR_6, ";     Format: %s\n", VAR_11);
 FUNC_8(VAR_6, ";     Integer: %d bytes\n", (int) VAR_6->intSize);
 FUNC_8(VAR_6, ";     Offset: %d bytes\n", (int) VAR_6->offSize);
 if (VAR_6->archiveRemoteVersion)
  FUNC_8(VAR_6, ";     Dumped from database version: %s\n",
     VAR_6->archiveRemoteVersion);
 if (VAR_6->archiveDumpVersion)
  FUNC_8(VAR_6, ";     Dumped by pg_dump version: %s\n",
     VAR_6->archiveDumpVersion);

 FUNC_8(VAR_6, ";\n;\n; Selected TOC Entries:\n;\n");

 VAR_9 = VAR_4;
 for (VAR_8 = VAR_6->toc->next; VAR_8 != VAR_6->toc; VAR_8 = VAR_8->next)
 {
  if (VAR_8->section != VAR_3)
   VAR_9 = VAR_8->section;
  if (VAR_7->verbose ||
   (FUNC_7(VAR_8, VAR_9, VAR_6) & (VAR_2 | VAR_1)) != 0)
  {
   char *VAR_13;
   char *VAR_14;
   char *VAR_15;



   VAR_13 = FUNC_11(VAR_8->tag, 0);
   VAR_14 = FUNC_11(VAR_8->namespace, 1);
   VAR_15 = FUNC_11(VAR_8->owner, 0);

   FUNC_8(VAR_6, "%d; %u %u %s %s %s %s\n", VAR_8->dumpId,
      VAR_8->catalogId.tableoid, VAR_8->catalogId.oid,
      VAR_8->desc, VAR_14, VAR_13,
      VAR_15);

   FUNC_9(VAR_13);
   FUNC_9(VAR_14);
   FUNC_9(VAR_15);
  }
  if (VAR_7->verbose && VAR_8->nDeps > 0)
  {
   int VAR_16;

   FUNC_8(VAR_6, ";\tdepends on:");
   for (VAR_16 = 0; VAR_16 < VAR_8->nDeps; VAR_16++)
    FUNC_8(VAR_6, " %d", VAR_8->dependencies[VAR_16]);
   FUNC_8(VAR_6, "\n");
  }
 }


 if (VAR_7->strict_names)
  FUNC_6(VAR_7);

 if (VAR_7->filename)
  FUNC_3(VAR_6, VAR_10);
}
