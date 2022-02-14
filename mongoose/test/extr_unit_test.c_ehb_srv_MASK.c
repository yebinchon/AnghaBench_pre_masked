
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct mg_connection {TYPE_1__* mgr; struct mbuf recv_mbuf; } ;
struct TYPE_2__ {scalar_t__ user_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*,int) ;

__attribute__((used)) static void FUNC_1(struct mg_connection *VAR_1, int VAR_2, void *VAR_3) {
  struct mbuf *VAR_4 = &VAR_1->recv_mbuf;
  (void) VAR_4;
  (void) VAR_3;

  if (VAR_2 == VAR_0) {
    if (*(int *) VAR_3 == 1) (*(int *) VAR_1->mgr->user_data)++;
    FUNC_0(VAR_4, *(int *) VAR_3);
  }
}
