
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_16__ {TYPE_1__* ops; } ;
struct TYPE_15__ {int hdr; } ;
struct TYPE_14__ {scalar_t__* cols; TYPE_4__* table; } ;
struct TYPE_13__ {scalar_t__ (* get_row ) (TYPE_4__*,scalar_t__,TYPE_3__**) ;scalar_t__ (* modify ) (TYPE_4__*,int ,TYPE_3__*,scalar_t__) ;} ;
typedef TYPE_2__ MSISELECTVIEW ;
typedef TYPE_3__ MSIRECORD ;
typedef int LPCWSTR ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_3__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct tagMSIVIEW*,scalar_t__,int *,scalar_t__*,int *,int *) ;
 scalar_t__ FUNC_5 (struct tagMSIVIEW*,int *,scalar_t__*) ;
 int FUNC_6 (TYPE_3__*,scalar_t__,int*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,scalar_t__,int ,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (TYPE_4__*,scalar_t__,TYPE_3__**) ;
 scalar_t__ FUNC_10 (TYPE_4__*,int ,TYPE_3__*,scalar_t__) ;

__attribute__((used)) static UINT FUNC_11(struct tagMSIVIEW *VAR_4, MSIRECORD *VAR_5, UINT VAR_6)
{
    MSISELECTVIEW *VAR_7 = (MSISELECTVIEW*)VAR_4;
    UINT VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    LPCWSTR VAR_14;
    MSIRECORD *VAR_15;

    VAR_8 = FUNC_5(VAR_4, ((void*)0), &VAR_10);
    if (VAR_8 != VAR_1)
        return VAR_8;

    VAR_8 = VAR_7->table->ops->get_row(VAR_7->table, VAR_6 - 1, &VAR_15);
    if (VAR_8 != VAR_1)
        return VAR_8;

    for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
    {
        VAR_11 = VAR_7->cols[VAR_9];

        VAR_8 = FUNC_4(VAR_4, VAR_9 + 1, ((void*)0), &VAR_12, ((void*)0), ((void*)0));
        if (VAR_8 != VAR_1)
        {
            FUNC_0("Failed to get column information: %d\n", VAR_8);
            goto done;
        }

        if (FUNC_1(VAR_12))
        {
            FUNC_0("Cannot modify binary data!\n");
            VAR_8 = VAR_0;
            goto done;
        }
        else if (VAR_12 & VAR_3)
        {
            int VAR_16;
            VAR_14 = FUNC_6( VAR_5, VAR_9 + 1, &VAR_16 );
            VAR_8 = FUNC_7( VAR_15, VAR_11, VAR_14, VAR_16 );
        }
        else
        {
            VAR_13 = FUNC_2(VAR_5, VAR_9 + 1);
            VAR_8 = FUNC_3(VAR_15, VAR_11, VAR_13);
        }

        if (VAR_8 != VAR_1)
        {
            FUNC_0("Failed to modify record: %d\n", VAR_8);
            goto done;
        }
    }

    VAR_8 = VAR_7->table->ops->modify(VAR_7->table, VAR_2, VAR_15, VAR_6);

done:
    FUNC_8(&VAR_15->hdr);
    return VAR_8;
}
