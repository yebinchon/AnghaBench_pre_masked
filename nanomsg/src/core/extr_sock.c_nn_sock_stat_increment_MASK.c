
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int established_connections; int accepted_connections; int dropped_connections; int broken_connections; int connect_errors; int bind_errors; int accept_errors; int messages_sent; int messages_received; int bytes_sent; int bytes_received; int current_connections; int inprogress_connections; int current_snd_priority; int current_ep_errors; } ;
struct nn_sock {TYPE_1__ statistics; } ;
typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

void FUNC_1 (struct nn_sock *VAR_1, int VAR_2, int64_t VAR_3)
{
    switch (VAR_2) {
        case 131:
            FUNC_0 (VAR_3 > 0);
            VAR_1->statistics.established_connections += VAR_3;
            break;
        case 142:
            FUNC_0 (VAR_3 > 0);
            VAR_1->statistics.accepted_connections += VAR_3;
            break;
        case 132:
            FUNC_0 (VAR_3 > 0);
            VAR_1->statistics.dropped_connections += VAR_3;
            break;
        case 139:
            FUNC_0 (VAR_3 > 0);
            VAR_1->statistics.broken_connections += VAR_3;
            break;
        case 136:
            FUNC_0 (VAR_3 > 0);
            VAR_1->statistics.connect_errors += VAR_3;
            break;
        case 140:
            FUNC_0 (VAR_3 > 0);
            VAR_1->statistics.bind_errors += VAR_3;
            break;
        case 141:
            FUNC_0 (VAR_3 > 0);
            VAR_1->statistics.accept_errors += VAR_3;
            break;
        case 128:
            FUNC_0 (VAR_3 > 0);
            VAR_1->statistics.messages_sent += VAR_3;
            break;
        case 129:
            FUNC_0 (VAR_3 > 0);
            VAR_1->statistics.messages_received += VAR_3;
            break;
        case 137:
            FUNC_0 (VAR_3 >= 0);
            VAR_1->statistics.bytes_sent += VAR_3;
            break;
        case 138:
            FUNC_0 (VAR_3 >= 0);
            VAR_1->statistics.bytes_received += VAR_3;
            break;

        case 135:
            FUNC_0 (VAR_3 > 0 ||
                VAR_1->statistics.current_connections >= -VAR_3);
            FUNC_0(VAR_3 < VAR_0 && VAR_3 > -VAR_0);
            VAR_1->statistics.current_connections += (int) VAR_3;
            break;
        case 130:
            FUNC_0 (VAR_3 > 0 ||
                VAR_1->statistics.inprogress_connections >= -VAR_3);
            FUNC_0(VAR_3 < VAR_0 && VAR_3 > -VAR_0);
            VAR_1->statistics.inprogress_connections += (int) VAR_3;
            break;
        case 133:

            FUNC_0((VAR_3 > 0 && VAR_3 <= 16) || VAR_3 == -1);
            VAR_1->statistics.current_snd_priority = (int) VAR_3;
            break;
        case 134:
            FUNC_0 (VAR_3 > 0 ||
                VAR_1->statistics.current_ep_errors >= -VAR_3);
            FUNC_0(VAR_3 < VAR_0 && VAR_3 > -VAR_0);
            VAR_1->statistics.current_ep_errors += (int) VAR_3;
            break;
    }
}
