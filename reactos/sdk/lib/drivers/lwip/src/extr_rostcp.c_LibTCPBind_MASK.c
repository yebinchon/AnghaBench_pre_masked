
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16_t ;
struct TYPE_7__ {int Error; } ;
struct TYPE_8__ {TYPE_3__ Bind; } ;
struct TYPE_5__ {int Port; struct ip_addr* IpAddress; int Connection; } ;
struct TYPE_6__ {TYPE_1__ Bind; } ;
struct lwip_callback_msg {TYPE_4__ Output; int Event; TYPE_2__ Input; } ;
struct ip_addr {int dummy; } ;
typedef int err_t ;
typedef int PCONNECTION_ENDPOINT ;


 int VAR_0 ;
 int VAR_1 ;
 struct lwip_callback_msg* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct lwip_callback_msg*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,struct lwip_callback_msg*,int) ;

err_t
FUNC_5(PCONNECTION_ENDPOINT VAR_6, struct ip_addr *const VAR_7, const u16_t VAR_8)
{
    struct lwip_callback_msg *VAR_9;
    err_t VAR_10;

    VAR_9 = FUNC_0(&VAR_4);
    if (VAR_9)
    {
        FUNC_2(&VAR_9->Event, VAR_5, VAR_2);
        VAR_9->Input.Bind.Connection = VAR_6;
        VAR_9->Input.Bind.IpAddress = VAR_7;
        VAR_9->Input.Bind.Port = VAR_8;

        FUNC_4(VAR_3, VAR_9, 1);

        if (FUNC_3(&VAR_9->Event))
            VAR_10 = VAR_9->Output.Bind.Error;
        else
            VAR_10 = VAR_0;

        FUNC_1(&VAR_4, VAR_9);

        return VAR_10;
    }

    return VAR_1;
}
