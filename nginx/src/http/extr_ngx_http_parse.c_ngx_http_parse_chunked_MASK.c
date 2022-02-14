
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char u_char ;
typedef int ngx_int_t ;
struct TYPE_9__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_10__ {int state; scalar_t__ size; int length; } ;
typedef TYPE_3__ ngx_http_chunked_t ;
struct TYPE_11__ {char* pos; char* last; } ;
typedef TYPE_4__ ngx_buf_t ;
struct TYPE_8__ {int log; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,char*,char,int) ;

ngx_int_t
FUNC_1(ngx_http_request_t *VAR_6, ngx_buf_t *VAR_7,
    ngx_http_chunked_t *VAR_8)
{
    u_char *VAR_9, VAR_10, VAR_11;
    ngx_int_t VAR_12;
    enum {
        sw_chunk_start = 0,
        sw_chunk_size,
        sw_chunk_extension,
        sw_chunk_extension_almost_done,
        sw_chunk_data,
        sw_after_data,
        sw_after_data_almost_done,
        sw_last_chunk_extension,
        sw_last_chunk_extension_almost_done,
        sw_trailer,
        sw_trailer_almost_done,
        sw_trailer_header,
        sw_trailer_header_almost_done
    } VAR_13;

    VAR_13 = VAR_8->state;

    if (VAR_13 == sw_chunk_data && VAR_8->size == 0) {
        VAR_13 = sw_after_data;
    }

    VAR_12 = VAR_0;

    for (VAR_9 = VAR_7->pos; VAR_9 < VAR_7->last; VAR_9++) {

        VAR_10 = *VAR_9;

        FUNC_0(VAR_3, VAR_6->connection->log, 0,
                       "http chunked byte: %02Xd s:%d", VAR_10, VAR_13);

        switch (VAR_13) {

        case sw_chunk_start:
            if (VAR_10 >= '0' && VAR_10 <= '9') {
                VAR_13 = sw_chunk_size;
                VAR_8->size = VAR_10 - '0';
                break;
            }

            VAR_11 = (u_char) (VAR_10 | 0x20);

            if (VAR_11 >= 'a' && VAR_11 <= 'f') {
                VAR_13 = sw_chunk_size;
                VAR_8->size = VAR_11 - 'a' + 10;
                break;
            }

            goto invalid;

        case sw_chunk_size:
            if (VAR_8->size > VAR_4 / 16) {
                goto invalid;
            }

            if (VAR_10 >= '0' && VAR_10 <= '9') {
                VAR_8->size = VAR_8->size * 16 + (VAR_10 - '0');
                break;
            }

            VAR_11 = (u_char) (VAR_10 | 0x20);

            if (VAR_11 >= 'a' && VAR_11 <= 'f') {
                VAR_8->size = VAR_8->size * 16 + (VAR_11 - 'a' + 10);
                break;
            }

            if (VAR_8->size == 0) {

                switch (VAR_10) {
                case 129:
                    VAR_13 = sw_last_chunk_extension_almost_done;
                    break;
                case 128:
                    VAR_13 = sw_trailer;
                    break;
                case ';':
                case ' ':
                case '\t':
                    VAR_13 = sw_last_chunk_extension;
                    break;
                default:
                    goto invalid;
                }

                break;
            }

            switch (VAR_10) {
            case 129:
                VAR_13 = sw_chunk_extension_almost_done;
                break;
            case 128:
                VAR_13 = sw_chunk_data;
                break;
            case ';':
            case ' ':
            case '\t':
                VAR_13 = sw_chunk_extension;
                break;
            default:
                goto invalid;
            }

            break;

        case sw_chunk_extension:
            switch (VAR_10) {
            case 129:
                VAR_13 = sw_chunk_extension_almost_done;
                break;
            case 128:
                VAR_13 = sw_chunk_data;
            }
            break;

        case sw_chunk_extension_almost_done:
            if (VAR_10 == 128) {
                VAR_13 = sw_chunk_data;
                break;
            }
            goto invalid;

        case sw_chunk_data:
            VAR_12 = VAR_5;
            goto data;

        case sw_after_data:
            switch (VAR_10) {
            case 129:
                VAR_13 = sw_after_data_almost_done;
                break;
            case 128:
                VAR_13 = sw_chunk_start;
                break;
            default:
                goto invalid;
            }
            break;

        case sw_after_data_almost_done:
            if (VAR_10 == 128) {
                VAR_13 = sw_chunk_start;
                break;
            }
            goto invalid;

        case sw_last_chunk_extension:
            switch (VAR_10) {
            case 129:
                VAR_13 = sw_last_chunk_extension_almost_done;
                break;
            case 128:
                VAR_13 = sw_trailer;
            }
            break;

        case sw_last_chunk_extension_almost_done:
            if (VAR_10 == 128) {
                VAR_13 = sw_trailer;
                break;
            }
            goto invalid;

        case sw_trailer:
            switch (VAR_10) {
            case 129:
                VAR_13 = sw_trailer_almost_done;
                break;
            case 128:
                goto done;
            default:
                VAR_13 = sw_trailer_header;
            }
            break;

        case sw_trailer_almost_done:
            if (VAR_10 == 128) {
                goto done;
            }
            goto invalid;

        case sw_trailer_header:
            switch (VAR_10) {
            case 129:
                VAR_13 = sw_trailer_header_almost_done;
                break;
            case 128:
                VAR_13 = sw_trailer;
            }
            break;

        case sw_trailer_header_almost_done:
            if (VAR_10 == 128) {
                VAR_13 = sw_trailer;
                break;
            }
            goto invalid;

        }
    }

data:

    VAR_8->state = VAR_13;
    VAR_7->pos = VAR_9;

    if (VAR_8->size > VAR_4 - 5) {
        goto invalid;
    }

    switch (VAR_13) {

    case sw_chunk_start:
        VAR_8->length = 3 ;
        break;
    case sw_chunk_size:
        VAR_8->length = 1
                      + (VAR_8->size ? VAR_8->size + 4
                                   : 1 );
        break;
    case sw_chunk_extension:
    case sw_chunk_extension_almost_done:
        VAR_8->length = 1 + VAR_8->size + 4 ;
        break;
    case sw_chunk_data:
        VAR_8->length = VAR_8->size + 4 ;
        break;
    case sw_after_data:
    case sw_after_data_almost_done:
        VAR_8->length = 4 ;
        break;
    case sw_last_chunk_extension:
    case sw_last_chunk_extension_almost_done:
        VAR_8->length = 2 ;
        break;
    case sw_trailer:
    case sw_trailer_almost_done:
        VAR_8->length = 1 ;
        break;
    case sw_trailer_header:
    case sw_trailer_header_almost_done:
        VAR_8->length = 2 ;
        break;

    }

    return VAR_12;

done:

    VAR_8->state = 0;
    VAR_7->pos = VAR_9 + 1;

    return VAR_1;

invalid:

    return VAR_2;
}
