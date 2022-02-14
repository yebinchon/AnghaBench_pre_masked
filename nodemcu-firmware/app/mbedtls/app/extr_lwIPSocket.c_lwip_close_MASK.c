
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* conn; } ;
typedef TYPE_1__ lwIP_sock ;
struct TYPE_10__ {scalar_t__ state; TYPE_2__* tcp; } ;
struct TYPE_9__ {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int * VAR_3 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *) ;

int FUNC_6(int VAR_4)
{
    lwIP_sock *VAR_5 = ((void*)0);
    int VAR_6 = 0;

    VAR_5 = FUNC_2(VAR_4);
    if (!VAR_5)
    {
        return -1;
    }




    if (VAR_5->conn->tcp->state != VAR_1)
    {
        if (VAR_5->conn->state != VAR_2){
            FUNC_5(VAR_5->conn->tcp, ((void*)0));
            VAR_6 = FUNC_4(VAR_5->conn->tcp);

            if (VAR_6 != VAR_0)
            {

                FUNC_5(VAR_5->conn->tcp, VAR_3);
                return -1;
            }
        }

        FUNC_3(VAR_5->conn);
    } else {
        FUNC_4(VAR_5->conn->tcp);
    }
    FUNC_0(VAR_5->conn);
    FUNC_1(VAR_5);
    return VAR_0;
}
