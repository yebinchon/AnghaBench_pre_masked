
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_12__ {TYPE_1__* ops; } ;
struct TYPE_11__ {size_t table_index; TYPE_4__* view; } ;
struct TYPE_10__ {int tables; } ;
struct TYPE_9__ {scalar_t__ (* fetch_int ) (TYPE_4__*,scalar_t__,scalar_t__,scalar_t__*) ;} ;
typedef TYPE_2__ MSIWHEREVIEW ;
typedef TYPE_3__ JOINTABLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,TYPE_2__*,scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__**) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,scalar_t__,scalar_t__,scalar_t__*) ;

__attribute__((used)) static UINT FUNC_4( struct tagMSIVIEW *VAR_2, UINT VAR_3, UINT VAR_4, UINT *VAR_5 )
{
    MSIWHEREVIEW *VAR_6 = (MSIWHEREVIEW*)VAR_2;
    JOINTABLE *VAR_7;
    UINT *VAR_8;
    UINT VAR_9;

    FUNC_0("%p %d %d %p\n", VAR_6, VAR_3, VAR_4, VAR_5 );

    if( !VAR_6->tables )
        return VAR_0;

    VAR_9 = FUNC_1(VAR_6, VAR_3, &VAR_8);
    if (VAR_9 != VAR_1)
        return VAR_9;

    VAR_7 = FUNC_2(VAR_6, VAR_4, &VAR_4);
    if (!VAR_7)
        return VAR_0;

    return VAR_7->view->ops->fetch_int(VAR_7->view, VAR_8[VAR_7->table_index], VAR_4, VAR_5);
}
