
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {int num_cols; } ;
typedef TYPE_1__ MSISTREAMSVIEW ;
typedef int MSIRECORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct tagMSIVIEW*,scalar_t__,int *,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,scalar_t__*) ;

__attribute__((used)) static UINT FUNC_2(struct tagMSIVIEW *VAR_2, MSIRECORD *VAR_3)
{
    MSISTREAMSVIEW *VAR_4 = (MSISTREAMSVIEW *)VAR_2;
    UINT VAR_5, VAR_6;

    VAR_5 = FUNC_1(VAR_4, VAR_3, &VAR_6);
    if (VAR_5 != VAR_1)
        return VAR_0;

    return FUNC_0( VAR_2, VAR_6, VAR_3, (1 << VAR_4->num_cols) - 1 );
}
