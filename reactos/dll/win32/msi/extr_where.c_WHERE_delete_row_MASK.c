
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {TYPE_2__* ops; } ;
struct TYPE_8__ {int table_count; TYPE_1__* tables; } ;
struct TYPE_7__ {scalar_t__ (* delete_row ) (TYPE_4__*,scalar_t__) ;} ;
struct TYPE_6__ {TYPE_4__* view; } ;
typedef TYPE_3__ MSIWHEREVIEW ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,struct tagMSIVIEW*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_3__*,scalar_t__,scalar_t__**) ;
 scalar_t__ FUNC_2 (TYPE_4__*,scalar_t__) ;

__attribute__((used)) static UINT FUNC_3(struct tagMSIVIEW *VAR_3, UINT VAR_4)
{
    MSIWHEREVIEW *VAR_5 = (MSIWHEREVIEW *)VAR_3;
    UINT VAR_6;
    UINT *VAR_7;

    FUNC_0("(%p %d)\n", VAR_3, VAR_4);

    if (!VAR_5->tables)
        return VAR_1;

    VAR_6 = FUNC_1(VAR_5, VAR_4, &VAR_7);
    if ( VAR_6 != VAR_2 )
        return VAR_6;

    if (VAR_5->table_count > 1)
        return VAR_0;

    return VAR_5->tables->view->ops->delete_row(VAR_5->tables->view, VAR_7[0]);
}
