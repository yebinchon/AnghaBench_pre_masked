
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_21__ {TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_rtmp_session_t ;
struct TYPE_20__ {int fd; } ;
struct TYPE_22__ {TYPE_3__ file; TYPE_7__* conf; } ;
typedef TYPE_5__ ngx_rtmp_record_rec_ctx_t ;
struct TYPE_23__ {int rec; } ;
typedef TYPE_6__ ngx_rtmp_record_ctx_t ;
struct TYPE_19__ {scalar_t__ nelts; TYPE_7__** elts; } ;
struct TYPE_24__ {TYPE_2__ rec; } ;
typedef TYPE_7__ ngx_rtmp_record_app_conf_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_18__ {int pool; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,scalar_t__,int) ;
 TYPE_5__* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (TYPE_5__*,int) ;
 TYPE_6__* FUNC_3 (int ,int) ;
 TYPE_7__* FUNC_4 (TYPE_4__*,int ) ;
 TYPE_6__* FUNC_5 (TYPE_4__*,int ) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_4__*,TYPE_6__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_rtmp_session_t *VAR_4)
{
    ngx_rtmp_record_app_conf_t *VAR_5, **VAR_6;
    ngx_rtmp_record_rec_ctx_t *VAR_7;
    ngx_rtmp_record_ctx_t *VAR_8;
    ngx_uint_t VAR_9;

    VAR_8 = FUNC_5(VAR_4, VAR_3);

    if (VAR_8) {
        return VAR_2;
    }

    VAR_5 = FUNC_4(VAR_4, VAR_3);

    if (VAR_5 == ((void*)0) || VAR_5->rec.nelts == 0) {
        return VAR_2;
    }

    VAR_8 = FUNC_3(VAR_4->connection->pool, sizeof(ngx_rtmp_record_ctx_t));

    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_6(VAR_4, VAR_8, VAR_3);

    if (FUNC_0(&VAR_8->rec, VAR_4->connection->pool, VAR_5->rec.nelts,
                       sizeof(ngx_rtmp_record_rec_ctx_t))
        != VAR_2)
    {
        return VAR_0;
    }

    VAR_6 = VAR_5->rec.elts;

    VAR_7 = FUNC_1(&VAR_8->rec, VAR_5->rec.nelts);

    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    for (VAR_9 = 0; VAR_9 < VAR_5->rec.nelts; ++VAR_9, ++VAR_6, ++VAR_7) {
        FUNC_2(VAR_7, sizeof(*VAR_7));

        VAR_7->conf = *VAR_6;
        VAR_7->file.fd = VAR_1;
    }

    return VAR_2;
}
