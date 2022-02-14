
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef size_t UINT ;
struct TYPE_6__ {scalar_t__ ref_count; size_t col_count; int entry; int row_count; TYPE_1__* colinfo; } ;
struct TYPE_5__ {TYPE_3__* table; } ;
struct TYPE_4__ {int type; scalar_t__ ref_count; int number; int tablename; } ;
typedef TYPE_2__ MSITABLEVIEW ;
typedef scalar_t__ INT ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 int VAR_1 ;
 int FUNC_1 (struct tagMSIVIEW*) ;
 size_t FUNC_2 (struct tagMSIVIEW*,int ,int ) ;
 int FUNC_3 (char*,struct tagMSIVIEW*,scalar_t__) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static UINT FUNC_6(struct tagMSIVIEW *VAR_2)
{
    MSITABLEVIEW *VAR_3 = (MSITABLEVIEW*)VAR_2;
    INT VAR_4 = VAR_3->table->ref_count;
    UINT VAR_5, VAR_6;

    FUNC_3("%p %d\n", VAR_2, VAR_4);

    for (VAR_5 = 0; VAR_5 < VAR_3->table->col_count; VAR_5++)
    {
        if (VAR_3->table->colinfo[VAR_5].type & VAR_1)
        {
            VAR_4 = FUNC_0(&VAR_3->table->colinfo[VAR_5].ref_count);
            if (VAR_4 == 0)
            {
                VAR_6 = FUNC_2(VAR_2, VAR_3->table->colinfo[VAR_5].tablename,
                                        VAR_3->table->colinfo[VAR_5].number);
                if (VAR_6 != VAR_0)
                    break;
            }
        }
    }

    VAR_4 = FUNC_0(&VAR_3->table->ref_count);
    if (VAR_4 == 0)
    {
        if (!VAR_3->table->row_count)
        {
            FUNC_5(&VAR_3->table->entry);
            FUNC_4(VAR_3->table);
            FUNC_1(VAR_2);
        }
    }

    return VAR_4;
}
