
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__** children; } ;
typedef TYPE_1__ Node ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(Node *VAR_0, int VAR_1)
{
    if (!VAR_0)
        return;
    for (int VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
        FUNC_1(VAR_0->children[VAR_2], VAR_1);
    FUNC_0(VAR_0);
}
