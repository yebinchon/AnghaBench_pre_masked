
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ssl_async_args {int dummy; } ;
struct TYPE_4__ {void* rwstate; int * job; int * waitctx; int * async_cb; } ;
typedef TYPE_1__ SSL ;






 int * FUNC_0 () ;
 int FUNC_1 (int *,int ,TYPE_1__*) ;
 int FUNC_2 (int **,int *,int*,int (*) (void*),struct ssl_async_args*,int) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(SSL *VAR_7, struct ssl_async_args *VAR_8,
                               int (*VAR_9) (void *))
{
    int VAR_10;
    if (VAR_7->waitctx == ((void*)0)) {
        VAR_7->waitctx = FUNC_0();
        if (VAR_7->waitctx == ((void*)0))
            return -1;
        if (VAR_7->async_cb != ((void*)0)
            && !FUNC_1
                 (VAR_7->waitctx, VAR_6, VAR_7))
            return -1;
    }
    switch (FUNC_2(&VAR_7->job, VAR_7->waitctx, &VAR_10, VAR_9, VAR_8,
                            sizeof(struct ssl_async_args))) {
    case 131:
        VAR_7->rwstate = VAR_4;
        FUNC_3(VAR_3, VAR_5);
        return -1;
    case 128:
        VAR_7->rwstate = VAR_2;
        return -1;
    case 129:
        VAR_7->rwstate = VAR_1;
        return -1;
    case 130:
        VAR_7->job = ((void*)0);
        return VAR_10;
    default:
        VAR_7->rwstate = VAR_4;
        FUNC_3(VAR_3, VAR_0);

        return -1;
    }
}
