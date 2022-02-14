
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_rtmp_session_t ;
struct TYPE_15__ {TYPE_1__* aac_header; } ;
typedef TYPE_2__ ngx_rtmp_codec_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_16__ {int * last; int * pos; } ;
typedef TYPE_3__ ngx_buf_t ;
struct TYPE_14__ {TYPE_3__* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_3__*,int *,size_t) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,int,int) ;
 int * FUNC_7 (TYPE_3__*,char*) ;
 int FUNC_8 (TYPE_3__*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_rtmp_session_t *VAR_3, ngx_buf_t *VAR_4)
{
    size_t VAR_5;
    u_char *VAR_6, *VAR_7;
    ngx_buf_t *VAR_8;
    ngx_rtmp_codec_ctx_t *VAR_9;

    VAR_9 = FUNC_0(VAR_3, VAR_2);

    if (VAR_9 == ((void*)0) || VAR_9->aac_header == ((void*)0)) {
        return VAR_0;
    }

    VAR_8 = VAR_9->aac_header->buf;
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    VAR_7 = VAR_8->pos + 2;
    if (VAR_7 > VAR_8->last) {
        return VAR_0;
    }

    VAR_5 = VAR_8->last - VAR_7;

    VAR_6 = FUNC_7(VAR_4, "esds");


    FUNC_4(VAR_4, 0);




    FUNC_6(VAR_4, 0x03, 23 + VAR_5);


    FUNC_2(VAR_4, 1);


    FUNC_5(VAR_4, 0);




    FUNC_6(VAR_4, 0x04, 15 + VAR_5);


    FUNC_5(VAR_4, 0x40);


    FUNC_5(VAR_4, 0x15);


    FUNC_3(VAR_4, 0);


    FUNC_4(VAR_4, 0x0001F151);


    FUNC_4(VAR_4, 0x0001F14D);




    FUNC_6(VAR_4, 0x05, VAR_5);
    FUNC_1(VAR_4, VAR_7, VAR_5);




    FUNC_6(VAR_4, 0x06, 1);
    FUNC_5(VAR_4, 0x02);

    FUNC_8(VAR_4, VAR_6);

    return VAR_1;
}
