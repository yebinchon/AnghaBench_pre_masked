
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {int num_cols; int table; } ;
typedef TYPE_1__ MSITABLEVIEW ;
typedef int MSIRECORD ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct tagMSIVIEW*,scalar_t__,int *,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,scalar_t__*,int *) ;

__attribute__((used)) static UINT FUNC_3(struct tagMSIVIEW *VAR_3, MSIRECORD *VAR_4, UINT VAR_5)
{
    MSITABLEVIEW *VAR_6 = (MSITABLEVIEW *)VAR_3;
    UINT VAR_7, VAR_8;





    if (!VAR_6->table)
        return VAR_1;

    VAR_7 = FUNC_2(VAR_6, VAR_4, &VAR_8, ((void*)0));
    if (VAR_7 != VAR_2)
    {
        FUNC_0("can't find row to modify\n");
        return VAR_0;
    }


    if (VAR_5 != VAR_8 + 1)
        return VAR_0;

    return FUNC_1(VAR_3, VAR_8, VAR_4, (1 << VAR_6->num_cols) - 1);
}
