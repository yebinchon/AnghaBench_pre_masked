
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {scalar_t__ num_rows; int * data; scalar_t__ num_rows_allocated; scalar_t__ fill; } ;
typedef scalar_t__ UINT ;


 int FUNC_0 (struct table*,scalar_t__) ;
 int FUNC_1 (int *) ;

void FUNC_2( struct table *VAR_0 )
{
    UINT VAR_1;

    if (!VAR_0->data) return;

    for (VAR_1 = 0; VAR_1 < VAR_0->num_rows; VAR_1++) FUNC_0( VAR_0, VAR_1 );
    if (VAR_0->fill)
    {
        VAR_0->num_rows = 0;
        VAR_0->num_rows_allocated = 0;
        FUNC_1( VAR_0->data );
        VAR_0->data = ((void*)0);
    }
}
