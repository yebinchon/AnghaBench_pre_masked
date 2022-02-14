
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* conn; } ;
typedef TYPE_2__ lwIP_sock ;
struct TYPE_4__ {int state; } ;



 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int,void const*,size_t,int ) ;

int FUNC_2(int VAR_0, const void *VAR_1, size_t VAR_2)
{
    lwIP_sock *VAR_3 = ((void*)0);
    int VAR_4 = 0;
    size_t VAR_5 = 0;

    VAR_3 = FUNC_0(VAR_0);
    if (!VAR_3)
    {
        return -1;
    }

    if (VAR_3->conn != ((void*)0))
    {
        switch (VAR_3->conn->state)
        {
            case 128:
               return FUNC_1(VAR_0, VAR_1, VAR_2, 0);
            default:
                return -1;
        }
    }
    else
    {
        return -1;
    }
}
