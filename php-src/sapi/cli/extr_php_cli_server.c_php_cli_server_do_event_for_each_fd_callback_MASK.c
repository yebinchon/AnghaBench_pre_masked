
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int php_socket_t ;
struct TYPE_12__ {int (* whandler ) (TYPE_3__*,TYPE_2__*) ;int (* rhandler ) (TYPE_3__*,TYPE_2__*) ;TYPE_3__* server; } ;
typedef TYPE_1__ php_cli_server_do_event_for_each_fd_callback_params ;
struct TYPE_13__ {char* addr_str; int sock; } ;
typedef TYPE_2__ php_cli_server_client ;
struct TYPE_14__ {int socklen; int clients; int poller; int server_sock; } ;
typedef TYPE_3__ php_cli_server ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct sockaddr*,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct sockaddr*,int) ;
 void* FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_3__*,int ,struct sockaddr*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (scalar_t__,char*,...) ;
 int FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 () ;
 char* FUNC_11 (int ,int *,int ) ;
 int FUNC_12 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_13 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_16(void *VAR_7, php_socket_t VAR_8, int VAR_9)
{
 php_cli_server_do_event_for_each_fd_callback_params *VAR_10 = VAR_7;
 php_cli_server *VAR_11 = VAR_10->server;
 if (VAR_11->server_sock == VAR_8) {
  php_cli_server_client *VAR_12 = ((void*)0);
  php_socket_t VAR_13;
  socklen_t VAR_14 = VAR_11->socklen;
  struct sockaddr *VAR_15 = FUNC_5(VAR_11->socklen, 1);
  VAR_13 = FUNC_1(VAR_11->server_sock, VAR_15, &VAR_14);
  if (!FUNC_0(VAR_13)) {
   if (VAR_6 >= VAR_1) {
    char *VAR_16 = FUNC_11(FUNC_10(), ((void*)0), 0);
    FUNC_7(VAR_1,
     "Failed to accept a client (reason: %s)", VAR_16);
    FUNC_3(VAR_16);
   }
   FUNC_4(VAR_15, 1);
   return VAR_5;
  }
  if (VAR_5 != FUNC_9(VAR_13, 0)) {
   FUNC_4(VAR_15, 1);
   FUNC_2(VAR_13);
   return VAR_5;
  }
  VAR_12 = FUNC_5(sizeof(php_cli_server_client), 1);
  if (VAR_0 == FUNC_6(VAR_12, VAR_11, VAR_13, VAR_15, VAR_14)) {
   FUNC_7(VAR_1, "Failed to create a new request object");
   FUNC_4(VAR_15, 1);
   FUNC_2(VAR_13);
   return VAR_5;
  }

  FUNC_7(VAR_2, "%s Accepted", VAR_12->addr_str);

  FUNC_15(&VAR_11->clients, VAR_13, VAR_12);

  FUNC_8(&VAR_11->poller, VAR_3, VAR_12->sock);
 } else {
  php_cli_server_client *VAR_17;
  if (((void*)0) != (VAR_17 = FUNC_14(&VAR_11->clients, VAR_8))) {
   if (VAR_9 & VAR_3) {
    VAR_10->rhandler(VAR_11, VAR_17);
   }
   if (VAR_9 & VAR_4) {
    VAR_10->whandler(VAR_11, VAR_17);
   }
  }
 }
 return VAR_5;
}
