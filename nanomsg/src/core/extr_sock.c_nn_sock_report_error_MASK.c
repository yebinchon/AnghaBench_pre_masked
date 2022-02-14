
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_sock {char* socket_name; } ;
struct nn_ep {int dummy; } ;


 int FUNC_0 (int ,char*,char*,char*,...) ;
 char* FUNC_1 (struct nn_ep*) ;
 int FUNC_2 () ;
 char* FUNC_3 (int) ;
 int VAR_0 ;

void FUNC_4 (struct nn_sock *VAR_1, struct nn_ep *VAR_2, int VAR_3)
{
    if (!FUNC_2())
        return;

    if (VAR_3 == 0)
        return;

    if (VAR_2) {
        FUNC_0(VAR_0, "nanomsg: socket.%s[%s]: Error: %s\n",
            VAR_1->socket_name, FUNC_1(VAR_2), FUNC_3(VAR_3));
    } else {
        FUNC_0(VAR_0, "nanomsg: socket.%s: Error: %s\n",
            VAR_1->socket_name, FUNC_3(VAR_3));
    }
}
