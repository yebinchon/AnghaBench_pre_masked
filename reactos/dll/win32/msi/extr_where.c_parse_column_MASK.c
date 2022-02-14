
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int column; int table; } ;
struct TYPE_10__ {int column; TYPE_5__* table; } ;
union ext_column {TYPE_3__ unparsed; TYPE_2__ parsed; } ;
typedef int UINT ;
struct TYPE_14__ {TYPE_1__* ops; } ;
struct TYPE_13__ {int col_count; TYPE_6__* view; struct TYPE_13__* next; } ;
struct TYPE_12__ {TYPE_5__* tables; } ;
struct TYPE_9__ {int (* get_column_info ) (TYPE_6__*,int,int *,int*,int *,int *) ;} ;
typedef TYPE_4__ MSIWHEREVIEW ;
typedef int LPCWSTR ;
typedef TYPE_5__ JOINTABLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_6__*,int,int *,int*,int *,int *) ;
 int FUNC_4 (TYPE_6__*,int,int *,int*,int *,int *) ;

__attribute__((used)) static UINT FUNC_5(MSIWHEREVIEW *VAR_2, union ext_column *VAR_3,
                         UINT *VAR_4)
{
    JOINTABLE *VAR_5 = VAR_2->tables;
    UINT VAR_6, VAR_7;

    do
    {
        LPCWSTR VAR_8;

        if (VAR_3->unparsed.table)
        {
            VAR_7 = VAR_5->view->ops->get_column_info(VAR_5->view, 1, ((void*)0), ((void*)0),
                                                  ((void*)0), &VAR_8);
            if (VAR_7 != VAR_1)
                return VAR_7;
            if (FUNC_2(VAR_8, VAR_3->unparsed.table) != 0)
                continue;
        }

        for(VAR_6 = 1; VAR_6 <= VAR_5->col_count; VAR_6++)
        {
            LPCWSTR VAR_9;

            VAR_7 = VAR_5->view->ops->get_column_info(VAR_5->view, VAR_6, &VAR_9, VAR_4,
                                                  ((void*)0), ((void*)0));
            if(VAR_7 != VAR_1 )
                return VAR_7;

            if(FUNC_2(VAR_9, VAR_3->unparsed.column))
                continue;
            VAR_3->parsed.column = VAR_6;
            VAR_3->parsed.table = VAR_5;
            return VAR_1;
        }
    }
    while ((VAR_5 = VAR_5->next));

    FUNC_0("Couldn't find column %s.%s\n", FUNC_1( VAR_3->unparsed.table ), FUNC_1( VAR_3->unparsed.column ) );
    return VAR_0;
}
