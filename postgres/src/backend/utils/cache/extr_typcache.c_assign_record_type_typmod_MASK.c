
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ctl ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_14__ {int keysize; int entrysize; int match; int hash; } ;
struct TYPE_13__ {TYPE_1__* tupdesc; } ;
struct TYPE_12__ {scalar_t__ tdtypeid; size_t tdtypmod; int tdrefcount; } ;
typedef TYPE_2__ RecordCacheEntry ;
typedef int MemoryContext ;
typedef TYPE_3__ HASHCTL ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__** VAR_7 ;
 int * VAR_8 ;
 scalar_t__* VAR_9 ;
 int FUNC_5 (size_t) ;
 TYPE_1__* FUNC_6 (TYPE_1__*) ;
 int * FUNC_7 (char*,int,TYPE_3__*,int) ;
 scalar_t__ FUNC_8 (int *,void*,int ,int*) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;

void
FUNC_9(TupleDesc VAR_13)
{
 RecordCacheEntry *VAR_14;
 TupleDesc VAR_15;
 bool VAR_16;
 MemoryContext VAR_17;

 FUNC_0(VAR_13->tdtypeid == VAR_6);

 if (VAR_8 == ((void*)0))
 {

  HASHCTL VAR_18;

  FUNC_3(&VAR_18, 0, sizeof(VAR_18));
  VAR_18.keysize = sizeof(TupleDesc);
  VAR_18.entrysize = sizeof(RecordCacheEntry);
  VAR_18.hash = VAR_11;
  VAR_18.match = VAR_10;
  VAR_8 = FUNC_7("Record information cache", 64,
           &VAR_18,
           VAR_2 | VAR_4 | VAR_1);


  if (!VAR_0)
   FUNC_1();
 }


 VAR_14 = (RecordCacheEntry *) FUNC_8(VAR_8,
            (void *) &VAR_13,
            VAR_3, &VAR_16);
 if (VAR_16 && VAR_14->tupdesc != ((void*)0))
 {
  VAR_13->tdtypmod = VAR_14->tupdesc->tdtypmod;
  return;
 }


 VAR_14->tupdesc = ((void*)0);
 VAR_17 = FUNC_4(VAR_0);


 VAR_15 = FUNC_6(VAR_13);
 if (VAR_15 == ((void*)0))
 {

  VAR_15 = FUNC_2(VAR_13);
  VAR_15->tdrefcount = 1;
  VAR_15->tdtypmod = VAR_5++;
 }
 FUNC_5(VAR_15->tdtypmod);
 VAR_7[VAR_15->tdtypmod] = VAR_15;
 VAR_14->tupdesc = VAR_15;


 VAR_9[VAR_15->tdtypmod] = ++VAR_12;


 VAR_13->tdtypmod = VAR_15->tdtypmod;

 FUNC_4(VAR_17);
}
