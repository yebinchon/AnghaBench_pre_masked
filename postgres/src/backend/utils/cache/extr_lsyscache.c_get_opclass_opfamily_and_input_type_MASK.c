
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int opcintype; int opcfamily; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_opclass ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

bool
FUNC_5(Oid VAR_1, Oid *VAR_2, Oid *VAR_3)
{
 HeapTuple VAR_4;
 Form_pg_opclass VAR_5;

 VAR_4 = FUNC_4(VAR_0, FUNC_2(VAR_1));
 if (!FUNC_1(VAR_4))
  return 0;

 VAR_5 = (Form_pg_opclass) FUNC_0(VAR_4);

 *VAR_2 = VAR_5->opcfamily;
 *VAR_3 = VAR_5->opcintype;

 FUNC_3(VAR_4);

 return 1;
}
