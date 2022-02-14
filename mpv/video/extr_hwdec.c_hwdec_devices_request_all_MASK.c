
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_hwdec_devices {int load_api_ctx; int (* load_api ) (int ) ;} ;


 int FUNC_0 (struct mp_hwdec_devices*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct mp_hwdec_devices *VAR_0)
{
    if (VAR_0->load_api && !FUNC_0(VAR_0))
        VAR_0->load_api(VAR_0->load_api_ctx);
}
