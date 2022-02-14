
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; struct TYPE_4__* next; } ;
typedef TYPE_1__ list_item_t ;
typedef int LPVOID ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static DWORD
FUNC_1(list_item_t **VAR_2, LPVOID VAR_3)
{
    list_item_t *VAR_4 = FUNC_0(sizeof(list_item_t));
    if (VAR_4 == ((void*)0))
    {
        return VAR_0;
    }

    VAR_4->next = *VAR_2;
    VAR_4->data = VAR_3;

    *VAR_2 = VAR_4;
    return VAR_1;
}
