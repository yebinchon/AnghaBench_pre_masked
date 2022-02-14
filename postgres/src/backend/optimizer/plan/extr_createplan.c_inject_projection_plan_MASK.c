
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int parallel_safe; } ;
typedef TYPE_1__ Plan ;
typedef int List ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int *,TYPE_1__*) ;

__attribute__((used)) static Plan *
FUNC_2(Plan *VAR_0, List *VAR_1, bool VAR_2)
{
 Plan *VAR_3;

 VAR_3 = (Plan *) FUNC_1(VAR_1, ((void*)0), VAR_0);
 FUNC_0(VAR_3, VAR_0);
 VAR_3->parallel_safe = VAR_2;

 return VAR_3;
}
