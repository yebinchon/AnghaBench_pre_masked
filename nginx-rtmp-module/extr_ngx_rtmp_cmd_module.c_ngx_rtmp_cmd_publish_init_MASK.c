
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int v ;
struct TYPE_12__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_13__ {int silent; int type; int args; int name; } ;
typedef TYPE_3__ ngx_rtmp_publish_t ;
typedef int ngx_rtmp_header_t ;
struct TYPE_14__ {int member_0; int member_3; int * member_2; int const member_1; } ;
typedef TYPE_4__ ngx_rtmp_amf_elt_t ;
typedef int ngx_int_t ;
typedef int ngx_chain_t ;
typedef int in_elts ;
struct TYPE_11__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ,int ,int ,char*,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_3__ const*,int) ;

 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__ const*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *,TYPE_4__*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_rtmp_session_t *VAR_2, ngx_rtmp_header_t *VAR_3,
        ngx_chain_t *VAR_4)
{
    static ngx_rtmp_publish_t VAR_5;

    static ngx_rtmp_amf_elt_t VAR_6[] = {


        { 131,
          128,
          ((void*)0), 0 },

        { 132,
          128,
          ((void*)0), 0 },

        { 129,
          128,
          &VAR_5.name, sizeof(VAR_5.name) },

        { 130 | 129,
          128,
          &VAR_5.type, sizeof(VAR_5.type) },
    };

    FUNC_1(&VAR_5, sizeof(VAR_5));

    if (FUNC_4(VAR_2, VAR_4, VAR_6,
                             sizeof(VAR_6) / sizeof(VAR_6[0])))
    {
        return VAR_0;
    }

    FUNC_2(VAR_5.name, VAR_5.args);

    FUNC_0(VAR_1, VAR_2->connection->log, 0,
                  "publish: name='%s' args='%s' type=%s silent=%d",
                  VAR_5.name, VAR_5.args, VAR_5.type, VAR_5.silent);

    return FUNC_3(VAR_2, &VAR_5);
}
