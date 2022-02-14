
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_mail_session_t ;
struct TYPE_5__ {int state; int* header_end; int* header_name_start; int* header_name_end; int* header_start; TYPE_1__* response; } ;
typedef TYPE_2__ ngx_mail_auth_http_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_4__ {int* pos; int* last; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_mail_session_t *VAR_4,
    ngx_mail_auth_http_ctx_t *VAR_5)
{
    u_char VAR_6, VAR_7, *VAR_8;
    enum {
        sw_start = 0,
        sw_name,
        sw_space_before_value,
        sw_value,
        sw_space_after_value,
        sw_almost_done,
        sw_header_almost_done
    } VAR_9;

    VAR_9 = VAR_5->state;

    for (VAR_8 = VAR_5->response->pos; VAR_8 < VAR_5->response->last; VAR_8++) {
        VAR_7 = *VAR_8;

        switch (VAR_9) {


        case sw_start:

            switch (VAR_7) {
            case 129:
                VAR_5->header_end = VAR_8;
                VAR_9 = sw_header_almost_done;
                break;
            case 128:
                VAR_5->header_end = VAR_8;
                goto header_done;
            default:
                VAR_9 = sw_name;
                VAR_5->header_name_start = VAR_8;

                VAR_6 = (u_char) (VAR_7 | 0x20);
                if (VAR_6 >= 'a' && VAR_6 <= 'z') {
                    break;
                }

                if (VAR_7 >= '0' && VAR_7 <= '9') {
                    break;
                }

                return VAR_2;
            }
            break;


        case sw_name:
            VAR_6 = (u_char) (VAR_7 | 0x20);
            if (VAR_6 >= 'a' && VAR_6 <= 'z') {
                break;
            }

            if (VAR_7 == ':') {
                VAR_5->header_name_end = VAR_8;
                VAR_9 = sw_space_before_value;
                break;
            }

            if (VAR_7 == '-') {
                break;
            }

            if (VAR_7 >= '0' && VAR_7 <= '9') {
                break;
            }

            if (VAR_7 == 129) {
                VAR_5->header_name_end = VAR_8;
                VAR_5->header_start = VAR_8;
                VAR_5->header_end = VAR_8;
                VAR_9 = sw_almost_done;
                break;
            }

            if (VAR_7 == 128) {
                VAR_5->header_name_end = VAR_8;
                VAR_5->header_start = VAR_8;
                VAR_5->header_end = VAR_8;
                goto done;
            }

            return VAR_2;


        case sw_space_before_value:
            switch (VAR_7) {
            case ' ':
                break;
            case 129:
                VAR_5->header_start = VAR_8;
                VAR_5->header_end = VAR_8;
                VAR_9 = sw_almost_done;
                break;
            case 128:
                VAR_5->header_start = VAR_8;
                VAR_5->header_end = VAR_8;
                goto done;
            default:
                VAR_5->header_start = VAR_8;
                VAR_9 = sw_value;
                break;
            }
            break;


        case sw_value:
            switch (VAR_7) {
            case ' ':
                VAR_5->header_end = VAR_8;
                VAR_9 = sw_space_after_value;
                break;
            case 129:
                VAR_5->header_end = VAR_8;
                VAR_9 = sw_almost_done;
                break;
            case 128:
                VAR_5->header_end = VAR_8;
                goto done;
            }
            break;


        case sw_space_after_value:
            switch (VAR_7) {
            case ' ':
                break;
            case 129:
                VAR_9 = sw_almost_done;
                break;
            case 128:
                goto done;
            default:
                VAR_9 = sw_value;
                break;
            }
            break;


        case sw_almost_done:
            switch (VAR_7) {
            case 128:
                goto done;
            default:
                return VAR_2;
            }


        case sw_header_almost_done:
            switch (VAR_7) {
            case 128:
                goto header_done;
            default:
                return VAR_2;
            }
        }
    }

    VAR_5->response->pos = VAR_8;
    VAR_5->state = VAR_9;

    return VAR_0;

done:

    VAR_5->response->pos = VAR_8 + 1;
    VAR_5->state = sw_start;

    return VAR_3;

header_done:

    VAR_5->response->pos = VAR_8 + 1;
    VAR_5->state = sw_start;

    return VAR_1;
}
