
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_8__ {scalar_t__ attisdropped; scalar_t__ atttypid; scalar_t__ atttypmod; scalar_t__ attlen; scalar_t__ attalign; } ;
struct TYPE_7__ {int natts; } ;
typedef TYPE_2__* Form_pg_attribute ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static bool
FUNC_1(TupleDesc VAR_0, TupleDesc VAR_1)
{
 int VAR_2;


 if (VAR_1->natts != VAR_0->natts)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->natts; VAR_2++)
 {
  Form_pg_attribute VAR_3 = FUNC_0(VAR_1, VAR_2);
  Form_pg_attribute VAR_4 = FUNC_0(VAR_0, VAR_2);

  if (VAR_3->attisdropped != VAR_4->attisdropped)
   return 0;
  if (!VAR_3->attisdropped)
  {

   if (VAR_3->atttypid != VAR_4->atttypid ||
    (VAR_3->atttypmod >= 0 &&
     VAR_3->atttypmod != VAR_4->atttypmod))
    return 0;
  }
  else
  {

   if (VAR_3->attlen != VAR_4->attlen ||
    VAR_3->attalign != VAR_4->attalign)
    return 0;
  }
 }
 return 1;
}
