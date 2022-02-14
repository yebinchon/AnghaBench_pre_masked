
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {TYPE_1__* ops; } ;
struct TYPE_7__ {TYPE_3__* table; } ;
struct TYPE_6__ {scalar_t__ (* get_dimensions ) (TYPE_3__*,int *,scalar_t__*) ;scalar_t__ (* get_column_info ) (TYPE_3__*,scalar_t__,int *,scalar_t__*,int *,int *) ;} ;
typedef int MSIRECORD ;
typedef TYPE_2__ MSIINSERTVIEW ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int *,scalar_t__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,scalar_t__,int *,scalar_t__*,int *,int *) ;

__attribute__((used)) static BOOL FUNC_3(MSIINSERTVIEW *VAR_4, MSIRECORD *VAR_5)
{
    UINT VAR_6, VAR_7, VAR_8, VAR_9;

    VAR_6 = VAR_4->table->ops->get_dimensions( VAR_4->table, ((void*)0), &VAR_8 );
    if (VAR_6 != VAR_0)
        return VAR_1;

    for (VAR_7 = 1; VAR_7 <= VAR_8; VAR_7++)
    {
        VAR_6 = VAR_4->table->ops->get_column_info(VAR_4->table, VAR_7, ((void*)0), &VAR_9,
                                            ((void*)0), ((void*)0));
        if (VAR_6 != VAR_0)
            return VAR_1;

        if (!(VAR_9 & VAR_2))
            continue;

        if (FUNC_0(VAR_5, VAR_7))
            return VAR_3;
    }

    return VAR_1;
}
