
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dwOperStatus; int dwIndex; } ;
typedef TYPE_1__ MIB_IFROW ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

int
FUNC_1(const MIB_IFROW* VAR_3)
{
    if (VAR_3->dwOperStatus == VAR_0 ||
        VAR_3->dwOperStatus == VAR_1)
        return 1;

    FUNC_0(VAR_2,("Interface %d is down\n", VAR_3->dwIndex));
    return 0;
}
