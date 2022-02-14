
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {scalar_t__ col_count; struct TYPE_7__* next; } ;
struct TYPE_6__ {scalar_t__ col_count; TYPE_2__* tables; } ;
typedef TYPE_1__ MSIWHEREVIEW ;
typedef TYPE_2__ JOINTABLE ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static JOINTABLE *FUNC_1(MSIWHEREVIEW *VAR_0, UINT VAR_1, UINT *VAR_2)
{
    JOINTABLE *VAR_3 = VAR_0->tables;

    if(VAR_1 == 0 || VAR_1 > VAR_0->col_count)
         return ((void*)0);

    while (VAR_1 > VAR_3->col_count)
    {
        VAR_1 -= VAR_3->col_count;
        VAR_3 = VAR_3->next;
        FUNC_0(VAR_3);
    }

    *VAR_2 = VAR_1;
    return VAR_3;
}
