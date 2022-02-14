
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; int data; } ;
typedef TYPE_1__ node ;
typedef int GraphicsState ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(GraphicsState VAR_0, node ** VAR_1)
{
    node * VAR_2 = FUNC_1(FUNC_0(), 0, sizeof(node));

    VAR_2->data = VAR_0;
    VAR_2->next = *VAR_1;
    *VAR_1 = VAR_2;
}
