
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef size_t UINT ;
struct TYPE_6__ {TYPE_2__* table; } ;
struct TYPE_5__ {size_t col_count; int ref_count; TYPE_1__* colinfo; } ;
struct TYPE_4__ {int type; int ref_count; } ;
typedef TYPE_3__ MSITABLEVIEW ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,struct tagMSIVIEW*,int ) ;

__attribute__((used)) static UINT FUNC_2(struct tagMSIVIEW *VAR_1)
{
    MSITABLEVIEW *VAR_2 = (MSITABLEVIEW*)VAR_1;
    UINT VAR_3;

    FUNC_1("%p %d\n", VAR_1, VAR_2->table->ref_count);

    for (VAR_3 = 0; VAR_3 < VAR_2->table->col_count; VAR_3++)
    {
        if (VAR_2->table->colinfo[VAR_3].type & VAR_0)
            FUNC_0(&VAR_2->table->colinfo[VAR_3].ref_count);
    }

    return FUNC_0(&VAR_2->table->ref_count);
}
