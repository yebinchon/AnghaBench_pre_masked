
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int task_header_t ;
struct TYPE_3__ {scalar_t__ hdr; } ;
struct TYPE_4__ {int directory_len; int directory; TYPE_1__ hdr; } ;
typedef TYPE_2__ get_current_dir_task_t ;
typedef int ftp_session_t ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (char*,int *) ;

__attribute__((used)) static void FUNC_2(task_header_t *VAR_0)
{
    get_current_dir_task_t *VAR_1 = (get_current_dir_task_t*)VAR_0;
    ftp_session_t *VAR_2 = (ftp_session_t*)VAR_1->hdr.hdr;

    FUNC_1("%p\n", VAR_2);

    FUNC_0(VAR_2, VAR_1->directory, VAR_1->directory_len);
}
