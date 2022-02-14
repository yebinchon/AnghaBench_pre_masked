
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int task_header_t ;
struct TYPE_3__ {scalar_t__ hdr; } ;
struct TYPE_4__ {int new_file; int remote_file; int context; int flags; int local_attr; int fail_if_exists; TYPE_1__ hdr; } ;
typedef TYPE_2__ get_file_task_t ;
typedef int ftp_session_t ;


 int FUNC_0 (int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(task_header_t *VAR_0)
{
    get_file_task_t *VAR_1 = (get_file_task_t*)VAR_0;
    ftp_session_t *VAR_2 = (ftp_session_t*)VAR_1->hdr.hdr;

    FUNC_1("%p\n", VAR_2);

    FUNC_0(VAR_2, VAR_1->remote_file, VAR_1->new_file, VAR_1->fail_if_exists,
             VAR_1->local_attr, VAR_1->flags, VAR_1->context);
    FUNC_2(VAR_1->remote_file);
    FUNC_2(VAR_1->new_file);
}
