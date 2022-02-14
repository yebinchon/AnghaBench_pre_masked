
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int copy_q; int addr; int len; int buf_cl; } ;
typedef TYPE_1__ VisionBuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int *,int *) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int *,int *) ;
 int FUNC_3 (int ) ;

void FUNC_4(const VisionBuf* VAR_2, int VAR_3) {
  int VAR_4 = 0;
  if (!VAR_2->buf_cl) return;


  if (VAR_3 == VAR_1) {
    VAR_4 = FUNC_1(VAR_2->copy_q, VAR_2->buf_cl, VAR_0, 0, VAR_2->len, VAR_2->addr, 0, ((void*)0), ((void*)0));
  } else {
    VAR_4 = FUNC_2(VAR_2->copy_q, VAR_2->buf_cl, VAR_0, 0, VAR_2->len, VAR_2->addr, 0, ((void*)0), ((void*)0));
  }
  FUNC_0(VAR_4 == 0);
  FUNC_3(VAR_2->copy_q);

}
