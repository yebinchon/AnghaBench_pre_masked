
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t found_varno; scalar_t__* datums; } ;
typedef int PLpgSQL_var ;
typedef TYPE_1__ PLpgSQL_execstate ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int *,int ,int,int) ;

__attribute__((used)) static void
FUNC_2(PLpgSQL_execstate *VAR_0, bool VAR_1)
{
 PLpgSQL_var *VAR_2;

 VAR_2 = (PLpgSQL_var *) (VAR_0->datums[VAR_0->found_varno]);
 FUNC_1(VAR_0, VAR_2, FUNC_0(VAR_1), 0, 0);
}
