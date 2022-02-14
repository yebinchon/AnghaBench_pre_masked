
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {TYPE_4__* FH; } ;
typedef TYPE_3__ lclContext ;
struct TYPE_18__ {TYPE_1__* ropt; } ;
struct TYPE_21__ {TYPE_2__ public; scalar_t__ formatData; } ;
struct TYPE_20__ {int * targetFile; } ;
struct TYPE_17__ {int dropSchema; } ;
typedef TYPE_4__ TAR_MEMBER ;
typedef scalar_t__ Oid ;
typedef TYPE_5__ ArchiveHandle ;


 int FUNC_0 (TYPE_5__*,scalar_t__) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,scalar_t__,int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (char*,int,size_t,TYPE_5__*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char*,scalar_t__) ;
 scalar_t__ FUNC_7 (int *,char*,int) ;
 int FUNC_8 (TYPE_5__*,TYPE_4__*) ;
 TYPE_4__* FUNC_9 (TYPE_5__*,int *,char) ;
 size_t FUNC_10 (char*,int,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_11(ArchiveHandle *VAR_0)
{
 Oid VAR_1;
 lclContext *VAR_2 = (lclContext *) VAR_0->formatData;
 TAR_MEMBER *VAR_3;
 size_t VAR_4;
 bool VAR_5 = 0;
 char VAR_6[4096];

 FUNC_3(VAR_0);

 VAR_3 = FUNC_9(VAR_0, ((void*)0), 'r');
 while (VAR_3 != ((void*)0))
 {
  VAR_2->FH = VAR_3;

  if (FUNC_7(VAR_3->targetFile, "blob_", 5) == 0)
  {
   VAR_1 = FUNC_5(&VAR_3->targetFile[5]);
   if (VAR_1 != 0)
   {
    FUNC_6("restoring large object with OID %u", VAR_1);

    FUNC_2(VAR_0, VAR_1, VAR_0->public.ropt->dropSchema);

    while ((VAR_4 = FUNC_10(VAR_6, 4095, VAR_3)) > 0)
    {
     VAR_6[VAR_4] = '\0';
     FUNC_4(VAR_6, 1, VAR_4, VAR_0);
    }
    FUNC_0(VAR_0, VAR_1);
    VAR_5 = 1;
   }
   FUNC_8(VAR_0, VAR_3);
  }
  else
  {
   FUNC_8(VAR_0, VAR_3);







   if (VAR_5)
    break;
  }

  VAR_3 = FUNC_9(VAR_0, ((void*)0), 'r');
 }
 FUNC_1(VAR_0);
}
