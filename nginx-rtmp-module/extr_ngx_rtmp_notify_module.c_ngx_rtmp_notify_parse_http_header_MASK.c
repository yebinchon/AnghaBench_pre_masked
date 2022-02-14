
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_6__ {size_t len; char* data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_rtmp_session_t ;
typedef size_t ngx_int_t ;
struct TYPE_7__ {struct TYPE_7__* next; TYPE_3__* buf; } ;
typedef TYPE_2__ ngx_chain_t ;
struct TYPE_8__ {char* pos; char* last; } ;
typedef TYPE_3__ ngx_buf_t ;


 size_t VAR_0 ;
 int FUNC_0 (char) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_rtmp_session_t *VAR_1,
        ngx_chain_t *VAR_2, ngx_str_t *VAR_3, u_char *VAR_4, size_t VAR_5)
{
    ngx_buf_t *VAR_6;
    ngx_int_t VAR_7;
    u_char *VAR_8, VAR_9;
    ngx_uint_t VAR_10;

    enum {
        parse_name,
        parse_space,
        parse_value,
        parse_value_newline
    } VAR_11 = parse_name;

    VAR_10 = 0;
    VAR_7 = 0;

    while (VAR_2) {
        VAR_6 = VAR_2->buf;

        for (VAR_8 = VAR_6->pos; VAR_8 != VAR_6->last; ++VAR_8) {
            VAR_9 = *VAR_8;

            if (VAR_9 == '\r') {
                continue;
            }

            switch (VAR_11) {
                case parse_value_newline:
                    if (VAR_9 == ' ' || VAR_9 == '\t') {
                        VAR_11 = parse_space;
                        break;
                    }

                    if (VAR_7) {
                        return VAR_10;
                    }

                    if (VAR_9 == '\n') {
                        return VAR_0;
                    }

                    VAR_10 = 0;
                    VAR_11 = parse_name;


                case parse_name:
                    switch (VAR_9) {
                        case ':':
                            VAR_7 = (VAR_10 == VAR_3->len);
                            VAR_10 = 0;
                            VAR_11 = parse_space;
                            break;
                        case '\n':
                            VAR_10 = 0;
                            break;
                        default:
                            if (VAR_10 < VAR_3->len &&
                                FUNC_0(VAR_9) == FUNC_0(VAR_3->data[VAR_10]))
                            {
                                ++VAR_10;
                                break;
                            }
                            VAR_10 = VAR_3->len + 1;
                    }
                    break;

                case parse_space:
                    if (VAR_9 == ' ' || VAR_9 == '\t') {
                        break;
                    }
                    VAR_11 = parse_value;


                case parse_value:
                    if (VAR_9 == '\n') {
                        VAR_11 = parse_value_newline;
                        break;
                    }

                    if (VAR_7 && VAR_10 + 1 < VAR_5) {
                        VAR_4[VAR_10++] = VAR_9;
                    }

                    break;
            }
        }

        VAR_2 = VAR_2->next;
    }

    return VAR_0;
}
