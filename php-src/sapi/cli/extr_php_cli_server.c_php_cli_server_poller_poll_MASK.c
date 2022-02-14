
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct TYPE_4__ {int wfds; int rfds; } ;
struct TYPE_5__ {TYPE_1__ active; scalar_t__ max_fd; int wfds; int rfds; } ;
typedef TYPE_2__ php_cli_server_poller ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (scalar_t__,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static int FUNC_2(php_cli_server_poller *VAR_0, struct timeval *VAR_1)
{
 FUNC_0(&VAR_0->active.rfds, &VAR_0->rfds, sizeof(VAR_0->rfds));
 FUNC_0(&VAR_0->active.wfds, &VAR_0->wfds, sizeof(VAR_0->wfds));
 return FUNC_1(VAR_0->max_fd + 1, &VAR_0->active.rfds, &VAR_0->active.wfds, ((void*)0), VAR_1);
}
