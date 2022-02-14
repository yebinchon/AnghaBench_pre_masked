
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_fd; int wfds; int rfds; } ;
typedef TYPE_1__ php_cli_server_poller ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(php_cli_server_poller *VAR_1)
{
 FUNC_0(&VAR_1->rfds);
 FUNC_0(&VAR_1->wfds);
 VAR_1->max_fd = -1;
 return VAR_0;
}
