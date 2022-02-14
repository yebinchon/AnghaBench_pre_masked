
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int n_members; TYPE_1__** members; } ;
struct TYPE_7__ {scalar_t__ opcfamily; scalar_t__ opcintype; } ;
struct TYPE_6__ {int tuple; } ;
typedef scalar_t__ Oid ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_opclass ;
typedef TYPE_3__ CatCList ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int ,int ) ;

bool
FUNC_4(Oid VAR_2, Oid VAR_3)
{
 bool VAR_4 = 0;
 CatCList *VAR_5;
 int VAR_6;






 VAR_5 = FUNC_3(VAR_1, FUNC_1(VAR_0));

 for (VAR_6 = 0; VAR_6 < VAR_5->n_members; VAR_6++)
 {
  HeapTuple VAR_7 = &VAR_5->members[VAR_6]->tuple;
  Form_pg_opclass VAR_8 = (Form_pg_opclass) FUNC_0(VAR_7);

  if (VAR_8->opcfamily == VAR_2 &&
   VAR_8->opcintype == VAR_3)
  {
   VAR_4 = 1;
   break;
  }
 }

 FUNC_2(VAR_5);

 return VAR_4;
}
