
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ctl ;
struct TYPE_9__ {int prslextype; int prsheadline; int prsend; int prstoken; int prsstart; } ;
struct TYPE_8__ {int keysize; int entrysize; scalar_t__ prsId; int isvalid; int prsheadline; int headlineOid; int prsend; int endOid; int prstoken; int tokenOid; int prsstart; int startOid; int lextypeOid; } ;
typedef TYPE_1__ TSParserCacheEntry ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__ HASHCTL ;
typedef TYPE_3__* Form_pg_ts_parser ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_11 (int ,char*,scalar_t__) ;
 int FUNC_12 (int ,int *,int ) ;
 int * FUNC_13 (char*,int,TYPE_1__*,int) ;
 scalar_t__ FUNC_14 (int *,void*,int ,int*) ;
 TYPE_1__* VAR_9 ;

TSParserCacheEntry *
FUNC_15(Oid VAR_10)
{
 TSParserCacheEntry *VAR_11;

 if (VAR_8 == ((void*)0))
 {

  HASHCTL VAR_12;

  FUNC_5(&VAR_12, 0, sizeof(VAR_12));
  VAR_12.keysize = sizeof(Oid);
  VAR_12.entrysize = sizeof(TSParserCacheEntry);
  VAR_8 = FUNC_13("Tsearch parser cache", 4,
          &VAR_12, VAR_3 | VAR_2);

  FUNC_1(VAR_7, VAR_6,
           FUNC_8(VAR_8));


  if (!VAR_0)
   FUNC_2();
 }


 if (VAR_9 && VAR_9->prsId == VAR_10 &&
  VAR_9->isvalid)
  return VAR_9;


 VAR_11 = (TSParserCacheEntry *) FUNC_14(VAR_8,
              (void *) &VAR_10,
              VAR_5, ((void*)0));
 if (VAR_11 == ((void*)0) || !VAR_11->isvalid)
 {




  HeapTuple VAR_13;
  Form_pg_ts_parser VAR_14;

  VAR_13 = FUNC_10(VAR_7, FUNC_6(VAR_10));
  if (!FUNC_4(VAR_13))
   FUNC_11(VAR_1, "cache lookup failed for text search parser %u",
     VAR_10);
  VAR_14 = (Form_pg_ts_parser) FUNC_3(VAR_13);




  if (!FUNC_7(VAR_14->prsstart))
   FUNC_11(VAR_1, "text search parser %u has no prsstart method", VAR_10);
  if (!FUNC_7(VAR_14->prstoken))
   FUNC_11(VAR_1, "text search parser %u has no prstoken method", VAR_10);
  if (!FUNC_7(VAR_14->prsend))
   FUNC_11(VAR_1, "text search parser %u has no prsend method", VAR_10);

  if (VAR_11 == ((void*)0))
  {
   bool VAR_15;


   VAR_11 = (TSParserCacheEntry *)
    FUNC_14(VAR_8,
       (void *) &VAR_10,
       VAR_4, &VAR_15);
   FUNC_0(!VAR_15);
  }

  FUNC_5(VAR_11, 0, sizeof(TSParserCacheEntry));
  VAR_11->prsId = VAR_10;
  VAR_11->startOid = VAR_14->prsstart;
  VAR_11->tokenOid = VAR_14->prstoken;
  VAR_11->endOid = VAR_14->prsend;
  VAR_11->headlineOid = VAR_14->prsheadline;
  VAR_11->lextypeOid = VAR_14->prslextype;

  FUNC_9(VAR_13);

  FUNC_12(VAR_11->startOid, &VAR_11->prsstart, VAR_0);
  FUNC_12(VAR_11->tokenOid, &VAR_11->prstoken, VAR_0);
  FUNC_12(VAR_11->endOid, &VAR_11->prsend, VAR_0);
  if (FUNC_7(VAR_11->headlineOid))
   FUNC_12(VAR_11->headlineOid, &VAR_11->prsheadline,
        VAR_0);

  VAR_11->isvalid = 1;
 }

 VAR_9 = VAR_11;

 return VAR_11;
}
