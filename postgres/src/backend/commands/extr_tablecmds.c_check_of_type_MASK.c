
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ typtype; int oid; int typrelid; } ;
struct TYPE_7__ {TYPE_1__* rd_rel; } ;
struct TYPE_6__ {scalar_t__ relkind; } ;
typedef TYPE_2__* Relation ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_type ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_8 (int ,int ) ;

void
FUNC_9(HeapTuple VAR_6)
{
 Form_pg_type VAR_7 = (Form_pg_type) FUNC_1(VAR_6);
 bool VAR_8 = 0;

 if (VAR_7->typtype == VAR_5)
 {
  Relation VAR_9;

  FUNC_0(FUNC_2(VAR_7->typrelid));
  VAR_9 = FUNC_8(VAR_7->typrelid, VAR_0);
  VAR_8 = (VAR_9->rd_rel->relkind == VAR_4);






  FUNC_7(VAR_9, VAR_3);
 }
 if (!VAR_8)
  FUNC_3(VAR_2,
    (FUNC_4(VAR_1),
     FUNC_5("type %s is not a composite type",
      FUNC_6(VAR_7->oid))));
}
