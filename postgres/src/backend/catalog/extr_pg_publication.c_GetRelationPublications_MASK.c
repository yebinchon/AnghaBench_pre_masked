
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int n_members; TYPE_1__** members; } ;
struct TYPE_7__ {int prpubid; } ;
struct TYPE_6__ {int tuple; } ;
typedef int Oid ;
typedef int List ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_publication_rel ;
typedef TYPE_3__ CatCList ;


 scalar_t__ FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int ,int ) ;
 int * FUNC_4 (int *,int ) ;

List *
FUNC_5(Oid VAR_2)
{
 List *VAR_3 = VAR_0;
 CatCList *VAR_4;
 int VAR_5;


 VAR_4 = FUNC_3(VAR_1,
          FUNC_1(VAR_2));
 for (VAR_5 = 0; VAR_5 < VAR_4->n_members; VAR_5++)
 {
  HeapTuple VAR_6 = &VAR_4->members[VAR_5]->tuple;
  Oid VAR_7 = ((Form_pg_publication_rel) FUNC_0(VAR_6))->prpubid;

  VAR_3 = FUNC_4(VAR_3, VAR_7);
 }

 FUNC_2(VAR_4);

 return VAR_3;
}
