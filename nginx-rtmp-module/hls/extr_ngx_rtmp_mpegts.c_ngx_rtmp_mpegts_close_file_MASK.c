
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ssize_t ;
struct TYPE_3__ {int fd; int iv; int key; scalar_t__ buf; scalar_t__ size; scalar_t__ encrypt; } ;
typedef TYPE_1__ ngx_rtmp_mpegts_file_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *,int,int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int *,int) ;

ngx_int_t
FUNC_4(ngx_rtmp_mpegts_file_t *VAR_3)
{
    u_char VAR_4[16];
    ssize_t VAR_5;

    if (VAR_3->encrypt) {
        FUNC_2(VAR_3->buf + VAR_3->size, 16 - VAR_3->size, 16 - VAR_3->size);

        FUNC_0(VAR_3->buf, VAR_4, 16, &VAR_3->key, VAR_3->iv, VAR_0);

        VAR_5 = FUNC_3(VAR_3->fd, VAR_4, 16);
        if (VAR_5 < 0) {
            return VAR_1;
        }
    }

    FUNC_1(VAR_3->fd);

    return VAR_2;
}
