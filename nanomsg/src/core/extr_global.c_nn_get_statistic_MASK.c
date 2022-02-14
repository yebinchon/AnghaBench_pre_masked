
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int current_ep_errors; int current_snd_priority; int inprogress_connections; int current_connections; int bytes_received; int bytes_sent; int messages_received; int messages_sent; int bind_errors; int connect_errors; int broken_connections; int dropped_connections; int accepted_connections; int established_connections; } ;
struct nn_sock {TYPE_1__ statistics; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nn_sock**,int) ;
 int FUNC_1 (struct nn_sock*) ;
 scalar_t__ FUNC_2 (int) ;

uint64_t FUNC_3 (int VAR_2, int VAR_3)
{
    int VAR_4;
    struct nn_sock *VAR_5;
    uint64_t VAR_6;

    VAR_4 = FUNC_0 (&VAR_5, VAR_2);
    if (FUNC_2 (VAR_4 < 0)) {
        VAR_1 = -VAR_4;
        return (uint64_t)-1;
    }

    switch (VAR_3) {
    case 131:
        VAR_6 = VAR_5->statistics.established_connections;
        break;
    case 142:
        VAR_6 = VAR_5->statistics.accepted_connections;
        break;
    case 132:
        VAR_6 = VAR_5->statistics.dropped_connections;
        break;
    case 139:
        VAR_6 = VAR_5->statistics.broken_connections;
        break;
    case 136:
        VAR_6 = VAR_5->statistics.connect_errors;
        break;
    case 140:
        VAR_6 = VAR_5->statistics.bind_errors;
        break;
    case 141:
        VAR_6 = VAR_5->statistics.bind_errors;
        break;
    case 128:
        VAR_6 = VAR_5->statistics.messages_sent;
        break;
    case 129:
        VAR_6 = VAR_5->statistics.messages_received;
        break;
    case 137:
        VAR_6 = VAR_5->statistics.bytes_sent;
        break;
    case 138:
        VAR_6 = VAR_5->statistics.bytes_received;
        break;
    case 135:
        VAR_6 = VAR_5->statistics.current_connections;
        break;
    case 130:
        VAR_6 = VAR_5->statistics.inprogress_connections;
        break;
    case 133:
        VAR_6 = VAR_5->statistics.current_snd_priority;
        break;
    case 134:
        VAR_6 = VAR_5->statistics.current_ep_errors;
        break;
    default:
        VAR_6 = (uint64_t)-1;
        VAR_1 = VAR_0;
        break;
    }

    FUNC_1 (VAR_5);
    return VAR_6;
}
