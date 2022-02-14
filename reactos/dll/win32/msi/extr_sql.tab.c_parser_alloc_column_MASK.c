
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * next; scalar_t__ type; int * val; void* column; void* table; } ;
typedef TYPE_1__ column_info ;
typedef void* LPCWSTR ;


 TYPE_1__* FUNC_0 (void*,int) ;

__attribute__((used)) static column_info *FUNC_1( void *VAR_0, LPCWSTR VAR_1, LPCWSTR VAR_2 )
{
    column_info *VAR_3;

    VAR_3 = FUNC_0( VAR_0, sizeof (*VAR_3) );
    if( VAR_3 )
    {
        VAR_3->table = VAR_1;
        VAR_3->column = VAR_2;
        VAR_3->val = ((void*)0);
        VAR_3->type = 0;
        VAR_3->next = ((void*)0);
    }

    return VAR_3;
}
