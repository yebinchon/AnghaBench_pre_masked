
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


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct tagMSIVIEW*,int *,int,int ) ;
 scalar_t__ FUNC_1 (struct tagMSIVIEW*,scalar_t__,int *,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,scalar_t__*,int *) ;

__attribute__((used)) static UINT FUNC_3(struct tagMSIVIEW *VAR_3, MSIRECORD *VAR_4)
{
    MSITABLEVIEW *VAR_5 = (MSITABLEVIEW *)VAR_3;
    UINT VAR_6, VAR_7;

    if (!VAR_5->table)
        return VAR_0;

    VAR_6 = FUNC_2(VAR_5, VAR_4, &VAR_7, ((void*)0));
    if (VAR_6 == VAR_1)
        return FUNC_1(VAR_3, VAR_7, VAR_4, (1 << VAR_5->num_cols) - 1);
    else
        return FUNC_0( VAR_3, VAR_4, -1, VAR_2 );
}
