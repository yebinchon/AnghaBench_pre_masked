
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int column; TYPE_3__* table; } ;
union ext_column {TYPE_1__ parsed; } ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {TYPE_2__* ops; } ;
struct TYPE_7__ {size_t table_index; TYPE_4__* view; } ;
struct TYPE_6__ {scalar_t__ (* fetch_int ) (TYPE_4__*,scalar_t__ const,int ,scalar_t__*) ;} ;
typedef TYPE_3__ JOINTABLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*,scalar_t__ const,int ,scalar_t__*) ;

__attribute__((used)) static inline UINT FUNC_1(const union ext_column *VAR_2, const UINT VAR_3[], UINT *VAR_4)
{
    JOINTABLE *VAR_5 = VAR_2->parsed.table;

    if( VAR_3[VAR_5->table_index] == VAR_1 )
    {
        *VAR_4 = 1;
        return VAR_0;
    }
    return VAR_5->view->ops->fetch_int(VAR_5->view, VAR_3[VAR_5->table_index],
                                        VAR_2->parsed.column, VAR_4);
}
