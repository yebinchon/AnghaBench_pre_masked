
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pbuf {int tot_len; } ;
typedef scalar_t__ const err_t ;
struct TYPE_4__ {scalar_t__ SendShutdown; int * SocketContext; int ReceiveShutdownStatus; int ReceiveShutdown; } ;
typedef int PTCP_PCB ;
typedef TYPE_1__* PCONNECTION_ENDPOINT ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct pbuf*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (void*) ;
 int VAR_3 ;
 int FUNC_3 (struct pbuf*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static
err_t
FUNC_6(void *VAR_4, PTCP_PCB VAR_5, struct pbuf *VAR_6, const err_t VAR_7)
{
    PCONNECTION_ENDPOINT VAR_8 = VAR_4;


    if (!VAR_4)
    {
        if (VAR_6)
            FUNC_3(VAR_6);

        return VAR_1;
    }

    if (VAR_6)
    {
        FUNC_0(VAR_8, VAR_6);

        FUNC_5(VAR_5, VAR_6->tot_len);

        FUNC_2(VAR_4);
    }
    else if (VAR_7 == VAR_1)
    {




        VAR_8->ReceiveShutdown = VAR_3;
        VAR_8->ReceiveShutdownStatus = VAR_2;


        if (VAR_8->SendShutdown)
        {
            VAR_8->SocketContext = ((void*)0);
            FUNC_4(VAR_5, ((void*)0));
        }


        FUNC_2(VAR_4);


        if (VAR_8->SendShutdown)
        {
            FUNC_1(VAR_8, VAR_0);
        }
    }

    return VAR_1;
}
