
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tagMSIVIEW {int dummy; } ;
typedef scalar_t__ UINT ;
typedef int MSITABLEVIEW ;
typedef int MSIRECORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct tagMSIVIEW*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *,scalar_t__*,int *) ;

__attribute__((used)) static UINT FUNC_2( struct tagMSIVIEW *VAR_1, MSIRECORD *VAR_2 )
{
    MSITABLEVIEW *VAR_3 = (MSITABLEVIEW *)VAR_1;
    UINT VAR_4, VAR_5;

    VAR_5 = FUNC_1(VAR_3, VAR_2, &VAR_4, ((void*)0));
    if (VAR_5 != VAR_0)
        return VAR_5;

    return FUNC_0(VAR_1, VAR_4);
}
