
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_10__ {int webp_quality; int wqcv; int jpeg_quality; int jqcv; } ;
typedef TYPE_3__ ngx_http_image_filter_conf_t ;
typedef int gdImagePtr ;
struct TYPE_8__ {int log; } ;






 int VAR_0 ;
 int * FUNC_0 (int ,int*) ;
 int * FUNC_1 (int ,int*,int ) ;
 int * FUNC_2 (int ,int*) ;
 int * FUNC_3 (int ,int*,int ) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_6 (int ,int ,int ,char*) ;

__attribute__((used)) static u_char *
FUNC_7(ngx_http_request_t *VAR_2, ngx_uint_t VAR_3, gdImagePtr VAR_4,
    int *VAR_5)
{
    char *VAR_6;
    u_char *VAR_7;
    ngx_int_t VAR_8;
    ngx_http_image_filter_conf_t *VAR_9;

    VAR_7 = ((void*)0);

    switch (VAR_3) {

    case 130:
        VAR_9 = FUNC_4(VAR_2, VAR_1);

        VAR_8 = FUNC_5(VAR_2, VAR_9->jqcv, VAR_9->jpeg_quality);
        if (VAR_8 <= 0) {
            return ((void*)0);
        }

        VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_8);
        VAR_6 = "gdImageJpegPtr() failed";
        break;

    case 131:
        VAR_7 = FUNC_0(VAR_4, VAR_5);
        VAR_6 = "gdImageGifPtr() failed";
        break;

    case 129:
        VAR_7 = FUNC_2(VAR_4, VAR_5);
        VAR_6 = "gdImagePngPtr() failed";
        break;

    case 128:
        VAR_6 = "nginx was built without GD WebP support";

        break;

    default:
        VAR_6 = "unknown image type";
        break;
    }

    if (VAR_7 == ((void*)0)) {
        FUNC_6(VAR_0, VAR_2->connection->log, 0, VAR_6);
    }

    return VAR_7;
}
