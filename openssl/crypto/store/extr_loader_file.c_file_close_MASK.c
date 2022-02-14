
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int file; } ;
struct TYPE_7__ {int ctx; } ;
struct TYPE_9__ {TYPE_2__ file; TYPE_1__ dir; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_3__ _; } ;
typedef TYPE_4__ OSSL_STORE_LOADER_CTX ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_3(OSSL_STORE_LOADER_CTX *VAR_1)
{
    if (VAR_1->type == VAR_0) {
        FUNC_1(&VAR_1->_.dir.ctx);
    } else {
        FUNC_0(VAR_1->_.file.file);
    }
    FUNC_2(VAR_1);
    return 1;
}
