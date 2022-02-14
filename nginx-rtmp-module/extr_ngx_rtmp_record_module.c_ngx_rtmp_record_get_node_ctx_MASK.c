
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_rtmp_session_t ;
typedef int ngx_rtmp_record_rec_ctx_t ;
struct TYPE_4__ {size_t nelts; int * elts; } ;
struct TYPE_5__ {TYPE_1__ rec; } ;
typedef TYPE_2__ ngx_rtmp_record_ctx_t ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;

__attribute__((used)) static ngx_rtmp_record_rec_ctx_t *
FUNC_2(ngx_rtmp_session_t *VAR_2, ngx_uint_t VAR_3)
{
    ngx_rtmp_record_ctx_t *VAR_4;
    ngx_rtmp_record_rec_ctx_t *VAR_5;

    if (FUNC_1(VAR_2) != VAR_0) {
        return ((void*)0);
    }

    VAR_4 = FUNC_0(VAR_2, VAR_1);

    if (VAR_3 >= VAR_4->rec.nelts) {
        return ((void*)0);
    }

    VAR_5 = VAR_4->rec.elts;

    return &VAR_5[VAR_3];
}
