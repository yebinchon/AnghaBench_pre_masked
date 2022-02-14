
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* last_handler; int * last_handler_ctx; } ;
struct TYPE_8__ {TYPE_5__* uri; } ;
struct TYPE_10__ {TYPE_2__ file; TYPE_1__ dir; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_3__ _; } ;
struct TYPE_11__ {int (* destroy_ctx ) (int **) ;} ;
typedef TYPE_5__ OSSL_STORE_LOADER_CTX ;


 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int **) ;

__attribute__((used)) static void FUNC_2(OSSL_STORE_LOADER_CTX *VAR_1)
{
    if (VAR_1->type == VAR_0) {
        FUNC_0(VAR_1->_.dir.uri);
    } else {
        if (VAR_1->_.file.last_handler != ((void*)0)) {
            VAR_1->_.file.last_handler->destroy_ctx(&VAR_1->_.file.last_handler_ctx);
            VAR_1->_.file.last_handler_ctx = ((void*)0);
            VAR_1->_.file.last_handler = ((void*)0);
        }
    }
    FUNC_0(VAR_1);
}
