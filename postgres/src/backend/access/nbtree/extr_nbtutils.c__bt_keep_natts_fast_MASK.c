
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_3__ {int attlen; int attbyval; } ;
typedef int Relation ;
typedef int IndexTuple ;
typedef TYPE_1__* Form_pg_attribute ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int,int ,int*) ;

int
FUNC_5(Relation VAR_0, IndexTuple VAR_1, IndexTuple VAR_2)
{
 TupleDesc VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = FUNC_0(VAR_0);
 int VAR_5;

 VAR_5 = 1;
 for (int VAR_6 = 1; VAR_6 <= VAR_4; VAR_6++)
 {
  Datum VAR_7,
     VAR_8;
  bool VAR_9,
     VAR_10;
  Form_pg_attribute VAR_11;

  VAR_7 = FUNC_4(VAR_1, VAR_6, VAR_3, &VAR_9);
  VAR_8 = FUNC_4(VAR_2, VAR_6, VAR_3, &VAR_10);
  VAR_11 = FUNC_2(VAR_3, VAR_6 - 1);

  if (VAR_9 != VAR_10)
   break;

  if (!VAR_9 &&
   !FUNC_3(VAR_7, VAR_8, VAR_11->attbyval, VAR_11->attlen))
   break;

  VAR_5++;
 }

 return VAR_5;
}
