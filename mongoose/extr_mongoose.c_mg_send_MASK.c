
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct mg_connection {int send_mbuf; scalar_t__ last_io_time; } ;


 int FUNC_0 (int *,void const*,int) ;
 scalar_t__ FUNC_1 () ;

void FUNC_2(struct mg_connection *VAR_0, const void *VAR_1, int VAR_2) {
  VAR_0->last_io_time = (time_t) FUNC_1();
  FUNC_0(&VAR_0->send_mbuf, VAR_1, VAR_2);
}
