
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int loaduv_krnl; int loadys_krnl; } ;
typedef TYPE_1__ LoadYUVState ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

void FUNC_2(LoadYUVState* VAR_0) {
  int VAR_1 = 0;

  VAR_1 = FUNC_1(VAR_0->loadys_krnl);
  FUNC_0(VAR_1 == 0);
  VAR_1 = FUNC_1(VAR_0->loaduv_krnl);
  FUNC_0(VAR_1 == 0);
}
