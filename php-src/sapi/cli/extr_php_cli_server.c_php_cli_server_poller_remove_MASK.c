
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ php_socket_t ;
struct TYPE_3__ {scalar_t__ max_fd; int wfds; int rfds; } ;
typedef TYPE_1__ php_cli_server_poller ;


 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(php_cli_server_poller *VAR_2, int VAR_3, php_socket_t VAR_4)
{
 if (VAR_3 & VAR_0) {
  FUNC_0(VAR_4, &VAR_2->rfds);
 }
 if (VAR_3 & VAR_1) {
  FUNC_0(VAR_4, &VAR_2->wfds);
 }

 if (VAR_4 == VAR_2->max_fd) {
  while (VAR_4 > 0) {
   VAR_4--;
   if (FUNC_1(VAR_4, &VAR_2->rfds) || FUNC_1(VAR_4, &VAR_2->wfds)) {
    break;
   }
  }
  VAR_2->max_fd = VAR_4;
 }

}
