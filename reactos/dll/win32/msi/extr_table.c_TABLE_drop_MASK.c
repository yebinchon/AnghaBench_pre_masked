
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_19__ {size_t col_count; int entry; TYPE_1__* colinfo; } ;
struct TYPE_18__ {int hdr; } ;
struct TYPE_17__ {TYPE_9__* table; int db; int name; } ;
struct TYPE_16__ {TYPE_2__* ops; } ;
struct TYPE_15__ {int (* delete ) (TYPE_3__*) ;} ;
struct TYPE_14__ {int number; int tablename; } ;
typedef TYPE_3__ MSIVIEW ;
typedef TYPE_4__ MSITABLEVIEW ;
typedef TYPE_5__ MSIRECORD ;
typedef size_t INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_5__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,int,int ) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_3__**) ;
 scalar_t__ FUNC_3 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct tagMSIVIEW*,int ,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_9__*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (TYPE_4__*,TYPE_5__*,scalar_t__*,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__*) ;
 int VAR_2 ;

__attribute__((used)) static UINT FUNC_12(struct tagMSIVIEW *VAR_3)
{
    MSITABLEVIEW *VAR_4 = (MSITABLEVIEW*)VAR_3;
    MSIVIEW *VAR_5 = ((void*)0);
    MSIRECORD *VAR_6 = ((void*)0);
    UINT VAR_7, VAR_8;
    INT VAR_9;

    FUNC_5("dropping table %s\n", FUNC_6(VAR_4->name));

    for (VAR_9 = VAR_4->table->col_count - 1; VAR_9 >= 0; VAR_9--)
    {
        VAR_7 = FUNC_4(VAR_3, VAR_4->table->colinfo[VAR_9].tablename,
                                VAR_4->table->colinfo[VAR_9].number);
        if (VAR_7 != VAR_1)
            return VAR_7;
    }

    VAR_6 = FUNC_0(1);
    if (!VAR_6)
        return VAR_0;

    FUNC_1(VAR_6, 1, VAR_4->name);

    VAR_7 = FUNC_2(VAR_4->db, VAR_2, &VAR_5);
    if (VAR_7 != VAR_1)
    {
        FUNC_10(&VAR_6->hdr);
        return VAR_7;
    }

    VAR_7 = FUNC_9((MSITABLEVIEW *)VAR_5, VAR_6, &VAR_8, ((void*)0));
    if (VAR_7 != VAR_1)
        goto done;

    VAR_7 = FUNC_3(VAR_5, VAR_8);
    if (VAR_7 != VAR_1)
        goto done;

    FUNC_8(&VAR_4->table->entry);
    FUNC_7(VAR_4->table);

done:
    FUNC_10(&VAR_6->hdr);
    VAR_5->ops->delete(VAR_5);

    return VAR_7;
}
