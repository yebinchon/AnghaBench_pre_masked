
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_14__ {int len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_15__ {int * name; int regex; } ;
typedef TYPE_2__ ngx_regex_elt_t ;
struct TYPE_16__ {int regex; TYPE_1__ err; int options; int pool; TYPE_1__ pattern; } ;
typedef TYPE_3__ ngx_regex_compile_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {int * regex; } ;
typedef TYPE_4__ ngx_http_referer_conf_t ;
struct TYPE_18__ {int pool; } ;
typedef TYPE_5__ ngx_conf_t ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int,int) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_5__*,int ,char*,TYPE_1__*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_conf_t *VAR_6, ngx_http_referer_conf_t *VAR_7,
    ngx_str_t *VAR_8)
{
    FUNC_2(VAR_2, VAR_6, 0,
                       "the using of the regex \"%V\" requires PCRE library",
                       VAR_8);

    return VAR_1;


}
