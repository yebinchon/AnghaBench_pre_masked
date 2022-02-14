
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_6__* sortKeys; } ;
typedef TYPE_1__ Tuplesortstate ;
struct TYPE_10__ {scalar_t__ abbrev_converter; } ;
struct TYPE_9__ {int isnull1; int tuple; int datum1; } ;
typedef TYPE_2__ SortTuple ;


 int FUNC_0 (int ,int ,int ,int ,TYPE_6__*) ;
 int FUNC_1 (int ,int ,int ,int ,TYPE_6__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(const SortTuple *VAR_0, const SortTuple *VAR_1, Tuplesortstate *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->datum1, VAR_0->isnull1,
          VAR_1->datum1, VAR_1->isnull1,
          VAR_2->sortKeys);
 if (VAR_3 != 0)
  return VAR_3;



 if (VAR_2->sortKeys->abbrev_converter)
  VAR_3 = FUNC_0(FUNC_2(VAR_0->tuple), VAR_0->isnull1,
            FUNC_2(VAR_1->tuple), VAR_1->isnull1,
            VAR_2->sortKeys);

 return VAR_3;
}
