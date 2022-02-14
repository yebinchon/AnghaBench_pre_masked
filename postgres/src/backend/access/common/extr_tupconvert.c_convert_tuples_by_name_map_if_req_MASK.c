
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_10__ {scalar_t__ attlen; scalar_t__ attalign; scalar_t__ attisdropped; } ;
struct TYPE_9__ {int natts; } ;
typedef TYPE_2__* Form_pg_attribute ;
typedef int AttrNumber ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int) ;
 int* FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (int*) ;

AttrNumber *
FUNC_3(TupleDesc VAR_0,
          TupleDesc VAR_1)
{
 AttrNumber *VAR_2;
 int VAR_3 = VAR_1->natts;
 int VAR_4;
 bool VAR_5;


 VAR_2 = FUNC_1(VAR_0, VAR_1);





 if (VAR_0->natts == VAR_1->natts)
 {
  VAR_5 = 1;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  {
   Form_pg_attribute VAR_6;
   Form_pg_attribute VAR_7;

   if (VAR_2[VAR_4] == (VAR_4 + 1))
    continue;






   VAR_6 = FUNC_0(VAR_0, VAR_4);
   VAR_7 = FUNC_0(VAR_1, VAR_4);
   if (VAR_2[VAR_4] == 0 &&
    VAR_6->attisdropped &&
    VAR_6->attlen == VAR_7->attlen &&
    VAR_6->attalign == VAR_7->attalign)
    continue;

   VAR_5 = 0;
   break;
  }
 }
 else
  VAR_5 = 0;

 if (VAR_5)
 {

  FUNC_2(VAR_2);
  return ((void*)0);
 }
 else
  return VAR_2;
}
