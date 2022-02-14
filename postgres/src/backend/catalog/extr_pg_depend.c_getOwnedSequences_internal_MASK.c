
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ classid; scalar_t__ objsubid; scalar_t__ refobjsubid; char deptype; int objid; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_depend ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int * VAR_11 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int ,int,int *,int,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static List *
FUNC_12(Oid VAR_14, AttrNumber VAR_15, char VAR_16)
{
 List *VAR_17 = VAR_11;
 Relation VAR_18;
 ScanKeyData VAR_19[3];
 SysScanDesc VAR_20;
 HeapTuple VAR_21;

 VAR_18 = FUNC_11(VAR_8, VAR_0);

 FUNC_4(&VAR_19[0],
    VAR_1,
    VAR_4, VAR_10,
    FUNC_3(VAR_13));
 FUNC_4(&VAR_19[1],
    VAR_2,
    VAR_4, VAR_10,
    FUNC_3(VAR_14));
 if (VAR_15)
  FUNC_4(&VAR_19[2],
     VAR_3,
     VAR_4, VAR_9,
     FUNC_2(VAR_15));

 VAR_20 = FUNC_7(VAR_18, VAR_7, 1,
         ((void*)0), VAR_15 ? 3 : 2, VAR_19);

 while (FUNC_1(VAR_21 = FUNC_9(VAR_20)))
 {
  Form_pg_depend VAR_22 = (Form_pg_depend) FUNC_0(VAR_21);






  if (VAR_22->classid == VAR_13 &&
   VAR_22->objsubid == 0 &&
   VAR_22->refobjsubid != 0 &&
   (VAR_22->deptype == VAR_5 || VAR_22->deptype == VAR_6) &&
   FUNC_5(VAR_22->objid) == VAR_12)
  {
   if (!VAR_16 || VAR_22->deptype == VAR_16)
    VAR_17 = FUNC_6(VAR_17, VAR_22->objid);
  }
 }

 FUNC_8(VAR_20);

 FUNC_10(VAR_18, VAR_0);

 return VAR_17;
}
