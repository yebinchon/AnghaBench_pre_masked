
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_8__ {char* data; size_t len; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_rtmp_eval_t ;
typedef int ngx_log_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {char* pos; char* last; char* start; char* end; } ;
typedef TYPE_2__ ngx_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int,int *) ;
 int FUNC_1 (TYPE_2__*,char*,int,int *) ;
 int FUNC_2 (void*,TYPE_2__*,int **,TYPE_1__*,int *) ;

ngx_int_t
FUNC_3(void *VAR_3, ngx_str_t *VAR_4, ngx_rtmp_eval_t **VAR_5, ngx_str_t *VAR_6,
    ngx_log_t *VAR_7)
{
    u_char VAR_8, *VAR_9;
    ngx_str_t VAR_10;
    ngx_buf_t VAR_11;
    ngx_uint_t VAR_12;

    enum {
        NORMAL,
        ESCAPE,
        NAME,
        SNAME
    } VAR_13 = NORMAL;

    VAR_11.pos = VAR_11.last = VAR_11.start = FUNC_0(VAR_2, VAR_7);
    if (VAR_11.pos == ((void*)0)) {
        return VAR_0;
    }

    VAR_11.end = VAR_11.pos + VAR_2;
    VAR_10.data = ((void*)0);

    for (VAR_12 = 0; VAR_12 < VAR_4->len; ++VAR_12) {
        VAR_9 = &VAR_4->data[VAR_12];
        VAR_8 = *VAR_9;

        switch (VAR_13) {
            case SNAME:
                if (VAR_8 != '}') {
                    continue;
                }

                VAR_10.len = VAR_9 - VAR_10.data;
                FUNC_2(VAR_3, &VAR_11, VAR_5, &VAR_10, VAR_7);

                VAR_13 = NORMAL;

                continue;

            case NAME:
                if (VAR_8 == '{' && VAR_10.data == VAR_9) {
                    ++VAR_10.data;
                    VAR_13 = SNAME;
                    continue;
                }
                if ((VAR_8 >= 'a' && VAR_8 <= 'z') || (VAR_8 >= 'A' && VAR_8 <= 'Z')) {
                    continue;
                }

                VAR_10.len = VAR_9 - VAR_10.data;
                FUNC_2(VAR_3, &VAR_11, VAR_5, &VAR_10, VAR_7);


            case NORMAL:
                switch (VAR_8) {
                    case '$':
                        VAR_10.data = VAR_9 + 1;
                        VAR_13 = NAME;
                        continue;
                    case '\\':
                        VAR_13 = ESCAPE;
                        continue;
                }

            case ESCAPE:
                FUNC_1(&VAR_11, &VAR_8, 1, VAR_7);
                VAR_13 = NORMAL;
                break;

        }
    }

    if (VAR_13 == NAME) {
        VAR_9 = &VAR_4->data[VAR_12];
        VAR_10.len = VAR_9 - VAR_10.data;
        FUNC_2(VAR_3, &VAR_11, VAR_5, &VAR_10, VAR_7);
    }

    VAR_8 = 0;
    FUNC_1(&VAR_11, &VAR_8, 1, VAR_7);

    VAR_6->data = VAR_11.pos;
    VAR_6->len = VAR_11.last - VAR_11.pos - 1;

    return VAR_1;
}
