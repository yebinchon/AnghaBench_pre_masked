
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int (* match_fn_t ) (int *,int *) ;
struct TYPE_4__ {int * data; struct TYPE_4__* next; } ;
typedef TYPE_1__ list_item_t ;
typedef int * LPVOID ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static LPVOID
FUNC_1(list_item_t **VAR_0, match_fn_t VAR_1, LPVOID VAR_2)
{
    LPVOID VAR_3 = ((void*)0);
    list_item_t **VAR_4;

    for (VAR_4 = VAR_0; *VAR_4; VAR_4 = &(*VAR_4)->next)
    {
        list_item_t *VAR_5 = *VAR_4;
        if (!VAR_1(VAR_5->data, VAR_2))
        {
            continue;
        }


        *VAR_4 = VAR_5->next;
        VAR_3 = VAR_5->data;
        FUNC_0(VAR_5);
        break;
    }
    return VAR_3;
}
