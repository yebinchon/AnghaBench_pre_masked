
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int string; } ;
struct TYPE_6__ {int size; TYPE_1__* data; int string_length; } ;
struct TYPE_5__ {scalar_t__ worth; } ;
typedef TYPE_2__ Pool ;
typedef int PlannerInfo ;
typedef TYPE_3__ Chromosome ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;

void
FUNC_3(PlannerInfo *VAR_3, Pool *VAR_4)
{
 Chromosome *VAR_5 = (Chromosome *) VAR_4->data;
 int VAR_6;
 int VAR_7 = 0;
 VAR_6 = 0;
 while (VAR_6 < VAR_4->size)
 {
  FUNC_2(VAR_3, VAR_5[VAR_6].string, VAR_4->string_length);
  VAR_4->data[VAR_6].worth = FUNC_1(VAR_3, VAR_5[VAR_6].string,
          VAR_4->string_length);
  if (VAR_4->data[VAR_6].worth < VAR_0)
   VAR_6++;
  else
  {
   VAR_7++;
   if (VAR_6 == 0 && VAR_7 >= 10000)
    FUNC_0(VAR_2, "geqo failed to make a valid plan");
  }
 }






}
