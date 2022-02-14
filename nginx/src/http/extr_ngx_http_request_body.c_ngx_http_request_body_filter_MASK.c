
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_6__ {scalar_t__ chunked; } ;
struct TYPE_7__ {TYPE_1__ headers_in; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int ngx_chain_t ;


 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_0, ngx_chain_t *VAR_1)
{
    if (VAR_0->headers_in.chunked) {
        return FUNC_0(VAR_0, VAR_1);

    } else {
        return FUNC_1(VAR_0, VAR_1);
    }
}
