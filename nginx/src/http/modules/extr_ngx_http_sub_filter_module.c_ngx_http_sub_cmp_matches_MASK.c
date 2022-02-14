
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_3__ {scalar_t__* data; } ;
struct TYPE_4__ {TYPE_1__ match; } ;
typedef TYPE_2__ ngx_http_sub_match_t ;


 size_t VAR_0 ;

__attribute__((used)) static ngx_int_t
FUNC_0(const void *VAR_1, const void *VAR_2)
{
    ngx_int_t VAR_3, VAR_4;
    ngx_http_sub_match_t *VAR_5, *VAR_6;

    VAR_5 = (ngx_http_sub_match_t *) VAR_1;
    VAR_6 = (ngx_http_sub_match_t *) VAR_2;

    VAR_3 = VAR_5->match.data[VAR_0];
    VAR_4 = VAR_6->match.data[VAR_0];

    return VAR_3 - VAR_4;
}
