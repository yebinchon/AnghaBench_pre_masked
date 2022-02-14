
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int hash_ctl ;
typedef int TableScanDesc ;
struct TYPE_4__ {int keysize; int entrysize; int hcxt; } ;
typedef int Snapshot ;
typedef int Relation ;
typedef int Oid ;
typedef int * HeapTuple ;
typedef int HTAB ;
typedef TYPE_1__ HASHCTL ;
typedef int AttrNumber ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (char*,int ,TYPE_1__*,int) ;
 int FUNC_7 (int *,void*,int ,int *) ;
 int FUNC_8 (int *,int ,int ,int*) ;
 int * FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 int FUNC_11 (int ,int ,int ,int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static HTAB *
FUNC_15(Oid VAR_8, AttrNumber VAR_9)
{
 HTAB *VAR_10;
 HASHCTL VAR_11;
 Relation VAR_12;
 TableScanDesc VAR_13;
 HeapTuple VAR_14;
 Snapshot VAR_15;

 FUNC_10(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.keysize = sizeof(Oid);
 VAR_11.entrysize = sizeof(Oid);
 VAR_11.hcxt = VAR_1;
 VAR_10 = FUNC_6("Temporary table of OIDs",
        VAR_7,
        &VAR_11,
        VAR_5 | VAR_3 | VAR_4);

 VAR_12 = FUNC_14(VAR_8, VAR_0);
 VAR_15 = FUNC_3(FUNC_2());
 VAR_13 = FUNC_11(VAR_12, VAR_15, 0, ((void*)0));
 while ((VAR_14 = FUNC_9(VAR_13, VAR_2)) != ((void*)0))
 {
  Oid VAR_16;
  bool VAR_17;

  VAR_16 = FUNC_8(VAR_14, VAR_9, FUNC_4(VAR_12), &VAR_17);
  FUNC_0(!VAR_17);

  FUNC_1();

  (void) FUNC_7(VAR_10, (void *) &VAR_16, VAR_6, ((void*)0));
 }
 FUNC_13(VAR_13);
 FUNC_5(VAR_15);
 FUNC_12(VAR_12, VAR_0);

 return VAR_10;
}
