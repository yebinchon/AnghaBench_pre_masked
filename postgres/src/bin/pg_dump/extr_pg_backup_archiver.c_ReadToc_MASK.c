
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {char tableoid; char oid; } ;
struct TYPE_16__ {scalar_t__ dumpId; void* desc; char* dependencies; int nDeps; struct TYPE_16__* next; struct TYPE_16__* prev; void* tag; scalar_t__ dataLength; void* owner; void* tableam; void* tablespace; void* namespace; void* copyStmt; void* dropStmt; void* defn; void* section; TYPE_1__ catalogId; void* hadDumper; } ;
typedef TYPE_2__ TocEntry ;
struct TYPE_17__ {int tocCount; scalar_t__ maxDumpId; scalar_t__ version; TYPE_2__* toc; int (* ReadExtraTocPtr ) (TYPE_3__*,TYPE_2__*) ;} ;
typedef char DumpId ;
typedef TYPE_3__ ArchiveHandle ;


 char VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* FUNC_0 (TYPE_3__*) ;
 void* FUNC_1 (TYPE_3__*) ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,scalar_t__,void*,void*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (char*,int) ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_11 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_12 (char*,char*,char*) ;
 scalar_t__ FUNC_13 (void*,char*) ;
 int FUNC_14 (TYPE_3__*,TYPE_2__*) ;

void
FUNC_15(ArchiveHandle *VAR_13)
{
 int VAR_14;
 char *VAR_15;
 DumpId *VAR_16;
 int VAR_17;
 int VAR_18;
 TocEntry *VAR_19;

 VAR_13->tocCount = FUNC_0(VAR_13);
 VAR_13->maxDumpId = 0;

 for (VAR_14 = 0; VAR_14 < VAR_13->tocCount; VAR_14++)
 {
  VAR_19 = (TocEntry *) FUNC_7(sizeof(TocEntry));
  VAR_19->dumpId = FUNC_0(VAR_13);

  if (VAR_19->dumpId > VAR_13->maxDumpId)
   VAR_13->maxDumpId = VAR_19->dumpId;


  if (VAR_19->dumpId <= 0)
   FUNC_2("entry ID %d out of range -- perhaps a corrupt TOC",
      VAR_19->dumpId);

  VAR_19->hadDumper = FUNC_0(VAR_13);

  if (VAR_13->version >= VAR_7)
  {
   VAR_15 = FUNC_1(VAR_13);
   FUNC_12(VAR_15, "%u", &VAR_19->catalogId.tableoid);
   FUNC_3(VAR_15);
  }
  else
   VAR_19->catalogId.tableoid = VAR_0;
  VAR_15 = FUNC_1(VAR_13);
  FUNC_12(VAR_15, "%u", &VAR_19->catalogId.oid);
  FUNC_3(VAR_15);

  VAR_19->tag = FUNC_1(VAR_13);
  VAR_19->desc = FUNC_1(VAR_13);

  if (VAR_13->version >= VAR_2)
  {
   VAR_19->section = FUNC_0(VAR_13);
  }
  else
  {





   if (FUNC_13(VAR_19->desc, "COMMENT") == 0 ||
    FUNC_13(VAR_19->desc, "ACL") == 0 ||
    FUNC_13(VAR_19->desc, "ACL LANGUAGE") == 0)
    VAR_19->section = VAR_10;
   else if (FUNC_13(VAR_19->desc, "TABLE DATA") == 0 ||
      FUNC_13(VAR_19->desc, "BLOBS") == 0 ||
      FUNC_13(VAR_19->desc, "BLOB COMMENTS") == 0)
    VAR_19->section = VAR_9;
   else if (FUNC_13(VAR_19->desc, "CONSTRAINT") == 0 ||
      FUNC_13(VAR_19->desc, "CHECK CONSTRAINT") == 0 ||
      FUNC_13(VAR_19->desc, "FK CONSTRAINT") == 0 ||
      FUNC_13(VAR_19->desc, "INDEX") == 0 ||
      FUNC_13(VAR_19->desc, "RULE") == 0 ||
      FUNC_13(VAR_19->desc, "TRIGGER") == 0)
    VAR_19->section = VAR_11;
   else
    VAR_19->section = VAR_12;
  }

  VAR_19->defn = FUNC_1(VAR_13);
  VAR_19->dropStmt = FUNC_1(VAR_13);

  if (VAR_13->version >= VAR_4)
   VAR_19->copyStmt = FUNC_1(VAR_13);

  if (VAR_13->version >= VAR_6)
   VAR_19->namespace = FUNC_1(VAR_13);

  if (VAR_13->version >= VAR_1)
   VAR_19->tablespace = FUNC_1(VAR_13);

  if (VAR_13->version >= VAR_3)
   VAR_19->tableam = FUNC_1(VAR_13);

  VAR_19->owner = FUNC_1(VAR_13);
  if (VAR_13->version < VAR_8 || FUNC_13(FUNC_1(VAR_13), "true") == 0)
   FUNC_5("restoring tables WITH OIDS is not supported anymore");


  if (VAR_13->version >= VAR_5)
  {
   VAR_18 = 100;
   VAR_16 = (DumpId *) FUNC_6(sizeof(DumpId) * VAR_18);
   VAR_17 = 0;
   for (;;)
   {
    VAR_15 = FUNC_1(VAR_13);
    if (!VAR_15)
     break;
    if (VAR_17 >= VAR_18)
    {
     VAR_18 *= 2;
     VAR_16 = (DumpId *) FUNC_8(VAR_16, sizeof(DumpId) * VAR_18);
    }
    FUNC_12(VAR_15, "%d", &VAR_16[VAR_17]);
    FUNC_3(VAR_15);
    VAR_17++;
   }

   if (VAR_17 > 0)
   {
    VAR_16 = (DumpId *) FUNC_8(VAR_16, sizeof(DumpId) * VAR_17);
    VAR_19->dependencies = VAR_16;
    VAR_19->nDeps = VAR_17;
   }
   else
   {
    FUNC_3(VAR_16);
    VAR_19->dependencies = ((void*)0);
    VAR_19->nDeps = 0;
   }
  }
  else
  {
   VAR_19->dependencies = ((void*)0);
   VAR_19->nDeps = 0;
  }
  VAR_19->dataLength = 0;

  if (VAR_13->ReadExtraTocPtr)
   VAR_13->ReadExtraTocPtr(VAR_13, VAR_19);

  FUNC_4("read TOC entry %d (ID %d) for %s %s",
      VAR_14, VAR_19->dumpId, VAR_19->desc, VAR_19->tag);


  VAR_19->prev = VAR_13->toc->prev;
  VAR_13->toc->prev->next = VAR_19;
  VAR_13->toc->prev = VAR_19;
  VAR_19->next = VAR_13->toc;


  if (FUNC_13(VAR_19->desc, "ENCODING") == 0)
   FUNC_9(VAR_13, VAR_19);
  else if (FUNC_13(VAR_19->desc, "STDSTRINGS") == 0)
   FUNC_11(VAR_13, VAR_19);
  else if (FUNC_13(VAR_19->desc, "SEARCHPATH") == 0)
   FUNC_10(VAR_13, VAR_19);
 }
}
