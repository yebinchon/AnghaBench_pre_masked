
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_26__ {int * data; int handler; } ;
typedef TYPE_2__ ngx_pool_cleanup_t ;
struct TYPE_27__ {int pool; TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_28__ {int angle; int max_width; int max_height; int image; int type; int force; } ;
typedef TYPE_4__ ngx_http_image_filter_ctx_t ;
struct TYPE_29__ {scalar_t__ filter; scalar_t__ interlace; int sharpen; int shcv; scalar_t__ transparency; } ;
typedef TYPE_5__ ngx_http_image_filter_conf_t ;
struct TYPE_30__ {int memory; int last_buf; int * last; int * pos; } ;
typedef TYPE_6__ ngx_buf_t ;
typedef int * gdImagePtr ;
struct TYPE_25__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ,int ,int,int,int,int) ;
 int FUNC_7 (int *,int *,int ,int ,int ,int ,int,int,int,int) ;
 int FUNC_8 (int *,int *,int,int,int ,int ,int,int,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *,int,int) ;
 TYPE_6__* FUNC_19 (int ) ;
 TYPE_5__* FUNC_20 (TYPE_3__*,int ) ;
 TYPE_6__* FUNC_21 (TYPE_3__*,TYPE_4__*) ;
 int VAR_4 ;
 int FUNC_22 (TYPE_3__*,int ,int ) ;
 int VAR_5 ;
 int FUNC_23 (TYPE_3__*,TYPE_6__*) ;
 int * FUNC_24 (TYPE_3__*,int,int,int) ;
 int * FUNC_25 (TYPE_3__*,int ,int *,int*) ;
 int * FUNC_26 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_27 (TYPE_3__*) ;
 int FUNC_28 (int ,int ,int ,char*,int,int,int) ;
 int FUNC_29 (int ,int ,int ,char*,int,int,int,int) ;
 int FUNC_30 (int ,int ) ;
 TYPE_2__* FUNC_31 (int ,int ) ;

__attribute__((used)) static ngx_buf_t *
FUNC_32(ngx_http_request_t *VAR_6, ngx_http_image_filter_ctx_t *VAR_7)
{
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16,
                                   VAR_17, VAR_18, VAR_19, VAR_20,
                                   VAR_21, VAR_22, VAR_23, VAR_24;
    u_char *VAR_25;
    ngx_buf_t *VAR_26;
    ngx_uint_t VAR_27;
    gdImagePtr VAR_28, VAR_29;
    ngx_pool_cleanup_t *VAR_30;
    ngx_http_image_filter_conf_t *VAR_31;

    VAR_28 = FUNC_26(VAR_6, VAR_7);

    if (VAR_28 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_8 = FUNC_14(VAR_28);
    VAR_9 = FUNC_15(VAR_28);

    VAR_31 = FUNC_20(VAR_6, VAR_5);

    if (!VAR_7->force
        && VAR_7->angle == 0
        && (ngx_uint_t) VAR_8 <= VAR_7->max_width
        && (ngx_uint_t) VAR_9 <= VAR_7->max_height)
    {
        FUNC_9(VAR_28);
        return FUNC_21(VAR_6, VAR_7);
    }

    VAR_17 = FUNC_5(VAR_28);

    if (VAR_17 && VAR_31->transparency) {
        VAR_19 = FUNC_10(VAR_28);

        if (VAR_19 != -1) {
            VAR_18 = VAR_17;
            VAR_21 = FUNC_13(VAR_28, VAR_19);
            VAR_22 = FUNC_11(VAR_28, VAR_19);
            VAR_23 = FUNC_2(VAR_28, VAR_19);

            goto transparent;
        }
    }

    VAR_18 = 0;
    VAR_19 = -1;
    VAR_21 = 0;
    VAR_22 = 0;
    VAR_23 = 0;

transparent:

    FUNC_4(VAR_28, -1);

    VAR_10 = VAR_8;
    VAR_11 = VAR_9;

    if (VAR_31->filter == VAR_1) {

        if ((ngx_uint_t) VAR_10 > VAR_7->max_width) {
            VAR_11 = VAR_11 * VAR_7->max_width / VAR_10;
            VAR_11 = VAR_11 ? VAR_11 : 1;
            VAR_10 = VAR_7->max_width;
        }

        if ((ngx_uint_t) VAR_11 > VAR_7->max_height) {
            VAR_10 = VAR_10 * VAR_7->max_height / VAR_11;
            VAR_10 = VAR_10 ? VAR_10 : 1;
            VAR_11 = VAR_7->max_height;
        }

        VAR_27 = 1;

    } else if (VAR_31->filter == VAR_2) {

        VAR_27 = 0;

    } else {

        VAR_27 = 0;

        if ((double) VAR_10 / VAR_11 < (double) VAR_7->max_width / VAR_7->max_height) {
            if ((ngx_uint_t) VAR_10 > VAR_7->max_width) {
                VAR_11 = VAR_11 * VAR_7->max_width / VAR_10;
                VAR_11 = VAR_11 ? VAR_11 : 1;
                VAR_10 = VAR_7->max_width;
                VAR_27 = 1;
            }

        } else {
            if ((ngx_uint_t) VAR_11 > VAR_7->max_height) {
                VAR_10 = VAR_10 * VAR_7->max_height / VAR_11;
                VAR_10 = VAR_10 ? VAR_10 : 1;
                VAR_11 = VAR_7->max_height;
                VAR_27 = 1;
            }
        }
    }

    if (VAR_27) {
        VAR_29 = FUNC_24(VAR_6, VAR_10, VAR_11, VAR_18);
        if (VAR_29 == ((void*)0)) {
            FUNC_9(VAR_28);
            return ((void*)0);
        }

        if (VAR_17 == 0) {
            FUNC_16(VAR_29, 1);
            FUNC_1(VAR_29, 0);
        }

        FUNC_7(VAR_29, VAR_28, 0, 0, 0, 0, VAR_10, VAR_11, VAR_8, VAR_9);

        if (VAR_17) {
            FUNC_18(VAR_29, 1, 256);
        }

        FUNC_9(VAR_28);

    } else {
        VAR_29 = VAR_28;
    }

    if (VAR_7->angle) {
        VAR_28 = VAR_29;

        VAR_14 = (VAR_10 % 2 == 0) ? 1 : 0;
        VAR_15 = (VAR_11 % 2 == 0) ? 1 : 0;

        switch (VAR_7->angle) {

        case 90:
        case 270:
            VAR_29 = FUNC_24(VAR_6, VAR_11, VAR_10, VAR_18);
            if (VAR_29 == ((void*)0)) {
                FUNC_9(VAR_28);
                return ((void*)0);
            }
            if (VAR_7->angle == 90) {
                VAR_12 = VAR_11 / 2 + VAR_15;
                VAR_13 = VAR_10 / 2 - VAR_14;

            } else {
                VAR_12 = VAR_11 / 2 - VAR_15;
                VAR_13 = VAR_10 / 2 + VAR_14;
            }

            FUNC_8(VAR_29, VAR_28, VAR_12, VAR_13, 0, 0,
                               VAR_10 + VAR_14, VAR_11 + VAR_15, VAR_7->angle);
            FUNC_9(VAR_28);

            VAR_24 = VAR_10;
            VAR_10 = VAR_11;
            VAR_11 = VAR_24;
            break;

        case 180:
            VAR_29 = FUNC_24(VAR_6, VAR_10, VAR_11, VAR_18);
            if (VAR_29 == ((void*)0)) {
                FUNC_9(VAR_28);
                return ((void*)0);
            }
            FUNC_8(VAR_29, VAR_28, VAR_10 / 2 - VAR_14, VAR_11 / 2 - VAR_15, 0, 0,
                               VAR_10 + VAR_14, VAR_11 + VAR_15, VAR_7->angle);
            FUNC_9(VAR_28);
            break;
        }
    }

    if (VAR_31->filter == VAR_0) {

        VAR_28 = VAR_29;

        if ((ngx_uint_t) VAR_10 > VAR_7->max_width) {
            VAR_12 = VAR_10 - VAR_7->max_width;

        } else {
            VAR_12 = 0;
        }

        if ((ngx_uint_t) VAR_11 > VAR_7->max_height) {
            VAR_13 = VAR_11 - VAR_7->max_height;

        } else {
            VAR_13 = 0;
        }

        if (VAR_12 || VAR_13) {

            VAR_29 = FUNC_24(VAR_6, VAR_10 - VAR_12, VAR_11 - VAR_13, VAR_17);

            if (VAR_29 == ((void*)0)) {
                FUNC_9(VAR_28);
                return ((void*)0);
            }

            VAR_12 /= 2;
            VAR_13 /= 2;

            FUNC_29(VAR_3, VAR_6->connection->log, 0,
                           "image crop: %d x %d @ %d x %d",
                           VAR_10, VAR_11, VAR_12, VAR_13);

            if (VAR_17 == 0) {
                FUNC_16(VAR_29, 1);
                FUNC_1(VAR_29, 0);
            }

            FUNC_6(VAR_29, VAR_28, 0, 0, VAR_12, VAR_13, VAR_10 - VAR_12, VAR_11 - VAR_13);

            if (VAR_17) {
                FUNC_18(VAR_29, 1, 256);
            }

            FUNC_9(VAR_28);
        }
    }

    if (VAR_19 != -1 && VAR_17) {
        FUNC_4(VAR_29, FUNC_3(VAR_29, VAR_21, VAR_22, VAR_23));
    }

    VAR_20 = FUNC_22(VAR_6, VAR_31->shcv, VAR_31->sharpen);
    if (VAR_20 > 0) {
        FUNC_17(VAR_29, VAR_20);
    }

    FUNC_12(VAR_29, (int) VAR_31->interlace);

    VAR_25 = FUNC_25(VAR_6, VAR_7->type, VAR_29, &VAR_16);

    FUNC_28(VAR_3, VAR_6->connection->log, 0,
                   "image: %d x %d %d", VAR_8, VAR_9, VAR_17);

    FUNC_9(VAR_29);
    FUNC_30(VAR_6->pool, VAR_7->image);

    if (VAR_25 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_30 = FUNC_31(VAR_6->pool, 0);
    if (VAR_30 == ((void*)0)) {
        FUNC_0(VAR_25);
        return ((void*)0);
    }

    VAR_26 = FUNC_19(VAR_6->pool);
    if (VAR_26 == ((void*)0)) {
        FUNC_0(VAR_25);
        return ((void*)0);
    }

    VAR_30->handler = VAR_4;
    VAR_30->data = VAR_25;

    VAR_26->pos = VAR_25;
    VAR_26->last = VAR_25 + VAR_16;
    VAR_26->memory = 1;
    VAR_26->last_buf = 1;

    FUNC_23(VAR_6, VAR_26);
    FUNC_27(VAR_6);

    return VAR_26;
}
