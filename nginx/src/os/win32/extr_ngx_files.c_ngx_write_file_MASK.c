
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u_long ;
typedef int u_char ;
typedef size_t ssize_t ;
typedef int off_t ;
struct TYPE_6__ {int data; } ;
struct TYPE_7__ {size_t offset; TYPE_1__ name; int log; int fd; } ;
typedef TYPE_2__ ngx_file_t ;
struct TYPE_8__ {size_t Offset; size_t OffsetHigh; int * hEvent; scalar_t__ InternalHigh; scalar_t__ Internal; } ;
typedef TYPE_3__ OVERLAPPED ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *,size_t,size_t*,TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,char*,int ,...) ;

ssize_t
FUNC_2(ngx_file_t *VAR_4, u_char *VAR_5, size_t VAR_6, off_t VAR_7)
{
    u_long VAR_8;
    OVERLAPPED VAR_9, *VAR_10;

    VAR_9.Internal = 0;
    VAR_9.InternalHigh = 0;
    VAR_9.Offset = (u_long) VAR_7;
    VAR_9.OffsetHigh = (u_long) (VAR_7 >> 32);
    VAR_9.hEvent = ((void*)0);

    VAR_10 = &VAR_9;

    if (FUNC_0(VAR_4->fd, VAR_5, VAR_6, &VAR_8, VAR_10) == 0) {
        FUNC_1(VAR_2, VAR_4->log, VAR_3,
                      "WriteFile() \"%s\" failed", VAR_4->name.data);
        return VAR_0;
    }

    if (VAR_8 != VAR_6) {
        FUNC_1(VAR_1, VAR_4->log, 0,
                      "WriteFile() \"%s\" has written only %ul of %uz",
                      VAR_4->name.data, VAR_8, VAR_6);
        return VAR_0;
    }

    VAR_4->offset += VAR_8;

    return VAR_8;
}
