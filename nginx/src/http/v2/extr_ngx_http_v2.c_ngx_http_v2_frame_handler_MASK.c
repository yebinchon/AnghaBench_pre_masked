
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_8__ {scalar_t__ length; struct TYPE_8__* next; TYPE_1__* first; } ;
typedef TYPE_2__ ngx_http_v2_out_frame_t ;
struct TYPE_9__ {int total_bytes; TYPE_2__* free_frames; } ;
typedef TYPE_3__ ngx_http_v2_connection_t ;
struct TYPE_10__ {scalar_t__ pos; scalar_t__ last; } ;
typedef TYPE_4__ ngx_buf_t ;
struct TYPE_7__ {TYPE_4__* buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_http_v2_connection_t *VAR_3,
    ngx_http_v2_out_frame_t *VAR_4)
{
    ngx_buf_t *VAR_5;

    VAR_5 = VAR_4->first->buf;

    if (VAR_5->pos != VAR_5->last) {
        return VAR_0;
    }

    VAR_4->next = VAR_3->free_frames;
    VAR_3->free_frames = VAR_4;

    VAR_3->total_bytes += VAR_1 + VAR_4->length;

    return VAR_2;
}
