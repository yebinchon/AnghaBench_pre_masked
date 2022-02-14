
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_7__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int ngx_http_fastcgi_state_e ;
struct TYPE_8__ {int state; int* pos; int* last; int length; size_t padding; int type; } ;
typedef TYPE_3__ ngx_http_fastcgi_ctx_t ;
struct TYPE_6__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_5,
    ngx_http_fastcgi_ctx_t *VAR_6)
{
    u_char VAR_7, *VAR_8;
    ngx_http_fastcgi_state_e VAR_9;

    VAR_9 = VAR_6->state;

    for (VAR_8 = VAR_6->pos; VAR_8 < VAR_6->last; VAR_8++) {

        VAR_7 = *VAR_8;

        FUNC_0(VAR_2, VAR_5->connection->log, 0,
                       "http fastcgi record byte: %02Xd", VAR_7);

        switch (VAR_9) {

        case 128:
            if (VAR_7 != 1) {
                FUNC_1(VAR_3, VAR_5->connection->log, 0,
                              "upstream sent unsupported FastCGI "
                              "protocol version: %d", VAR_7);
                return VAR_1;
            }
            VAR_9 = 129;
            break;

        case 129:
            switch (VAR_7) {
            case 138:
            case 139:
            case 140:
                VAR_6->type = (ngx_uint_t) VAR_7;
                break;
            default:
                FUNC_1(VAR_3, VAR_5->connection->log, 0,
                              "upstream sent invalid FastCGI "
                              "record type: %d", VAR_7);
                return VAR_1;

            }
            VAR_9 = 132;
            break;



        case 132:
            if (VAR_7 != 0) {
                FUNC_1(VAR_3, VAR_5->connection->log, 0,
                              "upstream sent unexpected FastCGI "
                              "request id high byte: %d", VAR_7);
                return VAR_1;
            }
            VAR_9 = 131;
            break;

        case 131:
            if (VAR_7 != 1) {
                FUNC_1(VAR_3, VAR_5->connection->log, 0,
                              "upstream sent unexpected FastCGI "
                              "request id low byte: %d", VAR_7);
                return VAR_1;
            }
            VAR_9 = 137;
            break;

        case 137:
            VAR_6->length = VAR_7 << 8;
            VAR_9 = 136;
            break;

        case 136:
            VAR_6->length |= (size_t) VAR_7;
            VAR_9 = 133;
            break;

        case 133:
            VAR_6->padding = (size_t) VAR_7;
            VAR_9 = 130;
            break;

        case 130:
            VAR_9 = 135;

            FUNC_0(VAR_2, VAR_5->connection->log, 0,
                           "http fastcgi record length: %z", VAR_6->length);

            VAR_6->pos = VAR_8 + 1;
            VAR_6->state = VAR_9;

            return VAR_4;


        case 135:
        case 134:
            break;
        }
    }

    VAR_6->pos = VAR_8;
    VAR_6->state = VAR_9;

    return VAR_0;
}
