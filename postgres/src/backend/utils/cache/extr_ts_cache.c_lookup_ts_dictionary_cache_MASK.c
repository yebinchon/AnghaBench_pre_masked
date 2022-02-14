
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ctl ;
struct TYPE_11__ {scalar_t__ dicttemplate; int dictname; } ;
struct TYPE_10__ {scalar_t__ tmpllexize; scalar_t__ tmplinit; } ;
struct TYPE_9__ {int keysize; int entrysize; scalar_t__ dictId; int isvalid; scalar_t__ lexizeOid; int dictCtx; int lexize; int dictData; } ;
typedef TYPE_1__ TSDictionaryCacheEntry ;
typedef scalar_t__ Oid ;
typedef int MemoryContext ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_1__ HASHCTL ;
typedef TYPE_3__* Form_pg_ts_template ;
typedef TYPE_4__* Form_pg_ts_dict ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ) ;
 int * VAR_9 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__,int ) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ,int ,int*) ;
 int VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 int * FUNC_20 (int ) ;
 int FUNC_21 (int ,char*,scalar_t__) ;
 int FUNC_22 (scalar_t__,int *,int ) ;
 int * FUNC_23 (char*,int,TYPE_1__*,int) ;
 scalar_t__ FUNC_24 (int *,void*,int ,int*) ;
 TYPE_1__* VAR_13 ;

TSDictionaryCacheEntry *
FUNC_25(Oid VAR_14)
{
 TSDictionaryCacheEntry *VAR_15;

 if (VAR_11 == ((void*)0))
 {

  HASHCTL VAR_16;

  FUNC_7(&VAR_16, 0, sizeof(VAR_16));
  VAR_16.keysize = sizeof(Oid);
  VAR_16.entrysize = sizeof(TSDictionaryCacheEntry);
  VAR_11 = FUNC_23("Tsearch dictionary cache", 8,
           &VAR_16, VAR_5 | VAR_4);

  FUNC_2(VAR_10, VAR_8,
           FUNC_16(VAR_11));
  FUNC_2(VAR_12, VAR_8,
           FUNC_16(VAR_11));


  if (!VAR_2)
   FUNC_3();
 }


 if (VAR_13 && VAR_13->dictId == VAR_14 &&
  VAR_13->isvalid)
  return VAR_13;


 VAR_15 = (TSDictionaryCacheEntry *) FUNC_24(VAR_11,
               (void *) &VAR_14,
               VAR_7, ((void*)0));
 if (VAR_15 == ((void*)0) || !VAR_15->isvalid)
 {




  HeapTuple VAR_17,
     VAR_18;
  Form_pg_ts_dict VAR_19;
  Form_pg_ts_template VAR_20;
  MemoryContext VAR_21;

  VAR_17 = FUNC_18(VAR_10, FUNC_13(VAR_14));
  if (!FUNC_6(VAR_17))
   FUNC_21(VAR_3, "cache lookup failed for text search dictionary %u",
     VAR_14);
  VAR_19 = (Form_pg_ts_dict) FUNC_5(VAR_17);




  if (!FUNC_15(VAR_19->dicttemplate))
   FUNC_21(VAR_3, "text search dictionary %u has no template", VAR_14);




  VAR_18 = FUNC_18(VAR_12,
         FUNC_13(VAR_19->dicttemplate));
  if (!FUNC_6(VAR_18))
   FUNC_21(VAR_3, "cache lookup failed for text search template %u",
     VAR_19->dicttemplate);
  VAR_20 = (Form_pg_ts_template) FUNC_5(VAR_18);




  if (!FUNC_15(VAR_20->tmpllexize))
   FUNC_21(VAR_3, "text search template %u has no lexize method",
     VAR_20->tmpllexize);

  if (VAR_15 == ((void*)0))
  {
   bool VAR_22;


   VAR_15 = (TSDictionaryCacheEntry *)
    FUNC_24(VAR_11,
       (void *) &VAR_14,
       VAR_6, &VAR_22);
   FUNC_1(!VAR_22);


   VAR_21 = FUNC_0(VAR_2,
           "TS dictionary",
           VAR_0);
   FUNC_8(VAR_21, FUNC_12(VAR_19->dictname));
  }
  else
  {

   VAR_21 = VAR_15->dictCtx;

   FUNC_10(VAR_21, ((void*)0));
   FUNC_9(VAR_21);
   FUNC_8(VAR_21, FUNC_12(VAR_19->dictname));
  }

  FUNC_7(VAR_15, 0, sizeof(TSDictionaryCacheEntry));
  VAR_15->dictId = VAR_14;
  VAR_15->dictCtx = VAR_21;

  VAR_15->lexizeOid = VAR_20->tmpllexize;

  if (FUNC_15(VAR_20->tmplinit))
  {
   List *VAR_23;
   Datum VAR_24;
   bool VAR_25;
   MemoryContext VAR_26;





   VAR_26 = FUNC_11(VAR_15->dictCtx);

   VAR_24 = FUNC_19(VAR_10, VAR_17,
          VAR_1,
          &VAR_25);
   if (VAR_25)
    VAR_23 = VAR_9;
   else
    VAR_23 = FUNC_20(VAR_24);

   VAR_15->dictData =
    FUNC_4(FUNC_14(VAR_20->tmplinit,
             FUNC_16(VAR_23)));

   FUNC_11(VAR_26);
  }

  FUNC_17(VAR_18);
  FUNC_17(VAR_17);

  FUNC_22(VAR_15->lexizeOid, &VAR_15->lexize, VAR_15->dictCtx);

  VAR_15->isvalid = 1;
 }

 VAR_13 = VAR_15;

 return VAR_15;
}
