
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int v ;
typedef int uint32_t ;
struct TYPE_10__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_header_t ;
struct TYPE_11__ {char* app; char* flashver; char* swf_url; char* tc_url; char acodecs; char vcodecs; char* page_url; char object_encoding; char trans; int args; } ;
typedef TYPE_3__ ngx_rtmp_connect_t ;
typedef char ngx_rtmp_amf_elt_t ;
typedef int ngx_int_t ;
typedef int ngx_chain_t ;
typedef int in_elts ;
typedef int in_cmd ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ,int ,int ,char*,char*,int ,char*,char*,char*,char*,int ,int ,int ) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (TYPE_3__ const*,int) ;

 int FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__ const*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *,char*,int) ;
 int const FUNC_6 (char*) ;
 size_t FUNC_7 (char*) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_rtmp_session_t *VAR_2, ngx_rtmp_header_t *VAR_3,
        ngx_chain_t *VAR_4)
{
    size_t VAR_5;

    static ngx_rtmp_connect_t VAR_6;

    static ngx_rtmp_amf_elt_t VAR_7[] = {

        { 129,
          FUNC_6("app"),
          VAR_6.app, sizeof(VAR_6.app) },

        { 129,
          FUNC_6("flashVer"),
          VAR_6.flashver, sizeof(VAR_6.flashver) },

        { 129,
          FUNC_6("swfUrl"),
          VAR_6.swf_url, sizeof(VAR_6.swf_url) },

        { 129,
          FUNC_6("tcUrl"),
          VAR_6.tc_url, sizeof(VAR_6.tc_url) },

        { 131,
          FUNC_6("audioCodecs"),
          &VAR_6.acodecs, sizeof(VAR_6.acodecs) },

        { 131,
          FUNC_6("videoCodecs"),
          &VAR_6.vcodecs, sizeof(VAR_6.vcodecs) },

        { 129,
          FUNC_6("pageUrl"),
          VAR_6.page_url, sizeof(VAR_6.page_url) },

        { 131,
          FUNC_6("objectEncoding"),
          &VAR_6.object_encoding, 0},
    };

    static ngx_rtmp_amf_elt_t VAR_8[] = {

        { 131,
          128,
          &VAR_6.trans, 0 },

        { 130,
          128,
          VAR_7, sizeof(VAR_7) },
    };

    FUNC_2(&VAR_6, sizeof(VAR_6));
    if (FUNC_5(VAR_2, VAR_4, VAR_8,
                sizeof(VAR_8) / sizeof(VAR_8[0])))
    {
        return VAR_0;
    }

    VAR_5 = FUNC_7(VAR_6.app);
    if (VAR_5 > 10 && !FUNC_1(VAR_6.app + VAR_5 - 10, "/_definst_", 10)) {
        VAR_6.app[VAR_5 - 10] = 0;
    } else if (VAR_5 && VAR_6.app[VAR_5 - 1] == '/') {
        VAR_6.app[VAR_5 - 1] = 0;
    }

    FUNC_3(VAR_6.app, VAR_6.args);

    FUNC_0(VAR_1, VAR_2->connection->log, 0,
            "connect: app='%s' args='%s' flashver='%s' swf_url='%s' "
            "tc_url='%s' page_url='%s' acodecs=%uD vcodecs=%uD "
            "object_encoding=%ui",
            VAR_6.app, VAR_6.args, VAR_6.flashver, VAR_6.swf_url, VAR_6.tc_url, VAR_6.page_url,
            (uint32_t)VAR_6.acodecs, (uint32_t)VAR_6.vcodecs,
            (ngx_int_t)VAR_6.object_encoding);

    return FUNC_4(VAR_2, &VAR_6);
}
