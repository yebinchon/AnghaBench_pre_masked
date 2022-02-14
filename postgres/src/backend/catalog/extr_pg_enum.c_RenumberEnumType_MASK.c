
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int float4 ;
struct TYPE_10__ {int enumsortorder; } ;
struct TYPE_9__ {int t_self; } ;
typedef int Relation ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_enum ;


 int FUNC_0 (int ,int *,TYPE_1__*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(Relation VAR_0, HeapTuple *VAR_1, int VAR_2)
{
 int VAR_3;






 for (VAR_3 = VAR_2 - 1; VAR_3 >= 0; VAR_3--)
 {
  HeapTuple VAR_4;
  Form_pg_enum VAR_5;
  float4 VAR_6;

  VAR_4 = FUNC_3(VAR_1[VAR_3]);
  VAR_5 = (Form_pg_enum) FUNC_2(VAR_4);

  VAR_6 = VAR_3 + 1;
  if (VAR_5->enumsortorder != VAR_6)
  {
   VAR_5->enumsortorder = VAR_6;

   FUNC_0(VAR_0, &VAR_4->t_self, VAR_4);
  }

  FUNC_4(VAR_4);
 }


 FUNC_1();
}
