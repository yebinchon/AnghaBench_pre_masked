
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_8__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {struct TYPE_9__* next; TYPE_4__* buf; } ;
typedef TYPE_3__ ngx_chain_t ;
struct TYPE_10__ {char* last; char* pos; } ;
typedef TYPE_4__ ngx_buf_t ;
struct TYPE_7__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,char*,...) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_rtmp_session_t *VAR_5,
        ngx_chain_t *VAR_6)
{
    ngx_buf_t *VAR_7;
    ngx_int_t VAR_8;
    u_char VAR_9;



    VAR_8 = 9;
    while (VAR_6) {
        VAR_7 = VAR_6->buf;
        if (VAR_7->last - VAR_7->pos > VAR_8) {
            VAR_9 = VAR_7->pos[VAR_8];
            if (VAR_9 >= (u_char)'0' && VAR_9 <= (u_char)'9') {
                FUNC_0(VAR_2, VAR_5->connection->log, 0,
                    "notify: HTTP retcode: %dxx", (int)(VAR_9 - '0'));
                switch (VAR_9) {
                    case (u_char) '2':
                        return VAR_4;
                    case (u_char) '3':
                        return VAR_0;
                    default:
                        return VAR_1;
                }
            }

            FUNC_1(VAR_3, VAR_5->connection->log, 0,
                    "notify: invalid HTTP retcode: %d..", (int)VAR_9);

            return VAR_1;
        }
        VAR_8 -= (VAR_7->last - VAR_7->pos);
        VAR_6 = VAR_6->next;
    }

    FUNC_1(VAR_3, VAR_5->connection->log, 0,
            "notify: empty or broken HTTP response");






    return VAR_1;
}
