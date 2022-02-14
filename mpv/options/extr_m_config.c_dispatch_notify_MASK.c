
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_config_cache {int wakeup_dispatch_cb_ctx; int wakeup_dispatch_cb; int wakeup_dispatch_queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    struct m_config_cache *VAR_1 = VAR_0;

    FUNC_0(VAR_1->wakeup_dispatch_queue);
    FUNC_1(VAR_1->wakeup_dispatch_queue,
                               VAR_1->wakeup_dispatch_cb,
                               VAR_1->wakeup_dispatch_cb_ctx);
}
