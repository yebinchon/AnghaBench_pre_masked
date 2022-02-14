
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int relname; scalar_t__ schemaname; } ;
typedef TYPE_1__ RangeVar ;
typedef int RangeTblEntry ;
typedef int ParseState ;
typedef int Index ;
typedef int CommonTableExpr ;


 int * FUNC_0 (int *,int *,int ,TYPE_1__*,int) ;
 int * FUNC_1 (int *,TYPE_1__*,int) ;
 int * FUNC_2 (int *,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static RangeTblEntry *
FUNC_4(ParseState *VAR_0, RangeVar *VAR_1)
{
 CommonTableExpr *VAR_2;
 Index VAR_3;
 RangeTblEntry *VAR_4;




 if (VAR_1->schemaname)
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_0, VAR_1->relname, &VAR_3);
 if (VAR_2)
  VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3, VAR_1, 1);
 else if (FUNC_3(VAR_0, VAR_1->relname))
  VAR_4 = FUNC_1(VAR_0, VAR_1, 1);
 else
  VAR_4 = ((void*)0);

 return VAR_4;
}
