
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ssize_t ;
struct TYPE_3__ {size_t size; int * buf; int fd; int iv; int key; int log; int encrypt; } ;
typedef TYPE_1__ ngx_rtmp_mpegts_file_t ;
typedef int ngx_int_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,size_t,int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,char*,size_t) ;
 int FUNC_2 (int *,int *,size_t) ;
 scalar_t__ FUNC_3 (int ,int *,int) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_rtmp_mpegts_file_t *VAR_4, u_char *VAR_5,
    size_t VAR_6)
{
    u_char *VAR_7;
    size_t VAR_8, VAR_9;
    ssize_t VAR_10;

    static u_char VAR_11[1024];

    if (!VAR_4->encrypt) {
        FUNC_1(VAR_2, VAR_4->log, 0,
                       "mpegts: write %uz bytes", VAR_6);

        VAR_10 = FUNC_3(VAR_4->fd, VAR_5, VAR_6);
        if (VAR_10 < 0) {
            return VAR_1;
        }

        return VAR_3;
    }



    FUNC_1(VAR_2, VAR_4->log, 0,
                   "mpegts: write %uz encrypted bytes", VAR_6);

    VAR_7 = VAR_11;
    VAR_8 = sizeof(VAR_11);

    if (VAR_4->size > 0 && VAR_4->size + VAR_6 >= 16) {
        FUNC_2(VAR_4->buf + VAR_4->size, VAR_5, 16 - VAR_4->size);

        VAR_5 += 16 - VAR_4->size;
        VAR_6 -= 16 - VAR_4->size;

        FUNC_0(VAR_4->buf, VAR_7, 16, &VAR_4->key, VAR_4->iv, VAR_0);

        VAR_7 += 16;
        VAR_8 -= 16;

        VAR_4->size = 0;
    }

    for ( ;; ) {
        VAR_9 = VAR_6 & ~0x0f;

        if (VAR_9 > 0) {
            if (VAR_9 > VAR_8) {
                VAR_9 = VAR_8;
            }

            FUNC_0(VAR_5, VAR_7, VAR_9, &VAR_4->key, VAR_4->iv, VAR_0);

            VAR_5 += VAR_9;
            VAR_6 -= VAR_9;

        } else if (VAR_7 == VAR_11) {
            break;
        }

        VAR_10 = FUNC_3(VAR_4->fd, VAR_11, VAR_7 - VAR_11 + VAR_9);
        if (VAR_10 < 0) {
            return VAR_1;
        }

        VAR_7 = VAR_11;
        VAR_8 = sizeof(VAR_11);
    }

    if (VAR_6) {
        FUNC_2(VAR_4->buf + VAR_4->size, VAR_5, VAR_6);
        VAR_4->size += VAR_6;
    }

    return VAR_3;
}
