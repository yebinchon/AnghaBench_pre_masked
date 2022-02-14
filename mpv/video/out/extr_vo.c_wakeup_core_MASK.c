
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wakeup_ctx; int (* wakeup_cb ) (int ) ;} ;
struct vo {TYPE_1__ extra; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct vo *VAR_0)
{
    VAR_0->extra.wakeup_cb(VAR_0->extra.wakeup_ctx);
}
