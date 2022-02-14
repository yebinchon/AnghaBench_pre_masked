
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_neigh {int extended; } ;
struct x25_facilities {int winsize_in; int winsize_out; } ;


 int FUNC_0 (char*) ;

void FUNC_1(struct x25_facilities *VAR_0,
     struct x25_neigh *VAR_1)
{

 if (!VAR_1->extended) {
  if (VAR_0->winsize_in > 7) {
   FUNC_0("incoming winsize limited to 7\n");
   VAR_0->winsize_in = 7;
  }
  if (VAR_0->winsize_out > 7) {
   VAR_0->winsize_out = 7;
   FUNC_0("outgoing winsize limited to 7\n");
  }
 }
}
