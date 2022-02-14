
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef int ssize_t ;
typedef int off_t ;
struct TYPE_4__ {int data; } ;
struct TYPE_5__ {int offset; int sys_offset; TYPE_1__ name; int log; int fd; } ;
typedef TYPE_2__ ngx_file_t ;
typedef scalar_t__ ngx_err_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ,scalar_t__,char*) ;
 int FUNC_2 (int ,int ,int ,char*,int ,int *,size_t,int) ;
 int FUNC_3 (int ,int ,scalar_t__,char*,int ) ;
 int FUNC_4 (int ,int *,size_t,int) ;
 int FUNC_5 (int ,int *,size_t) ;

ssize_t
FUNC_6(ngx_file_t *VAR_6, u_char *VAR_7, size_t VAR_8, off_t VAR_9)
{
    ssize_t VAR_10, VAR_11;
    ngx_err_t VAR_12;

    FUNC_2(VAR_3, VAR_6->log, 0,
                   "write: %d, %p, %uz, %O", VAR_6->fd, VAR_7, VAR_8, VAR_9);

    VAR_11 = 0;
    if (VAR_6->sys_offset != VAR_9) {
        if (FUNC_0(VAR_6->fd, VAR_9, VAR_4) == -1) {
            FUNC_3(VAR_2, VAR_6->log, VAR_5,
                          "lseek() \"%s\" failed", VAR_6->name.data);
            return VAR_1;
        }

        VAR_6->sys_offset = VAR_9;
    }

    for ( ;; ) {
        VAR_10 = FUNC_5(VAR_6->fd, VAR_7 + VAR_11, VAR_8);

        if (VAR_10 == -1) {
            VAR_12 = VAR_5;

            if (VAR_12 == VAR_0) {
                FUNC_1(VAR_3, VAR_6->log, VAR_12,
                               "write() was interrupted");
                continue;
            }

            FUNC_3(VAR_2, VAR_6->log, VAR_12,
                          "write() \"%s\" failed", VAR_6->name.data);
            return VAR_1;
        }

        VAR_6->sys_offset += VAR_10;
        VAR_6->offset += VAR_10;
        VAR_11 += VAR_10;

        if ((size_t) VAR_10 == VAR_8) {
            return VAR_11;
        }

        VAR_8 -= VAR_10;
    }

}
