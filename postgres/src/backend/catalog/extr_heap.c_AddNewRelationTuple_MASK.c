
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* TransactionId ;
struct TYPE_10__ {int relpages; int reltuples; int relispartition; void* reloftype; void* reltype; void* relowner; void* relminmxid; void* relfrozenxid; int relallvisible; } ;
struct TYPE_9__ {TYPE_1__* rd_att; TYPE_3__* rd_rel; } ;
struct TYPE_8__ {void* tdtypeid; } ;
typedef TYPE_2__* Relation ;
typedef void* Oid ;
typedef TYPE_3__* Form_pg_class ;
typedef int Datum ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*,void*,int ,int ) ;






__attribute__((used)) static void
FUNC_1(Relation VAR_0,
     Relation VAR_1,
     Oid VAR_2,
     Oid VAR_3,
     Oid VAR_4,
     Oid VAR_5,
     char VAR_6,
     TransactionId VAR_7,
     TransactionId VAR_8,
     Datum VAR_9,
     Datum VAR_10)
{
 Form_pg_class VAR_11;





 VAR_11 = VAR_1->rd_rel;

 switch (VAR_6)
 {
  case 130:
  case 131:
  case 132:
  case 128:

   VAR_11->relpages = 0;
   VAR_11->reltuples = 0;
   VAR_11->relallvisible = 0;
   break;
  case 129:

   VAR_11->relpages = 1;
   VAR_11->reltuples = 1;
   VAR_11->relallvisible = 0;
   break;
  default:

   VAR_11->relpages = 0;
   VAR_11->reltuples = 0;
   VAR_11->relallvisible = 0;
   break;
 }

 VAR_11->relfrozenxid = VAR_7;
 VAR_11->relminmxid = VAR_8;
 VAR_11->relowner = VAR_5;
 VAR_11->reltype = VAR_3;
 VAR_11->reloftype = VAR_4;


 VAR_11->relispartition = 0;

 VAR_1->rd_att->tdtypeid = VAR_3;


 FUNC_0(VAR_0, VAR_1, VAR_2,
        VAR_9, VAR_10);
}
