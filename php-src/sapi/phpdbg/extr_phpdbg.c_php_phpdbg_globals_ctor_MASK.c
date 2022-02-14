
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * mem; } ;
struct TYPE_7__ {scalar_t__ type; scalar_t__ active; } ;
struct TYPE_6__ {scalar_t__ num; } ;
struct TYPE_9__ {int last_was_newline; int socket_fd; int socket_server_fd; scalar_t__ last_line; int * cur_command; int * stdin_file; int eol; int swd; int sigio_watcher_thread; int * oplog_list; int * sigsegv_bailout; TYPE_3__ sigsafe_mem; scalar_t__ input_buflen; TYPE_2__ err_buf; scalar_t__ req_id; scalar_t__ unclean_eval; int * sapi_name_ptr; TYPE_1__ frame; int * io; int * oplog; int flags; scalar_t__ bp_count; scalar_t__ in_execution; scalar_t__ vmret; int * ops; int * buffer; scalar_t__ exec_len; int * exec; int lines; int ** colors; int ** prompt; } ;
typedef TYPE_4__ zend_phpdbg_globals ;
struct win32_sigio_watcher_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(zend_phpdbg_globals *VAR_3)
{
 VAR_3->prompt[0] = ((void*)0);
 VAR_3->prompt[1] = ((void*)0);

 VAR_3->colors[0] = ((void*)0);
 VAR_3->colors[1] = ((void*)0);
 VAR_3->colors[2] = ((void*)0);

 VAR_3->lines = FUNC_1();
 VAR_3->exec = ((void*)0);
 VAR_3->exec_len = 0;
 VAR_3->buffer = ((void*)0);
 VAR_3->last_was_newline = 1;
 VAR_3->ops = ((void*)0);
 VAR_3->vmret = 0;
 VAR_3->in_execution = 0;
 VAR_3->bp_count = 0;
 VAR_3->flags = VAR_1;
 VAR_3->oplog = ((void*)0);
 FUNC_0(VAR_3->io, 0, sizeof(VAR_3->io));
 VAR_3->frame.num = 0;
 VAR_3->sapi_name_ptr = ((void*)0);
 VAR_3->socket_fd = -1;
 VAR_3->socket_server_fd = -1;
 VAR_3->unclean_eval = 0;

 VAR_3->req_id = 0;
 VAR_3->err_buf.active = 0;
 VAR_3->err_buf.type = 0;

 VAR_3->input_buflen = 0;
 VAR_3->sigsafe_mem.mem = ((void*)0);
 VAR_3->sigsegv_bailout = ((void*)0);

 VAR_3->oplog_list = ((void*)0);






 VAR_3->eol = VAR_2;

 VAR_3->stdin_file = ((void*)0);

 VAR_3->cur_command = ((void*)0);
 VAR_3->last_line = 0;
}
