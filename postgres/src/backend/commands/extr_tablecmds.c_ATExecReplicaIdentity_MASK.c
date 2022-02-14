
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ int16 ;
struct TYPE_25__ {int attname; int attnotnull; } ;
struct TYPE_24__ {int rd_att; TYPE_4__* rd_index; TYPE_2__* rd_indam; TYPE_1__* rd_rel; } ;
struct TYPE_23__ {scalar_t__ identity_type; scalar_t__ name; } ;
struct TYPE_21__ {scalar_t__* values; } ;
struct TYPE_22__ {scalar_t__ indrelid; TYPE_3__ indkey; int indisvalid; int indimmediate; int indisunique; } ;
struct TYPE_20__ {int amcanunique; } ;
struct TYPE_19__ {int relnamespace; } ;
typedef TYPE_5__ ReplicaIdentityStmt ;
typedef TYPE_6__* Relation ;
typedef int Oid ;
typedef int LOCKMODE ;
typedef TYPE_7__* Form_pg_attribute ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_6__*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 scalar_t__ FUNC_4 (TYPE_6__*) ;
 scalar_t__ FUNC_5 (TYPE_6__*) ;
 scalar_t__ FUNC_6 (TYPE_6__*) ;
 int VAR_12 ;
 TYPE_7__* FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,char*,scalar_t__) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,scalar_t__,...) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (TYPE_6__*,int ) ;
 TYPE_6__* FUNC_14 (int ,int ) ;
 int FUNC_15 (TYPE_6__*,scalar_t__,int ,int) ;

__attribute__((used)) static void
FUNC_16(Relation VAR_13, ReplicaIdentityStmt *VAR_14, LOCKMODE VAR_15)
{
 Oid VAR_16;
 Relation VAR_17;
 int VAR_18;

 if (VAR_14->identity_type == VAR_8)
 {
  FUNC_15(VAR_13, VAR_14->identity_type, VAR_5, 1);
  return;
 }
 else if (VAR_14->identity_type == VAR_9)
 {
  FUNC_15(VAR_13, VAR_14->identity_type, VAR_5, 1);
  return;
 }
 else if (VAR_14->identity_type == VAR_11)
 {
  FUNC_15(VAR_13, VAR_14->identity_type, VAR_5, 1);
  return;
 }
 else if (VAR_14->identity_type == VAR_10)
 {
                     ;
 }
 else
  FUNC_8(VAR_4, "unexpected identity type %u", VAR_14->identity_type);



 VAR_16 = FUNC_12(VAR_14->name, VAR_13->rd_rel->relnamespace);
 if (!FUNC_2(VAR_16))
  FUNC_9(VAR_4,
    (FUNC_10(VAR_2),
     FUNC_11("index \"%s\" for table \"%s\" does not exist",
      VAR_14->name, FUNC_5(VAR_13))));

 VAR_17 = FUNC_14(VAR_16, VAR_12);


 if (VAR_17->rd_index == ((void*)0) ||
  VAR_17->rd_index->indrelid != FUNC_6(VAR_13))
  FUNC_9(VAR_4,
    (FUNC_10(VAR_3),
     FUNC_11("\"%s\" is not an index for table \"%s\"",
      FUNC_5(VAR_17),
      FUNC_5(VAR_13))));

 if (!VAR_17->rd_indam->amcanunique ||
  !VAR_17->rd_index->indisunique)
  FUNC_9(VAR_4,
    (FUNC_10(VAR_3),
     FUNC_11("cannot use non-unique index \"%s\" as replica identity",
      FUNC_5(VAR_17))));

 if (!VAR_17->rd_index->indimmediate)
  FUNC_9(VAR_4,
    (FUNC_10(VAR_0),
     FUNC_11("cannot use non-immediate index \"%s\" as replica identity",
      FUNC_5(VAR_17))));

 if (FUNC_3(VAR_17) != VAR_6)
  FUNC_9(VAR_4,
    (FUNC_10(VAR_0),
     FUNC_11("cannot use expression index \"%s\" as replica identity",
      FUNC_5(VAR_17))));

 if (FUNC_4(VAR_17) != VAR_6)
  FUNC_9(VAR_4,
    (FUNC_10(VAR_0),
     FUNC_11("cannot use partial index \"%s\" as replica identity",
      FUNC_5(VAR_17))));

 if (!VAR_17->rd_index->indisvalid)
  FUNC_9(VAR_4,
    (FUNC_10(VAR_0),
     FUNC_11("cannot use invalid index \"%s\" as replica identity",
      FUNC_5(VAR_17))));


 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_17); VAR_18++)
 {
  int16 VAR_19 = VAR_17->rd_index->indkey.values[VAR_18];
  Form_pg_attribute VAR_20;






  if (VAR_19 <= 0)
   FUNC_9(VAR_4,
     (FUNC_10(VAR_1),
      FUNC_11("index \"%s\" cannot be used as replica identity because column %d is a system column",
       FUNC_5(VAR_17), VAR_19)));

  VAR_20 = FUNC_7(VAR_13->rd_att, VAR_19 - 1);
  if (!VAR_20->attnotnull)
   FUNC_9(VAR_4,
     (FUNC_10(VAR_3),
      FUNC_11("index \"%s\" cannot be used as replica identity because column \"%s\" is nullable",
       FUNC_5(VAR_17),
       FUNC_1(VAR_20->attname))));
 }


 FUNC_15(VAR_13, VAR_14->identity_type, VAR_16, 1);

 FUNC_13(VAR_17, VAR_7);
}
