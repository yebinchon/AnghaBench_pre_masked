
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct expr {int dummy; } ;
typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_20__ {TYPE_1__* ops; } ;
struct TYPE_19__ {struct TYPE_19__* next; scalar_t__ table_index; scalar_t__ col_count; TYPE_5__* view; } ;
struct TYPE_18__ {int hdr; } ;
struct TYPE_15__ {int * ops; } ;
struct TYPE_17__ {TYPE_10__ view; TYPE_4__* tables; int table_count; int col_count; struct expr* cond; TYPE_3__* db; } ;
struct TYPE_16__ {scalar_t__ (* get_dimensions ) (TYPE_5__*,int *,scalar_t__*) ;int (* delete ) (TYPE_5__*) ;} ;
typedef TYPE_2__ MSIWHEREVIEW ;
typedef int MSIVIEW ;
typedef TYPE_3__ MSIDATABASE ;
typedef char* LPWSTR ;
typedef TYPE_4__ JOINTABLE ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_3__*,char*,TYPE_5__**) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,struct expr*,scalar_t__*) ;
 int FUNC_5 (TYPE_10__*) ;
 int FUNC_6 (char*) ;
 TYPE_4__* FUNC_7 (int) ;
 TYPE_2__* FUNC_8 (int) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (int *) ;
 char* FUNC_11 (char*,char) ;
 scalar_t__ FUNC_12 (TYPE_5__*,int *,scalar_t__*) ;
 int FUNC_13 (TYPE_5__*) ;
 int VAR_4 ;

UINT FUNC_14( MSIDATABASE *VAR_5, MSIVIEW **VAR_6, LPWSTR VAR_7,
                       struct expr *VAR_8 )
{
    MSIWHEREVIEW *VAR_9 = ((void*)0);
    UINT VAR_10, VAR_11 = 0;
    WCHAR *VAR_12;

    FUNC_2("(%s)\n", FUNC_6(VAR_7) );

    VAR_9 = FUNC_8( sizeof *VAR_9 );
    if( !VAR_9 )
        return VAR_1;


    VAR_9->view.ops = &VAR_4;
    FUNC_10( &VAR_5->hdr );
    VAR_9->db = VAR_5;
    VAR_9->cond = VAR_8;

    while (*VAR_7)
    {
        JOINTABLE *VAR_13;

        if ((VAR_12 = FUNC_11(VAR_7, ' ')))
            *VAR_12 = '\0';

        VAR_13 = FUNC_7(sizeof(JOINTABLE));
        if (!VAR_13)
        {
            VAR_10 = VAR_2;
            goto end;
        }

        VAR_10 = FUNC_1(VAR_5, VAR_7, &VAR_13->view);
        if (VAR_10 != VAR_3)
        {
            FUNC_3("can't create table: %s\n", FUNC_6(VAR_7));
            FUNC_9(VAR_13);
            VAR_10 = VAR_0;
            goto end;
        }

        VAR_10 = VAR_13->view->ops->get_dimensions(VAR_13->view, ((void*)0),
                                             &VAR_13->col_count);
        if (VAR_10 != VAR_3)
        {
            FUNC_0("can't get table dimensions\n");
            VAR_13->view->ops->delete(VAR_13->view);
            FUNC_9(VAR_13);
            goto end;
        }

        VAR_9->col_count += VAR_13->col_count;
        VAR_13->table_index = VAR_9->table_count++;

        VAR_13->next = VAR_9->tables;
        VAR_9->tables = VAR_13;

        if (!VAR_12)
            break;

        VAR_7 = VAR_12 + 1;
    }

    if( VAR_8 )
    {
        VAR_10 = FUNC_4( VAR_9, VAR_8, &VAR_11 );
        if( VAR_10 != VAR_3 )
            goto end;
        if( !VAR_11 ) {
            VAR_10 = VAR_1;
            goto end;
        }
    }

    *VAR_6 = (MSIVIEW*) VAR_9;

    return VAR_3;
end:
    FUNC_5(&VAR_9->view);

    return VAR_10;
}
