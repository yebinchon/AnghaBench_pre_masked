
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_20__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_21__ {int angle; scalar_t__ max_width; scalar_t__ max_height; scalar_t__ width; scalar_t__ height; int force; } ;
typedef TYPE_3__ ngx_http_image_filter_ctx_t ;
struct TYPE_22__ {scalar_t__ filter; int height; int hcv; int width; int wcv; int angle; int acv; } ;
typedef TYPE_4__ ngx_http_image_filter_conf_t ;
typedef int ngx_buf_t ;
struct TYPE_19__ {int buffered; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int ) ;
 TYPE_4__* FUNC_1 (TYPE_2__*,int ) ;
 int * FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 void* FUNC_3 (TYPE_2__*,int ,int ) ;
 int VAR_4 ;
 int * FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int * FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static ngx_buf_t *
FUNC_7(ngx_http_request_t *VAR_5)
{
    ngx_int_t VAR_6;
    ngx_http_image_filter_ctx_t *VAR_7;
    ngx_http_image_filter_conf_t *VAR_8;

    VAR_5->connection->buffered &= ~VAR_0;

    VAR_7 = FUNC_0(VAR_5, VAR_4);

    VAR_6 = FUNC_6(VAR_5, VAR_7);

    VAR_8 = FUNC_1(VAR_5, VAR_4);

    if (VAR_8->filter == VAR_2) {
        return FUNC_4(VAR_5, VAR_6 == VAR_3 ? VAR_7 : ((void*)0));
    }

    VAR_7->angle = FUNC_3(VAR_5, VAR_8->acv, VAR_8->angle);

    if (VAR_8->filter == VAR_1) {

        if (VAR_7->angle != 90 && VAR_7->angle != 180 && VAR_7->angle != 270) {
            return ((void*)0);
        }

        return FUNC_5(VAR_5, VAR_7);
    }

    VAR_7->max_width = FUNC_3(VAR_5, VAR_8->wcv, VAR_8->width);
    if (VAR_7->max_width == 0) {
        return ((void*)0);
    }

    VAR_7->max_height = FUNC_3(VAR_5, VAR_8->hcv,
                                                      VAR_8->height);
    if (VAR_7->max_height == 0) {
        return ((void*)0);
    }

    if (VAR_6 == VAR_3
        && VAR_7->width <= VAR_7->max_width
        && VAR_7->height <= VAR_7->max_height
        && VAR_7->angle == 0
        && !VAR_7->force)
    {
        return FUNC_2(VAR_5, VAR_7);
    }

    return FUNC_5(VAR_5, VAR_7);
}
