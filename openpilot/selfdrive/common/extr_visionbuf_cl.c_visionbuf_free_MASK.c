
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int addr; int ctx; int buf_cl; scalar_t__ handle; } ;
typedef TYPE_1__ VisionBuf ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(const VisionBuf* VAR_0) {
  if (VAR_0->handle) {
    FUNC_3(VAR_0->addr);
  } else {
    int VAR_1 = FUNC_1(VAR_0->buf_cl);
    FUNC_0(VAR_1 == 0);



    FUNC_3(VAR_0->addr);

  }
}
