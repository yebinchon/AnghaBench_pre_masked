
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int krnl; int m_uv_cl; int m_y_cl; } ;
typedef TYPE_1__ Transform ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(Transform* VAR_0) {
  int VAR_1 = 0;

  VAR_1 = FUNC_2(VAR_0->m_y_cl);
  FUNC_0(VAR_1 == 0);
  VAR_1 = FUNC_2(VAR_0->m_uv_cl);
  FUNC_0(VAR_1 == 0);

  VAR_1 = FUNC_1(VAR_0->krnl);
  FUNC_0(VAR_1 == 0);
}
