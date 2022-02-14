
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* response; } ;
struct TYPE_6__ {int * failure_info; } ;
struct TYPE_5__ {TYPE_2__* status_info; } ;
typedef TYPE_2__ TS_STATUS_INFO ;
typedef TYPE_3__ TS_RESP_CTX ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(TS_RESP_CTX *VAR_2, int VAR_3)
{
    TS_STATUS_INFO *VAR_4 = VAR_2->response->status_info;
    if (VAR_4->failure_info == ((void*)0)
        && (VAR_4->failure_info = FUNC_0()) == ((void*)0))
        goto err;
    if (!FUNC_1(VAR_4->failure_info, VAR_3, 1))
        goto err;
    return 1;
 err:
    FUNC_2(VAR_1, VAR_0);
    return 0;
}
