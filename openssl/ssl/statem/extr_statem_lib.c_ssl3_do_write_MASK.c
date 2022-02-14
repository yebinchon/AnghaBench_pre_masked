
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ hand_state; } ;
struct TYPE_11__ {size_t init_off; size_t init_num; int msg_callback_arg; TYPE_2__* init_buf; int version; int (* msg_callback ) (int,int ,int,int *,size_t,TYPE_3__*,int ) ;TYPE_1__ statem; } ;
struct TYPE_10__ {int * data; } ;
typedef TYPE_3__ SSL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_3__*,unsigned char*,size_t) ;
 int FUNC_2 (TYPE_3__*,int,int *,size_t,size_t*) ;
 int FUNC_3 (int,int ,int,int *,size_t,TYPE_3__*,int ) ;

int FUNC_4(SSL *VAR_4, int VAR_5)
{
    int VAR_6;
    size_t VAR_7 = 0;

    VAR_6 = FUNC_2(VAR_4, VAR_5, &VAR_4->init_buf->data[VAR_4->init_off],
                           VAR_4->init_num, &VAR_7);
    if (VAR_6 < 0)
        return -1;
    if (VAR_5 == VAR_0)





        if (!FUNC_0(VAR_4) || (VAR_4->statem.hand_state != VAR_3
                                 && VAR_4->statem.hand_state != VAR_1
                                 && VAR_4->statem.hand_state != VAR_2))
            if (!FUNC_1(VAR_4,
                                 (unsigned char *)&VAR_4->init_buf->data[VAR_4->init_off],
                                 VAR_7))
                return -1;
    if (VAR_7 == VAR_4->init_num) {
        if (VAR_4->msg_callback)
            VAR_4->msg_callback(1, VAR_4->version, VAR_5, VAR_4->init_buf->data,
                            (size_t)(VAR_4->init_off + VAR_4->init_num), VAR_4,
                            VAR_4->msg_callback_arg);
        return 1;
    }
    VAR_4->init_off += VAR_7;
    VAR_4->init_num -= VAR_7;
    return 0;
}
