
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int length; int data; } ;
struct TYPE_5__ {int send_interval; TYPE_1__ data_to_send; } ;
typedef TYPE_2__ nn_options_t ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,int ,int ,int ) ;
 int FUNC_4 (int) ;
 int VAR_2 ;

void FUNC_5 (nn_options_t *VAR_3, int VAR_4)
{
    int VAR_5;
    uint64_t VAR_6;
    int64_t VAR_7, VAR_8;

    VAR_8 = (int)(VAR_3->send_interval*1000);

    for (;;) {
        VAR_6 = FUNC_2();
        VAR_5 = FUNC_3 (VAR_4,
            VAR_3->data_to_send.data, VAR_3->data_to_send.length,
            0);
        if (VAR_5 < 0 && VAR_1 == VAR_0) {
            FUNC_0 (VAR_2, "Message not sent (EAGAIN)\n");
        } else {
            FUNC_1 (VAR_5 >= 0, "Can't send");
        }
        if (VAR_8 >= 0) {
            VAR_7 = (VAR_6 + VAR_8) - FUNC_2();
            if (VAR_7 > 0) {
                FUNC_4 ((int) VAR_7);
            }
        } else {
            break;
        }
    }
}
