
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int length; int data; } ;
struct TYPE_7__ {int send_interval; int recv_timeout; TYPE_1__ data_to_send; } ;
typedef TYPE_2__ nn_options_t ;
typedef int int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (void*) ;
 int FUNC_4 (TYPE_2__*,void*,int) ;
 int FUNC_5 (int,void**,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int,int ,int ,int ) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int) ;
 int VAR_5 ;

void FUNC_10 (nn_options_t *VAR_6, int VAR_7)
{
    int VAR_8;
    void *VAR_9;
    uint64_t VAR_10;
    int64_t VAR_11, VAR_12, VAR_13;

    VAR_12 = (int)(VAR_6->send_interval*1000);
    VAR_13 = (int)(VAR_6->recv_timeout*1000);

    for (;;) {
        VAR_10 = FUNC_2();
        VAR_8 = FUNC_7 (VAR_7,
            VAR_6->data_to_send.data, VAR_6->data_to_send.length,
            0);
        if (VAR_8 < 0 && VAR_4 == VAR_0) {
            FUNC_0 (VAR_5, "Message not sent (EAGAIN)\n");
        } else {
            FUNC_1 (VAR_8 >= 0, "Can't send");
        }
        if (VAR_6->send_interval < 0) {
            FUNC_6 (VAR_6, VAR_7);
            return;
        }

        for (;;) {
            VAR_11 = (VAR_10 + VAR_12) - FUNC_2();
            if (VAR_11 <= 0) {
                break;
            }
            if (VAR_13 >= 0 && VAR_11 > VAR_13)
            {
                VAR_11 = VAR_13;
            }
            FUNC_8 (VAR_7, (int) VAR_11);
            VAR_8 = FUNC_5 (VAR_7, &VAR_9, VAR_3, 0);
            if (VAR_8 < 0) {
                if (VAR_4 == VAR_0) {
                    continue;
                } else if (VAR_4 == VAR_2 || VAR_4 == VAR_1) {
                    VAR_11 = (VAR_10 + VAR_12) - FUNC_2();
                    if (VAR_11 > 0)
                        FUNC_9 ((int) VAR_11);
                    continue;
                }
            }
            FUNC_1 (VAR_8 >= 0, "Can't recv");
            FUNC_4 (VAR_6, VAR_9, VAR_8);
            FUNC_3 (VAR_9);
        }
    }
}
