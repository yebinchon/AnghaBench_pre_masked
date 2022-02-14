
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ DeviceType; int hDirectDrawLocal; } ;
typedef TYPE_1__ D3D9_Unknown6BC ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*) ;
 scalar_t__ VAR_3 ;

BOOL FUNC_1(D3D9_Unknown6BC* VAR_4)
{
    BOOL VAR_5;


    if (VAR_3 == FUNC_0(VAR_4->hDirectDrawLocal, &VAR_5))
        return VAR_3;


    if (VAR_4->DeviceType == VAR_0 || VAR_4->DeviceType == VAR_1)
        return VAR_3;

    return VAR_2;
}
