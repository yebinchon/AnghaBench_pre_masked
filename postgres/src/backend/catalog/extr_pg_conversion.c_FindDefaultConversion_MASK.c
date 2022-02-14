
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_8__ {int n_members; TYPE_1__** members; } ;
struct TYPE_7__ {int conproc; scalar_t__ condefault; } ;
struct TYPE_6__ {int tuple; } ;
typedef int Oid ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_conversion ;
typedef TYPE_3__ CatCList ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int ,int ,int ,int ) ;

Oid
FUNC_5(Oid VAR_2, int32 VAR_3, int32 VAR_4)
{
 CatCList *VAR_5;
 HeapTuple VAR_6;
 Form_pg_conversion VAR_7;
 Oid VAR_8 = VAR_1;
 int VAR_9;

 VAR_5 = FUNC_4(VAR_0,
          FUNC_2(VAR_2),
          FUNC_1(VAR_3),
          FUNC_1(VAR_4));

 for (VAR_9 = 0; VAR_9 < VAR_5->n_members; VAR_9++)
 {
  VAR_6 = &VAR_5->members[VAR_9]->tuple;
  VAR_7 = (Form_pg_conversion) FUNC_0(VAR_6);
  if (VAR_7->condefault)
  {
   VAR_8 = VAR_7->conproc;
   break;
  }
 }
 FUNC_3(VAR_5);
 return VAR_8;
}
