
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
struct TYPE_16__ {int hdr; } ;
struct TYPE_15__ {int db; } ;
struct TYPE_14__ {TYPE_1__* ops; } ;
struct TYPE_13__ {int (* delete ) (TYPE_2__*) ;} ;
typedef TYPE_2__ MSIVIEW ;
typedef TYPE_3__ MSITABLEVIEW ;
typedef TYPE_4__ MSIRECORD ;
typedef int LPCWSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int,scalar_t__) ;
 int FUNC_2 (TYPE_4__*,int,int ) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_2__**) ;
 scalar_t__ FUNC_4 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_4__*,scalar_t__*,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int VAR_2 ;

__attribute__((used)) static UINT FUNC_9(struct tagMSIVIEW *VAR_3, LPCWSTR VAR_4, UINT VAR_5)
{
    MSITABLEVIEW *VAR_6 = (MSITABLEVIEW*)VAR_3;
    MSIRECORD *VAR_7 = ((void*)0);
    MSIVIEW *VAR_8 = ((void*)0);
    UINT VAR_9, VAR_10;

    VAR_7 = FUNC_0(2);
    if (!VAR_7)
        return VAR_0;

    FUNC_2(VAR_7, 1, VAR_4);
    FUNC_1(VAR_7, 2, VAR_5);

    VAR_10 = FUNC_3(VAR_6->db, VAR_2, &VAR_8);
    if (VAR_10 != VAR_1)
    {
        FUNC_7(&VAR_7->hdr);
        return VAR_10;
    }

    VAR_10 = FUNC_5((MSITABLEVIEW *)VAR_8, VAR_7, &VAR_9, ((void*)0));
    if (VAR_10 != VAR_1)
        goto done;

    VAR_10 = FUNC_4(VAR_8, VAR_9);
    if (VAR_10 != VAR_1)
        goto done;

    FUNC_6(VAR_6->db, VAR_4);

done:
    FUNC_7(&VAR_7->hdr);
    VAR_8->ops->delete(VAR_8);
    return VAR_10;
}
