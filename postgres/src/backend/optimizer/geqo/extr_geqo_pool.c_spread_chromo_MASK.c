
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ worth; int string; } ;
struct TYPE_8__ {scalar_t__ worth; int string; } ;
struct TYPE_7__ {int size; TYPE_5__* data; int string_length; } ;
typedef TYPE_1__ Pool ;
typedef int PlannerInfo ;
typedef TYPE_2__ Chromosome ;


 int FUNC_0 (int *,TYPE_5__*,TYPE_2__*,int ) ;

void
FUNC_1(PlannerInfo *VAR_0, Chromosome *VAR_1, Pool *VAR_2)
{
 int VAR_3,
    VAR_4,
    VAR_5;
 int VAR_6,
    VAR_7;
 Chromosome VAR_8,
    VAR_9;


 if (VAR_1->worth > VAR_2->data[VAR_2->size - 1].worth)
  return;



 VAR_3 = 0;
 VAR_4 = VAR_2->size / 2;
 VAR_5 = VAR_2->size - 1;
 VAR_7 = -1;

 while (VAR_7 == -1)
 {


  if (VAR_1->worth <= VAR_2->data[VAR_3].worth)
   VAR_7 = VAR_3;
  else if (VAR_1->worth == VAR_2->data[VAR_4].worth)
   VAR_7 = VAR_4;
  else if (VAR_1->worth == VAR_2->data[VAR_5].worth)
   VAR_7 = VAR_5;
  else if (VAR_5 - VAR_3 <= 1)
   VAR_7 = VAR_5;







  else if (VAR_1->worth < VAR_2->data[VAR_4].worth)
  {
   VAR_5 = VAR_4;
   VAR_4 = VAR_3 + ((VAR_5 - VAR_3) / 2);
  }
  else
  {
   VAR_3 = VAR_4;
   VAR_4 = VAR_3 + ((VAR_5 - VAR_3) / 2);
  }
 }
 FUNC_0(VAR_0, &VAR_2->data[VAR_2->size - 1], VAR_1, VAR_2->string_length);

 VAR_8.string = VAR_2->data[VAR_2->size - 1].string;
 VAR_8.worth = VAR_2->data[VAR_2->size - 1].worth;

 for (VAR_6 = VAR_7; VAR_6 < VAR_2->size; VAR_6++)
 {
  VAR_9.string = VAR_2->data[VAR_6].string;
  VAR_9.worth = VAR_2->data[VAR_6].worth;

  VAR_2->data[VAR_6].string = VAR_8.string;
  VAR_2->data[VAR_6].worth = VAR_8.worth;

  VAR_8.string = VAR_9.string;
  VAR_8.worth = VAR_9.worth;
 }
}
