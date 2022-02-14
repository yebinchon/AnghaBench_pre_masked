
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
typedef int ngx_rtmp_session_t ;
typedef int ngx_rtmp_record_rec_ctx_t ;
struct TYPE_4__ {scalar_t__ nelts; int * elts; } ;
struct TYPE_5__ {TYPE_1__ rec; } ;
typedef TYPE_2__ ngx_rtmp_record_ctx_t ;
typedef int ngx_rtmp_header_t ;
typedef int ngx_int_t ;
typedef int ngx_chain_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int *,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_rtmp_session_t *VAR_2, ngx_rtmp_header_t *VAR_3,
                   ngx_chain_t *VAR_4)
{
    ngx_rtmp_record_ctx_t *VAR_5;
    ngx_rtmp_record_rec_ctx_t *VAR_6;
    ngx_uint_t VAR_7;

    VAR_5 = FUNC_0(VAR_2, VAR_1);

    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6 = VAR_5->rec.elts;

    for (VAR_7 = 0; VAR_7 < VAR_5->rec.nelts; ++VAR_7, ++VAR_6) {
        FUNC_1(VAR_2, VAR_6, VAR_3, VAR_4);
    }

    return VAR_0;
}
