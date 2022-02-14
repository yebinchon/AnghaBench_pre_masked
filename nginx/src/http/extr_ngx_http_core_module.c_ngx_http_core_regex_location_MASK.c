
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
typedef void* ngx_str_t ;
struct TYPE_7__ {int len; int * data; } ;
struct TYPE_8__ {void* options; TYPE_1__ err; void* pattern; } ;
typedef TYPE_2__ ngx_regex_compile_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {void* name; int * regex; } ;
typedef TYPE_3__ ngx_http_core_loc_conf_t ;
typedef int ngx_conf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int ,int *,int ,char*,void**) ;
 int * FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_conf_t *VAR_5, ngx_http_core_loc_conf_t *VAR_6,
    ngx_str_t *VAR_7, ngx_uint_t VAR_8)
{
    FUNC_0(VAR_1, VAR_5, 0,
                       "using regex \"%V\" requires PCRE library",
                       VAR_7);
    return VAR_0;


}
