
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int jsdisp_t ;
struct TYPE_6__ {TYPE_1__* ctx; } ;
struct TYPE_7__ {int str; TYPE_2__ dispex; } ;
struct TYPE_5__ {int version; } ;
typedef TYPE_3__ StringInstance ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int *) ;

__attribute__((used)) static unsigned FUNC_2(jsdisp_t *VAR_0)
{
    StringInstance *VAR_1 = FUNC_1(VAR_0);
    return VAR_1->dispex.ctx->version < 2 ? 0 : FUNC_0(VAR_1->str);
}
