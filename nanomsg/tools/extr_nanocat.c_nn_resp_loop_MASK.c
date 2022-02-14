
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int length; int data; } ;
struct TYPE_6__ {TYPE_1__ data_to_send; } ;
typedef TYPE_2__ nn_options_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (TYPE_2__*,void*,int) ;
 int FUNC_4 (int,void**,int ,int ) ;
 int FUNC_5 (int,int ,int ,int ) ;
 int VAR_3 ;

void FUNC_6 (nn_options_t *VAR_4, int VAR_5)
{
    int VAR_6;
    void *VAR_7;

    for (;;) {
        VAR_6 = FUNC_4 (VAR_5, &VAR_7, VAR_1, 0);
        if (VAR_6 < 0 && VAR_2 == VAR_0) {
                continue;
        } else {
            FUNC_1 (VAR_6 >= 0, "Can't recv");
        }
        FUNC_3 (VAR_4, VAR_7, VAR_6);
        FUNC_2 (VAR_7);
        VAR_6 = FUNC_5 (VAR_5,
            VAR_4->data_to_send.data, VAR_4->data_to_send.length,
            0);
        if (VAR_6 < 0 && VAR_2 == VAR_0) {
            FUNC_0 (VAR_3, "Message not sent (EAGAIN)\n");
        } else {
            FUNC_1 (VAR_6 >= 0, "Can't send");
        }
    }
}
