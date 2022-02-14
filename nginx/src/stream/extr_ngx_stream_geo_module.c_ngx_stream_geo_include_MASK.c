
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int len; char* data; } ;
struct TYPE_14__ {scalar_t__ outside_entries; int includes; scalar_t__ allow_binary_include; TYPE_2__ include_name; scalar_t__ ranges; int temp_pool; } ;
typedef TYPE_1__ ngx_stream_geo_conf_ctx_t ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_16__ {int log; int cycle; } ;
typedef TYPE_3__ ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;

 int VAR_2 ;

 scalar_t__ FUNC_0 (int ,TYPE_2__*,int) ;
 char* FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ,char*,char*) ;
 char* FUNC_3 (int ,int) ;
 int FUNC_4 (char*,char*,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static char *
FUNC_6(ngx_conf_t *VAR_3, ngx_stream_geo_conf_ctx_t *VAR_4,
    ngx_str_t *VAR_5)
{
    char *VAR_6;
    ngx_str_t VAR_7;

    VAR_7.len = VAR_5->len + 4;
    VAR_7.data = FUNC_3(VAR_4->temp_pool, VAR_5->len + 5);
    if (VAR_7.data == ((void*)0)) {
        return VAR_0;
    }

    FUNC_4(VAR_7.data, "%V.bin%Z", VAR_5);

    if (FUNC_0(VAR_3->cycle, &VAR_7, 1) != 128) {
        return VAR_0;
    }

    if (VAR_4->ranges) {
        FUNC_2(VAR_2, VAR_3->log, 0, "include %s", VAR_7.data);

        switch (FUNC_5(VAR_3, VAR_4, &VAR_7)) {
        case 128:
            return VAR_1;
        case 129:
            return VAR_0;
        default:
            break;
        }
    }

    VAR_7.len -= 4;
    VAR_7.data[VAR_7.len] = '\0';

    VAR_4->include_name = VAR_7;

    if (VAR_4->outside_entries) {
        VAR_4->allow_binary_include = 0;
    }

    FUNC_2(VAR_2, VAR_3->log, 0, "include %s", VAR_7.data);

    VAR_6 = FUNC_1(VAR_3, &VAR_7);

    VAR_4->includes++;
    VAR_4->outside_entries = 0;

    return VAR_6;
}
