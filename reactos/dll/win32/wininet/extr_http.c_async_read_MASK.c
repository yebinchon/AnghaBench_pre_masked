
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void** ret_read; int hdr; void* read_pos; void* size; void* buf; } ;
typedef TYPE_1__ read_file_task_t ;
struct TYPE_6__ {int hdr; } ;
typedef TYPE_2__ http_request_t ;
typedef void* DWORD ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static DWORD FUNC_2(http_request_t *VAR_3, void *VAR_4, DWORD VAR_5, DWORD VAR_6, DWORD *VAR_7)
{
    read_file_task_t *VAR_8;

    VAR_8 = FUNC_1(&VAR_3->hdr, VAR_2, sizeof(*VAR_8));
    if(!VAR_8)
        return VAR_1;

    VAR_8->buf = VAR_4;
    VAR_8->size = VAR_5;
    VAR_8->read_pos = VAR_6;
    VAR_8->ret_read = VAR_7;

    FUNC_0(&VAR_8->hdr);
    return VAR_0;
}
