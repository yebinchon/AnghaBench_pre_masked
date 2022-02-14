
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* cur_swap; } ;
typedef TYPE_3__ gs_device_t ;
struct TYPE_6__ {TYPE_1__* wi; } ;
struct TYPE_5__ {int hdc; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;

void FUNC_3(gs_device_t *VAR_1)
{
 if (!FUNC_1(VAR_1->cur_swap->wi->hdc)) {
  FUNC_2(VAR_0,
       "SwapBuffers failed, GetLastError "
       "returned %lu",
       FUNC_0());
  FUNC_2(VAR_0, "device_present (GL) failed");
 }
}
