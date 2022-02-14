
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ filter; scalar_t__ jpeg_quality; scalar_t__ webp_quality; scalar_t__ sharpen; int buffer_size; int interlace; int transparency; int * shcv; int * wqcv; int * jqcv; int acv; int hcv; int wcv; int angle; int height; int width; } ;
typedef TYPE_1__ ngx_http_image_filter_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_3, void *VAR_4, void *VAR_5)
{
    ngx_http_image_filter_conf_t *VAR_6 = VAR_4;
    ngx_http_image_filter_conf_t *VAR_7 = VAR_5;

    if (VAR_7->filter == VAR_1) {

        if (VAR_6->filter == VAR_1) {
            VAR_7->filter = VAR_2;

        } else {
            VAR_7->filter = VAR_6->filter;
            VAR_7->width = VAR_6->width;
            VAR_7->height = VAR_6->height;
            VAR_7->angle = VAR_6->angle;
            VAR_7->wcv = VAR_6->wcv;
            VAR_7->hcv = VAR_6->hcv;
            VAR_7->acv = VAR_6->acv;
        }
    }

    if (VAR_7->jpeg_quality == VAR_1) {


        FUNC_1(VAR_7->jpeg_quality, VAR_6->jpeg_quality, 75);

        if (VAR_7->jqcv == ((void*)0)) {
            VAR_7->jqcv = VAR_6->jqcv;
        }
    }

    if (VAR_7->webp_quality == VAR_1) {


        FUNC_1(VAR_7->webp_quality, VAR_6->webp_quality, 80);

        if (VAR_7->wqcv == ((void*)0)) {
            VAR_7->wqcv = VAR_6->wqcv;
        }
    }

    if (VAR_7->sharpen == VAR_1) {
        FUNC_1(VAR_7->sharpen, VAR_6->sharpen, 0);

        if (VAR_7->shcv == ((void*)0)) {
            VAR_7->shcv = VAR_6->shcv;
        }
    }

    FUNC_2(VAR_7->transparency, VAR_6->transparency, 1);

    FUNC_2(VAR_7->interlace, VAR_6->interlace, 0);

    FUNC_0(VAR_7->buffer_size, VAR_6->buffer_size,
                              1 * 1024 * 1024);

    return VAR_0;
}
