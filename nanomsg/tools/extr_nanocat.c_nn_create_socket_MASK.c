
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int socket_type; int send_timeout; scalar_t__ recv_timeout; int* socket_name; } ;
typedef TYPE_1__ nn_options_t ;
typedef int millis ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int ,int ,int*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int*) ;

int FUNC_6 (nn_options_t *VAR_4)
{
    int VAR_5;
    int VAR_6;
    int VAR_7;

    VAR_5 = FUNC_3 (VAR_0, VAR_4->socket_type);
    FUNC_0 (VAR_5 >= 0, "Can't create socket");


    if (VAR_4->send_timeout >= 0) {
        VAR_7 = (int)(VAR_4->send_timeout * 1000);
        VAR_6 = FUNC_2 (VAR_5, VAR_3, VAR_1,
                           &VAR_7, sizeof (VAR_7));
        FUNC_0 (VAR_6 == 0, "Can't set send timeout");
    }
    if (VAR_4->recv_timeout >= 0) {
        FUNC_1 (VAR_5, (int) VAR_4->recv_timeout * 1000);
    }
    if (VAR_4->socket_name) {
        VAR_6 = FUNC_2 (VAR_5, VAR_3, VAR_2,
                           VAR_4->socket_name, FUNC_5(VAR_4->socket_name));
        FUNC_0 (VAR_6 == 0, "Can't set socket name");
    }


    switch (VAR_4->socket_type) {
    case 128:
        FUNC_4 (VAR_4, VAR_5);
        break;
    }

    return VAR_5;
}
