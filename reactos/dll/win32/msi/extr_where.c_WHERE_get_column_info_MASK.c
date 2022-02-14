
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_11__ {TYPE_1__* ops; } ;
struct TYPE_10__ {TYPE_4__* view; } ;
struct TYPE_9__ {int tables; } ;
struct TYPE_8__ {int (* get_column_info ) (TYPE_4__*,int ,int *,int *,int *,int *) ;} ;
typedef TYPE_2__ MSIWHEREVIEW ;
typedef int LPCWSTR ;
typedef TYPE_3__ JOINTABLE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_2__*,int ,int *,int *,int *,int *) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int ,int *) ;
 int FUNC_2 (TYPE_4__*,int ,int *,int *,int *,int *) ;

__attribute__((used)) static UINT FUNC_3( struct tagMSIVIEW *VAR_1, UINT VAR_2, LPCWSTR *VAR_3,
                                   UINT *VAR_4, BOOL *VAR_5, LPCWSTR *VAR_6 )
{
    MSIWHEREVIEW *VAR_7 = (MSIWHEREVIEW*)VAR_1;
    JOINTABLE *VAR_8;

    FUNC_0("%p %d %p %p %p %p\n", VAR_7, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6 );

    if(!VAR_7->tables)
         return VAR_0;

    VAR_8 = FUNC_1(VAR_7, VAR_2, &VAR_2);
    if (!VAR_8)
        return VAR_0;

    return VAR_8->view->ops->get_column_info(VAR_8->view, VAR_2, VAR_3,
                                            VAR_4, VAR_5, VAR_6);
}
