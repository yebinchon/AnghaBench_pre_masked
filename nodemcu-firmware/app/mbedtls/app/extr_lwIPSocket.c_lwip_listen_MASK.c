
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int conn; } ;
typedef TYPE_1__ lwIP_sock ;
typedef scalar_t__ err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 TYPE_1__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(int VAR_1, int VAR_2)
{
    lwIP_sock *VAR_3 = ((void*)0);
    err_t VAR_4 = VAR_0;
    VAR_3 = FUNC_1(VAR_1);
    if (!VAR_3)
    {
        return -1;
    }
    VAR_4 = FUNC_2(VAR_3->conn);
    if (VAR_4 != VAR_0)
    {
        FUNC_0("lwip_connect(%d) failed, err=%d\n", VAR_1, VAR_4);
        return -1;
    }

    FUNC_0("lwip_connect(%d) succeeded\n", VAR_1);

    return VAR_0;
}
