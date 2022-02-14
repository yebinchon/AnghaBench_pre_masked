
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_17__ {int log; } ;
typedef TYPE_1__ ngx_pool_t ;
struct TYPE_18__ {size_t saved_len; int* saved; scalar_t__ table; } ;
typedef TYPE_2__ ngx_http_charset_ctx_t ;
struct TYPE_19__ {TYPE_4__* buf; struct TYPE_19__* next; } ;
typedef TYPE_3__ ngx_chain_t ;
struct TYPE_20__ {int* pos; int* last; int sync; int* end; struct TYPE_20__* shadow; int flush; int last_in_chain; int last_buf; scalar_t__ temporary; int mmap; int memory; } ;
typedef TYPE_4__ ngx_buf_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 TYPE_3__* FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 TYPE_3__* FUNC_2 (TYPE_1__*,TYPE_2__*,size_t) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (int ,int ,int ,char*,size_t) ;
 int FUNC_5 (int*,int*,size_t) ;
 int* FUNC_6 (int*,char*,int) ;
 int FUNC_7 (int**,size_t) ;

__attribute__((used)) static ngx_chain_t *
FUNC_8(ngx_pool_t *VAR_3, ngx_buf_t *VAR_4,
    ngx_http_charset_ctx_t *VAR_5)
{
    size_t VAR_6, VAR_7;
    u_char VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12, **VAR_13;
    uint32_t VAR_14;
    ngx_buf_t *VAR_15;
    ngx_uint_t VAR_16;
    ngx_chain_t *VAR_17, *VAR_18, **VAR_19;

    VAR_10 = VAR_4->pos;

    if (VAR_5->saved_len == 0) {

        for ( ; VAR_10 < VAR_4->last; VAR_10++) {

            if (*VAR_10 < 0x80) {
                continue;
            }

            VAR_6 = VAR_10 - VAR_4->pos;

            if (VAR_6 > 512) {
                VAR_17 = FUNC_1(VAR_3, VAR_5);
                if (VAR_17 == ((void*)0)) {
                    return ((void*)0);
                }

                VAR_15 = VAR_17->buf;

                VAR_15->temporary = VAR_4->temporary;
                VAR_15->memory = VAR_4->memory;
                VAR_15->mmap = VAR_4->mmap;
                VAR_15->flush = VAR_4->flush;

                VAR_15->pos = VAR_4->pos;
                VAR_15->last = VAR_10;

                VAR_17->buf = VAR_15;
                VAR_17->next = ((void*)0);

                VAR_7 = VAR_4->last - VAR_10;

                VAR_12 = VAR_10;
                VAR_14 = FUNC_7(&VAR_12, VAR_7);

                if (VAR_14 == 0xfffffffe) {


                    FUNC_5(VAR_5->saved, VAR_10, VAR_7);
                    VAR_5->saved_len = VAR_7;

                    VAR_15->shadow = VAR_4;

                    return VAR_17;
                }

            } else {
                VAR_17 = ((void*)0);
                VAR_7 = VAR_6 + VAR_4->last - VAR_10;
                VAR_10 = VAR_4->pos;
            }

            if (VAR_7 < VAR_0) {
                VAR_7 += VAR_0;
            }

            VAR_18 = FUNC_2(VAR_3, VAR_5, VAR_7);
            if (VAR_18 == ((void*)0)) {
                return ((void*)0);
            }

            if (VAR_17) {
                VAR_17->next = VAR_18;

            } else {
                VAR_17 = VAR_18;
            }

            VAR_15 = VAR_18->buf;
            VAR_11 = VAR_15->pos;

            goto recode;
        }

        VAR_17 = FUNC_0(VAR_3);
        if (VAR_17 == ((void*)0)) {
            return ((void*)0);
        }

        VAR_17->buf = VAR_4;
        VAR_17->next = ((void*)0);

        return VAR_17;
    }



    FUNC_4(VAR_1, VAR_3->log, 0,
                   "http charset utf saved: %z", VAR_5->saved_len);

    VAR_9 = VAR_10;

    for (VAR_16 = VAR_5->saved_len; VAR_16 < VAR_2; VAR_16++) {
        VAR_5->saved[VAR_16] = *VAR_9++;

        if (VAR_9 == VAR_4->last) {
            break;
        }
    }

    VAR_12 = VAR_5->saved;
    VAR_14 = FUNC_7(&VAR_12, VAR_16);

    VAR_8 = '\0';

    if (VAR_14 < 0x10000) {
        VAR_13 = (u_char **) VAR_5->table;
        VAR_9 = VAR_13[VAR_14 >> 8];

        if (VAR_9) {
            VAR_8 = VAR_9[VAR_14 & 0xff];
        }

    } else if (VAR_14 == 0xfffffffe) {



        if (VAR_16 < VAR_2) {
            VAR_17 = FUNC_1(VAR_3, VAR_5);
            if (VAR_17 == ((void*)0)) {
                return ((void*)0);
            }

            VAR_15 = VAR_17->buf;

            VAR_15->pos = VAR_4->pos;
            VAR_15->last = VAR_4->last;
            VAR_15->sync = 1;
            VAR_15->shadow = VAR_4;

            FUNC_5(&VAR_5->saved[VAR_5->saved_len], VAR_10, VAR_16);
            VAR_5->saved_len += VAR_16;

            return VAR_17;
        }
    }

    VAR_7 = VAR_4->last - VAR_4->pos;

    if (VAR_7 < VAR_0) {
        VAR_7 += VAR_0;
    }

    VAR_18 = FUNC_2(VAR_3, VAR_5, VAR_7);
    if (VAR_18 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_17 = VAR_18;

    VAR_15 = VAR_18->buf;
    VAR_11 = VAR_15->pos;

    if (VAR_8) {
        *VAR_11++ = VAR_8;

    } else if (VAR_14 == 0xfffffffe) {
        *VAR_11++ = '?';

        FUNC_3(VAR_1, VAR_3->log, 0,
                       "http charset invalid utf 0");

        VAR_12 = &VAR_5->saved[VAR_2];

    } else if (VAR_14 > 0x10ffff) {
        *VAR_11++ = '?';

        FUNC_3(VAR_1, VAR_3->log, 0,
                       "http charset invalid utf 1");

    } else {
        VAR_11 = FUNC_6(VAR_11, "&#%uD;", VAR_14);
    }

    VAR_10 += (VAR_12 - VAR_5->saved) - VAR_5->saved_len;
    VAR_5->saved_len = 0;

recode:

    VAR_19 = &VAR_18->next;

    VAR_13 = (u_char **) VAR_5->table;

    while (VAR_10 < VAR_4->last) {

        if ((size_t) (VAR_15->end - VAR_11) < VAR_0) {
            VAR_15->last = VAR_11;

            VAR_7 = VAR_4->last - VAR_10 + VAR_0;

            VAR_18 = FUNC_2(VAR_3, VAR_5, VAR_7);
            if (VAR_18 == ((void*)0)) {
                return ((void*)0);
            }

            *VAR_19 = VAR_18;
            VAR_19 = &VAR_18->next;

            VAR_15 = VAR_18->buf;
            VAR_11 = VAR_15->pos;
        }

        if (*VAR_10 < 0x80) {
            *VAR_11++ = *VAR_10++;
            continue;
        }

        VAR_6 = VAR_4->last - VAR_10;

        VAR_14 = FUNC_7(&VAR_10, VAR_6);

        if (VAR_14 < 0x10000) {

            VAR_9 = VAR_13[VAR_14 >> 8];

            if (VAR_9) {
                VAR_8 = VAR_9[VAR_14 & 0xff];

                if (VAR_8) {
                    *VAR_11++ = VAR_8;
                    continue;
                }
            }

            VAR_11 = FUNC_6(VAR_11, "&#%uD;", VAR_14);

            continue;
        }

        if (VAR_14 == 0xfffffffe) {


            FUNC_5(VAR_5->saved, VAR_10, VAR_6);
            VAR_5->saved_len = VAR_6;

            if (VAR_15->pos == VAR_11) {
                VAR_15->sync = 1;
                VAR_15->temporary = 0;
            }

            break;
        }

        if (VAR_14 > 0x10ffff) {
            *VAR_11++ = '?';

            FUNC_3(VAR_1, VAR_3->log, 0,
                           "http charset invalid utf 2");

            continue;
        }



        VAR_11 = FUNC_6(VAR_11, "&#%uD;", VAR_14);
    }

    VAR_15->last = VAR_11;

    VAR_15->last_buf = VAR_4->last_buf;
    VAR_15->last_in_chain = VAR_4->last_in_chain;
    VAR_15->flush = VAR_4->flush;

    VAR_15->shadow = VAR_4;

    return VAR_17;
}
