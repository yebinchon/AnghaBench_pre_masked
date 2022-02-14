
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* next; } ;
struct TYPE_10__ {int table_count; TYPE_2__* tables; scalar_t__ cond; } ;
typedef TYPE_1__ MSIWHEREVIEW ;
typedef TYPE_2__ JOINTABLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__**,TYPE_2__*) ;
 TYPE_2__** FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,TYPE_2__**,int ,TYPE_2__**) ;

__attribute__((used)) static JOINTABLE **FUNC_3( MSIWHEREVIEW *VAR_2 )
{
    JOINTABLE *VAR_3;
    JOINTABLE **VAR_4;

    VAR_4 = FUNC_1( (VAR_2->table_count + 1) * sizeof(*VAR_4) );

    if (VAR_2->cond)
    {
        VAR_3 = ((void*)0);
        FUNC_2(VAR_2->cond, VAR_4, VAR_0, &VAR_3);
        VAR_3 = ((void*)0);
        FUNC_2(VAR_2->cond, VAR_4, VAR_1, &VAR_3);
    }

    VAR_3 = VAR_2->tables;
    while (VAR_3)
    {
        FUNC_0(VAR_4, VAR_3);
        VAR_3 = VAR_3->next;
    }
    return VAR_4;
}
