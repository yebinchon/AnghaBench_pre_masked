
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int oid; } ;
struct TYPE_4__ {scalar_t__ objectSubId; int objectId; int classId; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_attrdef ;
typedef int DropBehavior ;
typedef int AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 int FUNC_7 (int ,int ,int,int *,int,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;

void
FUNC_12(Oid VAR_10, AttrNumber VAR_11,
      DropBehavior VAR_12, bool VAR_13, bool VAR_14)
{
 Relation VAR_15;
 ScanKeyData VAR_16[2];
 SysScanDesc VAR_17;
 HeapTuple VAR_18;
 bool VAR_19 = 0;

 VAR_15 = FUNC_11(VAR_3, VAR_9);

 FUNC_4(&VAR_16[0],
    VAR_1,
    VAR_4, VAR_7,
    FUNC_3(VAR_10));
 FUNC_4(&VAR_16[1],
    VAR_0,
    VAR_4, VAR_6,
    FUNC_2(VAR_11));

 VAR_17 = FUNC_7(VAR_15, VAR_2, 1,
         ((void*)0), 2, VAR_16);


 while (FUNC_1(VAR_18 = FUNC_9(VAR_17)))
 {
  ObjectAddress VAR_20;
  Form_pg_attrdef VAR_21 = (Form_pg_attrdef) FUNC_0(VAR_18);

  VAR_20.classId = VAR_3;
  VAR_20.objectId = VAR_21->oid;
  VAR_20.objectSubId = 0;

  FUNC_6(&VAR_20, VAR_12,
      VAR_14 ? VAR_8 : 0);

  VAR_19 = 1;
 }

 FUNC_8(VAR_17);
 FUNC_10(VAR_15, VAR_9);

 if (VAR_13 && !VAR_19)
  FUNC_5(VAR_5, "could not find attrdef tuple for relation %u attnum %d",
    VAR_10, VAR_11);
}
