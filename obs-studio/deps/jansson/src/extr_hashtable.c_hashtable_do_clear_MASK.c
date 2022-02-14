
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int value; } ;
typedef TYPE_1__ pair_t ;
struct TYPE_9__ {struct TYPE_9__* next; } ;
typedef TYPE_2__ list_t ;
struct TYPE_10__ {TYPE_2__ list; } ;
typedef TYPE_3__ hashtable_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(hashtable_t *VAR_0)
{
    list_t *VAR_1, *VAR_2;
    pair_t *VAR_3;

    for(VAR_1 = VAR_0->list.next; VAR_1 != &VAR_0->list; VAR_1 = VAR_2)
    {
        VAR_2 = VAR_1->next;
        VAR_3 = FUNC_2(VAR_1);
        FUNC_0(VAR_3->value);
        FUNC_1(VAR_3);
    }
}
