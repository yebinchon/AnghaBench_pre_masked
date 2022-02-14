
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int Error; } ;
struct TYPE_8__ {TYPE_3__ Close; } ;
struct TYPE_5__ {int Callback; int Connection; } ;
struct TYPE_6__ {TYPE_1__ Close; } ;
struct lwip_callback_msg {TYPE_4__ Output; int Event; TYPE_2__ Input; } ;
typedef int err_t ;
typedef int PCONNECTION_ENDPOINT ;


 int VAR_0 ;
 int VAR_1 ;
 struct lwip_callback_msg* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct lwip_callback_msg*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct lwip_callback_msg*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int (*) (struct lwip_callback_msg*),struct lwip_callback_msg*,int) ;

err_t
FUNC_6(PCONNECTION_ENDPOINT VAR_5, const int VAR_6, const int VAR_7)
{
    err_t VAR_8;
    struct lwip_callback_msg *VAR_9;

    VAR_9 = FUNC_0(&VAR_3);
    if (VAR_9)
    {
        FUNC_2(&VAR_9->Event, VAR_4, VAR_2);

        VAR_9->Input.Close.Connection = VAR_5;
        VAR_9->Input.Close.Callback = VAR_7;

        if (VAR_6)
            FUNC_3(VAR_9);
        else
            FUNC_5(FUNC_3, VAR_9, 1);

        if (FUNC_4(&VAR_9->Event))
            VAR_8 = VAR_9->Output.Close.Error;
        else
            VAR_8 = VAR_0;

        FUNC_1(&VAR_3, VAR_9);

        return VAR_8;
    }

    return VAR_1;
}
