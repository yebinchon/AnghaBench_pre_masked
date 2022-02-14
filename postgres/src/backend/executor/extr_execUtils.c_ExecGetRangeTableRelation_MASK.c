
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int es_range_table_size; int ** es_relations; } ;
struct TYPE_6__ {scalar_t__ rtekind; scalar_t__ rellockmode; int relid; } ;
typedef int * Relation ;
typedef TYPE_1__ RangeTblEntry ;
typedef int Index ;
typedef TYPE_2__ EState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int) ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_3 (int,TYPE_2__*) ;
 int * FUNC_4 (int ,scalar_t__) ;

Relation
FUNC_5(EState *VAR_3, Index VAR_4)
{
 Relation VAR_5;

 FUNC_0(VAR_4 > 0 && VAR_4 <= VAR_3->es_range_table_size);

 VAR_5 = VAR_3->es_relations[VAR_4 - 1];
 if (VAR_5 == ((void*)0))
 {

  RangeTblEntry *VAR_6 = FUNC_3(VAR_4, VAR_3);

  FUNC_0(VAR_6->rtekind == VAR_2);

  if (!FUNC_2())
  {







   VAR_5 = FUNC_4(VAR_6->relid, VAR_1);
   FUNC_0(VAR_6->rellockmode == VAR_0 ||
       FUNC_1(VAR_5, VAR_6->rellockmode, 0));
  }
  else
  {





   VAR_5 = FUNC_4(VAR_6->relid, VAR_6->rellockmode);
  }

  VAR_3->es_relations[VAR_4 - 1] = VAR_5;
 }

 return VAR_5;
}
