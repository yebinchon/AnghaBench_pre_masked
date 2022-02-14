
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


typedef void* u_char ;
typedef int ngx_uint_t ;
struct TYPE_19__ {int data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_20__ {scalar_t__ src; scalar_t__ dst; void** src2dst; char* dst2src; } ;
typedef TYPE_3__ ngx_http_charset_tables_t ;
struct TYPE_21__ {int length; } ;
typedef TYPE_4__ ngx_http_charset_t ;
struct TYPE_25__ {TYPE_4__* elts; } ;
struct TYPE_17__ {int nelts; TYPE_3__* elts; } ;
struct TYPE_22__ {TYPE_9__ charsets; TYPE_16__ tables; } ;
typedef TYPE_5__ ngx_http_charset_main_conf_t ;
struct TYPE_23__ {int characters; TYPE_4__* charset; TYPE_3__* table; } ;
typedef TYPE_6__ ngx_http_charset_conf_ctx_t ;
struct TYPE_24__ {void* handler_conf; int handler; TYPE_6__* ctx; int pool; TYPE_1__* args; } ;
typedef TYPE_7__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_18__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (TYPE_16__*) ;
 int FUNC_1 (int ,TYPE_7__*,int ,char*,TYPE_2__*,TYPE_2__*) ;
 char* FUNC_2 (TYPE_7__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_9__*,TYPE_2__*) ;
 int VAR_4 ;
 void* FUNC_4 (int ,int) ;
 void* FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,void**) ;

__attribute__((used)) static char *
FUNC_7(ngx_conf_t *VAR_5, ngx_command_t *VAR_6, void *VAR_7)
{
    ngx_http_charset_main_conf_t *VAR_8 = VAR_7;

    char *VAR_9;
    u_char *VAR_10, *VAR_11, **VAR_12;
    ngx_int_t VAR_13, VAR_14;
    ngx_uint_t VAR_15, VAR_16;
    ngx_str_t *VAR_17;
    ngx_conf_t VAR_18;
    ngx_http_charset_t *VAR_19;
    ngx_http_charset_tables_t *VAR_20;
    ngx_http_charset_conf_ctx_t VAR_21;

    VAR_17 = VAR_5->args->elts;

    VAR_13 = FUNC_3(&VAR_8->charsets, &VAR_17[1]);
    if (VAR_13 == VAR_1) {
        return VAR_0;
    }

    VAR_14 = FUNC_3(&VAR_8->charsets, &VAR_17[2]);
    if (VAR_14 == VAR_1) {
        return VAR_0;
    }

    if (VAR_13 == VAR_14) {
        FUNC_1(VAR_2, VAR_5, 0,
                           "\"charset_map\" between the same charsets "
                           "\"%V\" and \"%V\"", &VAR_17[1], &VAR_17[2]);
        return VAR_0;
    }

    VAR_20 = VAR_8->tables.elts;
    for (VAR_15 = 0; VAR_15 < VAR_8->tables.nelts; VAR_15++) {
        if ((VAR_13 == VAR_20->src && VAR_14 == VAR_20->dst)
             || (VAR_13 == VAR_20->dst && VAR_14 == VAR_20->src))
        {
            FUNC_1(VAR_2, VAR_5, 0,
                               "duplicate \"charset_map\" between "
                               "\"%V\" and \"%V\"", &VAR_17[1], &VAR_17[2]);
            return VAR_0;
        }
    }

    VAR_20 = FUNC_0(&VAR_8->tables);
    if (VAR_20 == ((void*)0)) {
        return VAR_0;
    }

    VAR_20->src = VAR_13;
    VAR_20->dst = VAR_14;

    if (FUNC_6(VAR_17[2].data, (u_char *) "utf-8") == 0) {
        VAR_20->src2dst = FUNC_5(VAR_5->pool, 256 * VAR_3);
        if (VAR_20->src2dst == ((void*)0)) {
            return VAR_0;
        }

        VAR_20->dst2src = FUNC_5(VAR_5->pool, 256 * sizeof(void *));
        if (VAR_20->dst2src == ((void*)0)) {
            return VAR_0;
        }

        VAR_11 = FUNC_5(VAR_5->pool, 256);
        if (VAR_11 == ((void*)0)) {
            return VAR_0;
        }

        VAR_12 = (u_char **) &VAR_20->dst2src[0];
        VAR_12[0] = VAR_11;

        for (VAR_15 = 0; VAR_15 < 128; VAR_15++) {
            VAR_10 = &VAR_20->src2dst[VAR_15 * VAR_3];
            VAR_10[0] = '\1';
            VAR_10[1] = (u_char) VAR_15;
            VAR_11[VAR_15] = (u_char) VAR_15;
        }

        for ( ; VAR_15 < 256; VAR_15++) {
            VAR_10 = &VAR_20->src2dst[VAR_15 * VAR_3];
            VAR_10[0] = '\1';
            VAR_10[1] = '?';
        }

    } else {
        VAR_20->src2dst = FUNC_4(VAR_5->pool, 256);
        if (VAR_20->src2dst == ((void*)0)) {
            return VAR_0;
        }

        VAR_20->dst2src = FUNC_4(VAR_5->pool, 256);
        if (VAR_20->dst2src == ((void*)0)) {
            return VAR_0;
        }

        for (VAR_15 = 0; VAR_15 < 128; VAR_15++) {
            VAR_20->src2dst[VAR_15] = (u_char) VAR_15;
            VAR_20->dst2src[VAR_15] = (u_char) VAR_15;
        }

        for ( ; VAR_15 < 256; VAR_15++) {
            VAR_20->src2dst[VAR_15] = '?';
            VAR_20->dst2src[VAR_15] = '?';
        }
    }

    VAR_19 = VAR_8->charsets.elts;

    VAR_21.table = VAR_20;
    VAR_21.charset = &VAR_19[VAR_14];
    VAR_21.characters = 0;

    VAR_18 = *VAR_5;
    VAR_5->ctx = &VAR_21;
    VAR_5->handler = VAR_4;
    VAR_5->handler_conf = VAR_7;

    VAR_9 = FUNC_2(VAR_5, ((void*)0));

    *VAR_5 = VAR_18;

    if (VAR_21.characters) {
        VAR_16 = VAR_21.charset->length;
        VAR_21.charset->length /= VAR_21.characters;

        if (((VAR_16 * 10) / VAR_21.characters) % 10 > 4) {
            VAR_21.charset->length++;
        }
    }

    return VAR_9;
}
