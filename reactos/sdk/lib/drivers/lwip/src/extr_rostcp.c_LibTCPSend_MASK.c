
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32_t ;
typedef int u16_t ;
struct TYPE_7__ {scalar_t__ Error; int Information; } ;
struct TYPE_8__ {TYPE_3__ Send; } ;
struct TYPE_5__ {void* Data; int DataLength; int Connection; } ;
struct TYPE_6__ {TYPE_1__ Send; } ;
struct lwip_callback_msg {TYPE_4__ Output; int Event; TYPE_2__ Input; } ;
typedef scalar_t__ err_t ;
typedef int PCONNECTION_ENDPOINT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct lwip_callback_msg* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct lwip_callback_msg*) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct lwip_callback_msg*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int (*) (struct lwip_callback_msg*),struct lwip_callback_msg*,int) ;

err_t
FUNC_6(PCONNECTION_ENDPOINT VAR_6, void *const VAR_7, const u16_t VAR_8, u32_t *VAR_9, const int VAR_10)
{
    err_t VAR_11;
    struct lwip_callback_msg *VAR_12;

    VAR_12 = FUNC_0(&VAR_4);
    if (VAR_12)
    {
        FUNC_2(&VAR_12->Event, VAR_5, VAR_3);
        VAR_12->Input.Send.Connection = VAR_6;
        VAR_12->Input.Send.Data = VAR_7;
        VAR_12->Input.Send.DataLength = VAR_8;

        if (VAR_10)
            FUNC_3(VAR_12);
        else
            FUNC_5(FUNC_3, VAR_12, 1);

        if (FUNC_4(&VAR_12->Event))
            VAR_11 = VAR_12->Output.Send.Error;
        else
            VAR_11 = VAR_0;

        if (VAR_11 == VAR_2)
            *VAR_9 = VAR_12->Output.Send.Information;
        else
            *VAR_9 = 0;

        FUNC_1(&VAR_4, VAR_12);

        return VAR_11;
    }

    return VAR_1;
}
