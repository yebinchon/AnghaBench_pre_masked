
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mp_cmd_ctx {TYPE_2__* args; } ;
struct TYPE_3__ {int d; int s; } ;
struct TYPE_4__ {TYPE_1__ v; } ;


 int VAR_0 ;
 int FUNC_0 (struct mp_cmd_ctx*,int ,int ,int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_1)
{
    struct mp_cmd_ctx *VAR_2 = VAR_1;

    FUNC_0(VAR_2, VAR_2->args[0].v.s,
                        VAR_0, &VAR_2->args[1].v.d);
}
