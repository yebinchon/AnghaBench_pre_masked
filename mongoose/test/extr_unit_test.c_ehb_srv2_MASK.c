
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; } ;
struct mg_connection {TYPE_2__* mgr; TYPE_1__ recv_mbuf; } ;
struct TYPE_4__ {scalar_t__ user_data; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct mg_connection *VAR_1, int VAR_2, void *VAR_3) {
  if (VAR_2 == VAR_0) {
    if (VAR_1->recv_mbuf.size == 1) (*(int *) VAR_1->mgr->user_data) = 1;
    (void) VAR_3;
  }
}
