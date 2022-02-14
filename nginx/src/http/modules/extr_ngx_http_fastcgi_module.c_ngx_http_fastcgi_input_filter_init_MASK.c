
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int off_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {TYPE_2__* upstream; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_10__ {scalar_t__ keep_conn; } ;
typedef TYPE_4__ ngx_http_fastcgi_loc_conf_t ;
typedef int ngx_http_fastcgi_header_t ;
struct TYPE_8__ {TYPE_1__* pipe; } ;
struct TYPE_7__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_1(void *VAR_2)
{
    ngx_http_request_t *VAR_3 = VAR_2;
    ngx_http_fastcgi_loc_conf_t *VAR_4;

    VAR_4 = FUNC_0(VAR_3, VAR_1);

    VAR_3->upstream->pipe->length = VAR_4->keep_conn ?
                                (off_t) sizeof(ngx_http_fastcgi_header_t) : -1;

    return VAR_0;
}
