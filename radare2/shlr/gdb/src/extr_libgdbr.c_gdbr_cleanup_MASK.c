
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gdbr_lock; int read_buff; int send_buff; scalar_t__ send_len; int data; } ;
typedef TYPE_1__ libgdbr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(libgdbr_t *VAR_0) {
 if (!VAR_0) {
  return -1;
 }
 FUNC_0 (VAR_0->data);
 VAR_0->send_len = 0;
 FUNC_0 (VAR_0->send_buff);
 FUNC_0 (VAR_0->read_buff);
 FUNC_1 (VAR_0->gdbr_lock);
 return 0;
}
