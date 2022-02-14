
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void (* on_accept ) () ;void (* on_read ) () ;void (* on_close ) () ;} ;
struct TYPE_6__ {int listen_socket; int fd; int id; int tcp; int env; TYPE_1__ hook; int out_buf; int out_pos; } ;
typedef TYPE_2__ fcgi_request ;
typedef int HANDLE ;


 int FUNC_0 (int ,int *,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (int,int) ;
 int FUNC_3 (int *) ;
 void FUNC_4 () ;

fcgi_request *FUNC_5(int VAR_0, void(*VAR_1)(), void(*VAR_2)(), void(*VAR_3)())
{
 fcgi_request *VAR_4 = FUNC_2(1, sizeof(fcgi_request));
 VAR_4->listen_socket = VAR_0;
 VAR_4->fd = -1;
 VAR_4->id = -1;
 VAR_4->out_pos = VAR_4->out_buf;
 VAR_4->hook.on_accept = VAR_1 ? VAR_1 : FUNC_4;
 VAR_4->hook.on_read = VAR_2 ? VAR_2 : FUNC_4;
 VAR_4->hook.on_close = VAR_3 ? VAR_3 : FUNC_4;





 FUNC_3(&VAR_4->env);

 return VAR_4;
}
