
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_20__ {TYPE_1__* ops; } ;
struct TYPE_19__ {TYPE_2__* ops; } ;
struct TYPE_18__ {TYPE_5__* table; TYPE_6__* sv; } ;
struct TYPE_17__ {int hdr; } ;
struct TYPE_16__ {scalar_t__ (* get_dimensions ) (TYPE_5__*,int *,scalar_t__*) ;scalar_t__ (* get_column_info ) (TYPE_5__*,scalar_t__,int *,int *,int *,int *) ;} ;
struct TYPE_15__ {scalar_t__ (* get_column_info ) (TYPE_6__*,scalar_t__,int *,int *,int *,int *) ;} ;
typedef TYPE_3__ MSIRECORD ;
typedef TYPE_4__ MSIINSERTVIEW ;
typedef int LPCWSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*,scalar_t__,TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_5__*,int *,scalar_t__*) ;
 scalar_t__ FUNC_7 (TYPE_6__*,scalar_t__,int *,int *,int *,int *) ;
 scalar_t__ FUNC_8 (TYPE_5__*,scalar_t__,int *,int *,int *,int *) ;

__attribute__((used)) static UINT FUNC_9(MSIINSERTVIEW *VAR_2, MSIRECORD **VAR_3)
{
    MSIRECORD *VAR_4;
    UINT VAR_5, VAR_6;
    UINT VAR_7, VAR_8, VAR_9;
    LPCWSTR VAR_10, VAR_11;

    VAR_7 = VAR_2->table->ops->get_dimensions(VAR_2->table, ((void*)0), &VAR_5);
    if (VAR_7 != VAR_1)
        return VAR_7;

    VAR_6 = FUNC_2(*VAR_3);




    if (VAR_5 == VAR_6 && FUNC_3(VAR_2, VAR_5))
        return VAR_1;

    VAR_4 = FUNC_0(VAR_5);
    if (!VAR_4)
        return VAR_0;

    for (VAR_9 = 1; VAR_9 <= VAR_6; VAR_9++)
    {
        VAR_7 = VAR_2->sv->ops->get_column_info(VAR_2->sv, VAR_9, &VAR_10, ((void*)0), ((void*)0), ((void*)0));
        if (VAR_7 != VAR_1)
            goto err;

        for (VAR_8 = 1; VAR_8 <= VAR_5; VAR_8++)
        {
            VAR_7 = VAR_2->table->ops->get_column_info(VAR_2->table, VAR_8, &VAR_11, ((void*)0),
                                                ((void*)0), ((void*)0));
            if (VAR_7 != VAR_1)
                goto err;

            if (!FUNC_5( VAR_10, VAR_11 ))
            {
                FUNC_1(*VAR_3, VAR_9, VAR_4, VAR_8);
                break;
            }
        }
    }
    FUNC_4(&(*VAR_3)->hdr);
    *VAR_3 = VAR_4;
    return VAR_1;

err:
    FUNC_4(&VAR_4->hdr);
    return VAR_7;
}
