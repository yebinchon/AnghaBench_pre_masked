
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int skey ;
typedef int key ;
struct TYPE_12__ {scalar_t__ reltablespace; scalar_t__ relfilenode; scalar_t__ oid; } ;
struct TYPE_11__ {scalar_t__ relid; } ;
struct TYPE_10__ {scalar_t__ relfilenode; scalar_t__ reltablespace; } ;
struct TYPE_9__ {void* sk_argument; } ;
typedef int SysScanDesc ;
typedef TYPE_1__ ScanKeyData ;
typedef TYPE_2__ RelfilenodeMapKey ;
typedef TYPE_3__ RelfilenodeMapEntry ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_4__* Form_pg_class ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 scalar_t__ VAR_7 ;
 void* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_7 (int ,char*,...) ;
 TYPE_3__* FUNC_8 (int *,void*,int ,int*) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 int VAR_10 ;
 int FUNC_10 (int ,int ,int,int *,int,TYPE_1__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;

Oid
FUNC_15(Oid VAR_11, Oid VAR_12)
{
 RelfilenodeMapKey VAR_13;
 RelfilenodeMapEntry *VAR_14;
 bool VAR_15;
 SysScanDesc VAR_16;
 Relation VAR_17;
 HeapTuple VAR_18;
 ScanKeyData VAR_19[2];
 Oid VAR_20;

 if (VAR_9 == ((void*)0))
  FUNC_3();


 if (VAR_11 == VAR_7)
  VAR_11 = 0;

 FUNC_4(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.reltablespace = VAR_11;
 VAR_13.relfilenode = VAR_12;
 VAR_14 = FUNC_8(VAR_9, (void *) &VAR_13, VAR_5, &VAR_15);

 if (VAR_15)
  return VAR_14->relid;




 VAR_20 = VAR_6;

 if (VAR_11 == VAR_3)
 {



  VAR_20 = FUNC_6(VAR_12, 1);
 }
 else
 {






  VAR_17 = FUNC_14(VAR_8, VAR_0);


  FUNC_9(VAR_19, VAR_10, sizeof(VAR_19));


  VAR_19[0].sk_argument = FUNC_5(VAR_11);
  VAR_19[1].sk_argument = FUNC_5(VAR_12);

  VAR_16 = FUNC_10(VAR_17,
           VAR_1,
           1,
           ((void*)0),
           2,
           VAR_19);

  VAR_15 = 0;

  while (FUNC_2(VAR_18 = FUNC_12(VAR_16)))
  {
   Form_pg_class VAR_21 = (Form_pg_class) FUNC_1(VAR_18);

   if (VAR_15)
    FUNC_7(VAR_2,
      "unexpected duplicate for tablespace %u, relfilenode %u",
      VAR_11, VAR_12);
   VAR_15 = 1;

   FUNC_0(VAR_21->reltablespace == VAR_11);
   FUNC_0(VAR_21->relfilenode == VAR_12);
   VAR_20 = VAR_21->oid;
  }

  FUNC_11(VAR_16);
  FUNC_13(VAR_17, VAR_0);


  if (!VAR_15)
   VAR_20 = FUNC_6(VAR_12, 0);
 }






 VAR_14 = FUNC_8(VAR_9, (void *) &VAR_13, VAR_4, &VAR_15);
 if (VAR_15)
  FUNC_7(VAR_2, "corrupted hashtable");
 VAR_14->relid = VAR_20;

 return VAR_20;
}
