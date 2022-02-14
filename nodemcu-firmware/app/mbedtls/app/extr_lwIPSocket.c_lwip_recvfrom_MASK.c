
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef int socklen_t ;
struct TYPE_5__ {TYPE_1__* conn; } ;
typedef TYPE_2__ lwIP_sock ;
struct TYPE_4__ {scalar_t__ state; int readbuf; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (void*,int ,size_t) ;

int FUNC_4(int VAR_1, void *VAR_2, size_t VAR_3, int VAR_4, struct sockaddr *VAR_5, socklen_t *VAR_6)
{
    lwIP_sock *VAR_7 = ((void*)0);
    size_t VAR_8 = 0;
    int VAR_9 = 0;
    FUNC_1(VAR_2);

    VAR_7 = FUNC_0(VAR_1);
    if (!VAR_7)
    {
        return -1;
    }

    if (VAR_7->conn != ((void*)0))
    {
        if (VAR_7->conn->state == VAR_0)
        {
            VAR_8 = FUNC_2(VAR_7->conn->readbuf);
            if (VAR_8 != 0)
            {
                if (VAR_3 > VAR_8)
                {
                    VAR_3 = VAR_8;
                }
                FUNC_3(VAR_2, VAR_7->conn->readbuf, VAR_3);
                return VAR_3;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return -1;
    }
}
