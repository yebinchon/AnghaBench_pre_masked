
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ attnum; char attstorage; int atttypid; } ;
struct TYPE_8__ {int t_self; } ;
typedef int Relation ;
typedef int ObjectAddress ;
typedef int Node ;
typedef int LOCKMODE ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_attribute ;
typedef scalar_t__ AttrNumber ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ,int ,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_9 (int ,char const*) ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,char const*,...) ;
 char const* FUNC_14 (int ) ;
 int FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (char*,char*) ;
 char* FUNC_17 (int *) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ) ;

__attribute__((used)) static ObjectAddress
FUNC_20(Relation VAR_8, const char *VAR_9, Node *VAR_10, LOCKMODE VAR_11)
{
 char *VAR_12;
 char VAR_13;
 Relation VAR_14;
 HeapTuple VAR_15;
 Form_pg_attribute VAR_16;
 AttrNumber VAR_17;
 ObjectAddress VAR_18;

 FUNC_0(FUNC_5(VAR_10, VAR_7));
 VAR_12 = FUNC_17(VAR_10);

 if (FUNC_16(VAR_12, "plain") == 0)
  VAR_13 = 'p';
 else if (FUNC_16(VAR_12, "external") == 0)
  VAR_13 = 'e';
 else if (FUNC_16(VAR_12, "extended") == 0)
  VAR_13 = 'x';
 else if (FUNC_16(VAR_12, "main") == 0)
  VAR_13 = 'm';
 else
 {
  FUNC_11(VAR_4,
    (FUNC_12(VAR_2),
     FUNC_13("invalid storage type \"%s\"",
      VAR_12)));
  VAR_13 = 0;
 }

 VAR_14 = FUNC_19(VAR_0, VAR_6);

 VAR_15 = FUNC_9(FUNC_8(VAR_8), VAR_9);

 if (!FUNC_3(VAR_15))
  FUNC_11(VAR_4,
    (FUNC_12(VAR_3),
     FUNC_13("column \"%s\" of relation \"%s\" does not exist",
      VAR_9, FUNC_7(VAR_8))));
 VAR_16 = (Form_pg_attribute) FUNC_2(VAR_15);

 VAR_17 = VAR_16->attnum;
 if (VAR_17 <= 0)
  FUNC_11(VAR_4,
    (FUNC_12(VAR_1),
     FUNC_13("cannot alter system column \"%s\"",
      VAR_9)));





 if (VAR_13 == 'p' || FUNC_10(VAR_16->atttypid))
  VAR_16->attstorage = VAR_13;
 else
  FUNC_11(VAR_4,
    (FUNC_12(VAR_1),
     FUNC_13("column data type %s can only have storage PLAIN",
      FUNC_14(VAR_16->atttypid))));

 FUNC_1(VAR_14, &VAR_15->t_self, VAR_15);

 FUNC_4(VAR_5,
         FUNC_8(VAR_8),
         VAR_16->attnum);

 FUNC_15(VAR_15);

 FUNC_18(VAR_14, VAR_6);

 FUNC_6(VAR_18, VAR_5,
      FUNC_8(VAR_8), VAR_17);
 return VAR_18;
}
