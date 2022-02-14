
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_10__ ;


typedef int u_char ;
struct TYPE_29__ {TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_30__ {scalar_t__ type; } ;
typedef TYPE_4__ ngx_rtmp_header_t ;
typedef int (* ngx_rtmp_handler_pt ) (TYPE_3__*,TYPE_4__*,TYPE_7__*) ;
struct TYPE_32__ {int amf_hash; } ;
typedef TYPE_8__ ngx_rtmp_core_main_conf_t ;
struct TYPE_33__ {int member_3; int type; int * member_2; int member_1; int member_0; } ;
typedef TYPE_9__ ngx_rtmp_amf_elt_t ;
struct TYPE_25__ {int offset; TYPE_7__* link; int log; } ;
typedef TYPE_10__ ngx_rtmp_amf_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_31__ {TYPE_1__* buf; } ;
typedef TYPE_7__ ngx_chain_t ;
struct TYPE_26__ {size_t nelts; int (* elts ) (TYPE_3__*,TYPE_4__*,TYPE_7__*) ;} ;
typedef TYPE_12__ ngx_array_t ;
typedef int func ;
typedef int elts ;
typedef int act ;
struct TYPE_28__ {int log; } ;
struct TYPE_27__ {scalar_t__* pos; scalar_t__* last; } ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int * const,int ,int) ;
 TYPE_12__* FUNC_1 (int *,int ,int * const,size_t) ;
 int FUNC_2 (int * const,int * const,size_t) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (int ,int ,int ,char*,int) ;
 int FUNC_5 (int ,int ,int ,char*,int * const,size_t,size_t) ;
 int FUNC_6 (TYPE_10__*,int) ;

 scalar_t__ FUNC_7 (TYPE_10__*,TYPE_9__*,int) ;
 int VAR_7 ;
 TYPE_8__* FUNC_8 (TYPE_3__*,int ) ;
 size_t FUNC_9 (int * const) ;
 int FUNC_10 (TYPE_3__*,TYPE_4__*,TYPE_7__*) ;

ngx_int_t
FUNC_11(ngx_rtmp_session_t *VAR_8,
        ngx_rtmp_header_t *VAR_9, ngx_chain_t *VAR_10)
{
    ngx_rtmp_amf_ctx_t VAR_11;
    ngx_rtmp_core_main_conf_t *VAR_12;
    ngx_array_t *VAR_13;
    ngx_rtmp_handler_pt *VAR_14;
    size_t VAR_15, VAR_16;

    static u_char VAR_17[128];

    static ngx_rtmp_amf_elt_t VAR_18[] = {

        { 129,
          128,
          VAR_17, sizeof(VAR_17) },
    };



    if (VAR_9->type == VAR_6 ||
        VAR_9->type == VAR_5)
    {
        VAR_18[0].type |= VAR_2;
    } else {
        VAR_18[0].type &= ~VAR_2;
    }

    if ((VAR_9->type == VAR_5 ||
         VAR_9->type == VAR_4 ||
         VAR_9->type == VAR_3)
         && VAR_10->buf->last > VAR_10->buf->pos)
    {
        FUNC_4(VAR_0, VAR_8->connection->log, 0,
                "AMF3 prefix: %ui", (ngx_int_t)*VAR_10->buf->pos);
        ++VAR_10->buf->pos;
    }

    VAR_12 = FUNC_8(VAR_8, VAR_7);


    FUNC_6(&VAR_11, sizeof(VAR_11));
    VAR_11.link = VAR_10;
    VAR_11.log = VAR_8->connection->log;
    FUNC_0(VAR_17, 0, sizeof(VAR_17));

    if (FUNC_7(&VAR_11, VAR_18,
                sizeof(VAR_18) / sizeof(VAR_18[0])) != VAR_1)
    {
        FUNC_3(VAR_0, VAR_8->connection->log, 0,
                "AMF cmd failed");
        return 130;
    }


    VAR_10 = VAR_11.link;
    VAR_10->buf->pos += VAR_11.offset;

    VAR_15 = FUNC_9(VAR_17);

    VAR_13 = FUNC_1(&VAR_12->amf_hash,
            FUNC_2(VAR_17, VAR_17, VAR_15), VAR_17, VAR_15);

    if (VAR_13 && VAR_13->nelts) {
        VAR_14 = &VAR_13->elts;
        for (VAR_16 = 0; VAR_16 < VAR_13->nelts; ++VAR_16, ++VAR_14) {
            FUNC_5(VAR_0, VAR_8->connection->log, 0,
                "AMF func '%s' passed to handler %d/%d",
                VAR_17, VAR_16, VAR_13->nelts);
            switch ((*VAR_14)(VAR_8, VAR_9, VAR_10)) {
                case 130:
                    return 130;
                case 131:
                    return VAR_1;
            }
        }
    } else {
        FUNC_4(VAR_0, VAR_8->connection->log, 0,
            "AMF cmd '%s' no handler", VAR_17);
    }

    return VAR_1;
}
