
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int upstream; int uri; TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_4__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,char*,int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2)
{
    ngx_http_request_t *VAR_3 = VAR_2;

    FUNC_1(VAR_1, VAR_3->connection->log, 0,
                   "cleanup http upstream request: \"%V\"", &VAR_3->uri);

    FUNC_0(VAR_3, VAR_3->upstream, VAR_0);
}
