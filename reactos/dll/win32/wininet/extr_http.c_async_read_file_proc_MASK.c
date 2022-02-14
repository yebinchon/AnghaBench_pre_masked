
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int task_header_t ;
struct TYPE_10__ {scalar_t__ hdr; } ;
struct TYPE_11__ {scalar_t__ read_pos; scalar_t__ size; scalar_t__* ret_read; scalar_t__ buf; TYPE_1__ hdr; } ;
typedef TYPE_2__ read_file_task_t ;
typedef int read ;
struct TYPE_13__ {int dwContext; } ;
struct TYPE_12__ {TYPE_8__ hdr; int read_section; } ;
typedef TYPE_3__ http_request_t ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_3__*,char*,scalar_t__,scalar_t__*,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_8__*,int ,int ,scalar_t__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__,...) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*,int) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int ,scalar_t__*) ;
 int FUNC_8 (TYPE_3__*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(task_header_t *VAR_4)
{
    read_file_task_t *VAR_5 = (read_file_task_t*)VAR_4;
    http_request_t *VAR_6 = (http_request_t*)VAR_5->hdr.hdr;
    DWORD VAR_7 = VAR_0, VAR_8 = VAR_5->read_pos, VAR_9 = 0;

    FUNC_4("req %p buf %p size %u read_pos %u ret_read %p\n", VAR_6, VAR_5->buf, VAR_5->size, VAR_5->read_pos, VAR_5->ret_read);

    if(VAR_5->buf) {
        DWORD VAR_10;
        while (VAR_8 < VAR_5->size) {
            VAR_7 = FUNC_1(VAR_6, (char*)VAR_5->buf + VAR_8, VAR_5->size - VAR_8, &VAR_10, VAR_3);
            if (VAR_7 != VAR_0 || !VAR_10)
                break;
            VAR_8 += VAR_10;
        }
    }else {
        FUNC_0(&VAR_6->read_section);
        VAR_7 = FUNC_7(VAR_6, VAR_3, &VAR_8);
        FUNC_3(&VAR_6->read_section);

        if(VAR_5->ret_read)
            VAR_9 = VAR_8;
        if(VAR_7 != VAR_0 || !VAR_8)
            FUNC_6(VAR_6, FUNC_5(VAR_6, VAR_1) == VAR_0);
    }

    FUNC_4("res %u read %u\n", VAR_7, VAR_8);

    if(VAR_5->ret_read)
        *VAR_5->ret_read = VAR_8;


    FUNC_2(&VAR_6->hdr, VAR_6->hdr.dwContext, VAR_2, &VAR_8, sizeof(VAR_8));

    if(VAR_7 != VAR_0)
        VAR_9 = VAR_7;
    FUNC_8(VAR_6, VAR_7 == VAR_0, VAR_9);
}
