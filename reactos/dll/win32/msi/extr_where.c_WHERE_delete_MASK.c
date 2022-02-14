
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_12__ {TYPE_1__* ops; } ;
struct TYPE_11__ {TYPE_2__* db; struct TYPE_11__* order_info; scalar_t__ table_count; struct TYPE_11__* tables; struct TYPE_11__* next; TYPE_5__* view; } ;
struct TYPE_10__ {int hdr; } ;
struct TYPE_9__ {int (* delete ) (TYPE_5__*) ;} ;
typedef TYPE_3__ MSIWHEREVIEW ;
typedef TYPE_3__ JOINTABLE ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_5__*) ;

__attribute__((used)) static UINT FUNC_5( struct tagMSIVIEW *VAR_1 )
{
    MSIWHEREVIEW *VAR_2 = (MSIWHEREVIEW*)VAR_1;
    JOINTABLE *VAR_3 = VAR_2->tables;

    FUNC_0("%p\n", VAR_2 );

    while(VAR_3)
    {
        JOINTABLE *VAR_4;

        VAR_3->view->ops->delete(VAR_3->view);
        VAR_3->view = ((void*)0);
        VAR_4 = VAR_3->next;
        FUNC_2(VAR_3);
        VAR_3 = VAR_4;
    }
    VAR_2->tables = ((void*)0);
    VAR_2->table_count = 0;

    FUNC_1(VAR_2);

    FUNC_2(VAR_2->order_info);
    VAR_2->order_info = ((void*)0);

    FUNC_3( &VAR_2->db->hdr );
    FUNC_2( VAR_2 );

    return VAR_0;
}
