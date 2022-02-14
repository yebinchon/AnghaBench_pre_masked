
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef char const* int16 ;
struct TYPE_24__ {int attnum; int attstattarget; int attname; } ;
struct TYPE_23__ {int t_self; } ;
struct TYPE_22__ {TYPE_3__* rd_index; TYPE_1__* rd_rel; } ;
struct TYPE_20__ {scalar_t__* values; } ;
struct TYPE_21__ {int indnkeyatts; TYPE_2__ indkey; } ;
struct TYPE_19__ {scalar_t__ relkind; } ;
typedef TYPE_4__* Relation ;
typedef int ObjectAddress ;
typedef int Node ;
typedef int LOCKMODE ;
typedef TYPE_5__* HeapTuple ;
typedef TYPE_6__* Form_pg_attribute ;
typedef int AttrNumber ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*,int *,TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *,int ) ;
 char const* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_5__* FUNC_10 (int ,char const*) ;
 TYPE_5__* FUNC_11 (int ,char const*) ;
 int VAR_10 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_19 (int ,int ) ;

__attribute__((used)) static ObjectAddress
FUNC_20(Relation VAR_11, const char *VAR_12, int16 VAR_13, Node *VAR_14, LOCKMODE VAR_15)
{
 int VAR_16;
 Relation VAR_17;
 HeapTuple VAR_18;
 Form_pg_attribute VAR_19;
 AttrNumber VAR_20;
 ObjectAddress VAR_21;

 FUNC_0(FUNC_5(VAR_14, VAR_5));
 VAR_16 = FUNC_17(VAR_14);




 if (VAR_16 < -1)
 {
  FUNC_12(VAR_4,
    (FUNC_13(VAR_2),
     FUNC_15("statistics target %d is too low",
      VAR_16)));
 }
 else if (VAR_16 > 10000)
 {
  VAR_16 = 10000;
  FUNC_12(VAR_10,
    (FUNC_13(VAR_2),
     FUNC_15("lowering statistics target to %d",
      VAR_16)));
 }

 VAR_17 = FUNC_19(VAR_0, VAR_9);

 if (VAR_12)
 {
  VAR_18 = FUNC_10(FUNC_9(VAR_11), VAR_12);

  if (!FUNC_3(VAR_18))
   FUNC_12(VAR_4,
     (FUNC_13(VAR_3),
      FUNC_15("column \"%s\" of relation \"%s\" does not exist",
       VAR_12, FUNC_8(VAR_11))));
 }
 else
 {
  VAR_18 = FUNC_11(FUNC_9(VAR_11), VAR_13);

  if (!FUNC_3(VAR_18))
   FUNC_12(VAR_4,
     (FUNC_13(VAR_3),
      FUNC_15("column number %d of relation \"%s\" does not exist",
       VAR_13, FUNC_8(VAR_11))));
 }

 VAR_19 = (Form_pg_attribute) FUNC_2(VAR_18);

 VAR_20 = VAR_19->attnum;
 if (VAR_20 <= 0)
  FUNC_12(VAR_4,
    (FUNC_13(VAR_1),
     FUNC_15("cannot alter system column \"%s\"",
      VAR_12)));

 if (VAR_11->rd_rel->relkind == VAR_6 ||
  VAR_11->rd_rel->relkind == VAR_7)
 {
  if (VAR_20 > VAR_11->rd_index->indnkeyatts)
   FUNC_12(VAR_4,
     (FUNC_13(VAR_1),
      FUNC_15("cannot alter statistics on included column \"%s\" of index \"%s\"",
       FUNC_6(VAR_19->attname), FUNC_8(VAR_11))));
  else if (VAR_11->rd_index->indkey.values[VAR_20 - 1] != 0)
   FUNC_12(VAR_4,
     (FUNC_13(VAR_1),
      FUNC_15("cannot alter statistics on non-expression column \"%s\" of index \"%s\"",
       FUNC_6(VAR_19->attname), FUNC_8(VAR_11)),
      FUNC_14("Alter statistics on table column instead.")));
 }

 VAR_19->attstattarget = VAR_16;

 FUNC_1(VAR_17, &VAR_18->t_self, VAR_18);

 FUNC_4(VAR_8,
         FUNC_9(VAR_11),
         VAR_19->attnum);
 FUNC_7(VAR_21, VAR_8,
      FUNC_9(VAR_11), VAR_20);
 FUNC_16(VAR_18);

 FUNC_18(VAR_17, VAR_9);

 return VAR_21;
}
