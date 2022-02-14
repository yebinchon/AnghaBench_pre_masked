
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int kernel_device_handle; } ;
typedef TYPE_1__ SessionInfo ;
typedef scalar_t__ MMRESULT ;
typedef scalar_t__ DWORD_PTR ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

DWORD
FUNC_4(
    DWORD_PTR VAR_2)
{
    MMRESULT VAR_3;
    SessionInfo* VAR_4 = (SessionInfo*) VAR_2;


    FUNC_0(VAR_4);

    VAR_3 = FUNC_1(VAR_4, VAR_1, 0);

    if ( VAR_3 == VAR_0 )
    {


        FUNC_2(VAR_4->kernel_device_handle);

        FUNC_3(VAR_4);
    }

    return VAR_3;
}
