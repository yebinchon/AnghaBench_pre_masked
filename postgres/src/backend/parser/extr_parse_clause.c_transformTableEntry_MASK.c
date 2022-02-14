
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int inh; int alias; } ;
typedef TYPE_1__ RangeVar ;
typedef int RangeTblEntry ;
typedef int ParseState ;


 int * FUNC_0 (int *,TYPE_1__*,int ,int ,int) ;

__attribute__((used)) static RangeTblEntry *
FUNC_1(ParseState *VAR_0, RangeVar *VAR_1)
{
 RangeTblEntry *VAR_2;


 VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_1->alias, VAR_1->inh, 1);

 return VAR_2;
}
