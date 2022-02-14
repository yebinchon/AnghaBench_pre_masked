
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ reltablespace; scalar_t__ relfilenode; } ;
struct TYPE_10__ {scalar_t__ spcNode; scalar_t__ relNode; int dbNode; } ;
struct TYPE_11__ {int rd_id; TYPE_2__ rd_node; TYPE_1__* rd_rel; } ;
struct TYPE_9__ {scalar_t__ reltablespace; int relisshared; scalar_t__ relfilenode; int relkind; } ;
typedef TYPE_3__* Relation ;
typedef int HeapTuple ;
typedef TYPE_4__* Form_pg_class ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int VAR_3 ;
 scalar_t__ FUNC_3 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (scalar_t__,int,int) ;
 int FUNC_11 (int ,char*,scalar_t__,...) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(Relation VAR_6)
{

 if (!FUNC_5(VAR_6->rd_rel->relkind))
  return;

 if (VAR_6->rd_rel->reltablespace)
  VAR_6->rd_node.spcNode = VAR_6->rd_rel->reltablespace;
 else
  VAR_6->rd_node.spcNode = VAR_5;
 if (VAR_6->rd_node.spcNode == VAR_2)
  VAR_6->rd_node.dbNode = VAR_3;
 else
  VAR_6->rd_node.dbNode = VAR_4;

 if (VAR_6->rd_rel->relfilenode)
 {
  if (FUNC_2()
   && FUNC_8(VAR_6)
   && FUNC_3())
  {
   HeapTuple VAR_7;
   Form_pg_class VAR_8;

   VAR_7 = FUNC_10(FUNC_7(VAR_6),
          FUNC_7(VAR_6) != VAR_0,
          1);
   if (!FUNC_1(VAR_7))
    FUNC_11(VAR_1, "could not find pg_class entry for %u",
      FUNC_7(VAR_6));
   VAR_8 = (Form_pg_class) FUNC_0(VAR_7);

   VAR_6->rd_rel->reltablespace = VAR_8->reltablespace;
   VAR_6->rd_rel->relfilenode = VAR_8->relfilenode;
   FUNC_12(VAR_7);
  }

  VAR_6->rd_node.relNode = VAR_6->rd_rel->relfilenode;
 }
 else
 {

  VAR_6->rd_node.relNode =
   FUNC_9(VAR_6->rd_id,
          VAR_6->rd_rel->relisshared);
  if (!FUNC_4(VAR_6->rd_node.relNode))
   FUNC_11(VAR_1, "could not find relation mapping for relation \"%s\", OID %u",
     FUNC_6(VAR_6), VAR_6->rd_id);
 }
}
