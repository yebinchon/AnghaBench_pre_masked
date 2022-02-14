
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int crtc_count; int conn; struct TYPE_4__* crtc_num; struct TYPE_4__* crtcs; struct TYPE_4__* saved_ramps; } ;
typedef TYPE_1__ randr_state_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(randr_state_t *VAR_0)
{

 for (int VAR_1 = 0; VAR_1 < VAR_0->crtc_count; VAR_1++) {
  FUNC_0(VAR_0->crtcs[VAR_1].saved_ramps);
 }
 FUNC_0(VAR_0->crtcs);
 FUNC_0(VAR_0->crtc_num);


 FUNC_1(VAR_0->conn);

 FUNC_0(VAR_0);
}
