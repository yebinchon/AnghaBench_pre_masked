
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * datums; } ;
struct TYPE_6__ {size_t varno; int expr; } ;
typedef TYPE_1__ PLpgSQL_stmt_assign ;
typedef TYPE_2__ PLpgSQL_execstate ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(PLpgSQL_execstate *VAR_1, PLpgSQL_stmt_assign *VAR_2)
{
 FUNC_0(VAR_2->varno >= 0);

 FUNC_1(VAR_1, VAR_1->datums[VAR_2->varno], VAR_2->expr);

 return VAR_0;
}
