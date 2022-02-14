
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_tcp_counters {int dummy; } ;
struct tcp_pcb {void* snd_wnd_max; void* snd_wnd; } ;


 void* VAR_0 ;
 int FUNC_0 (struct tcp_pcb*,struct test_tcp_counters*) ;
 int FUNC_1 (struct tcp_pcb*,int ) ;
 struct tcp_pcb* FUNC_2 () ;
 int FUNC_3 (struct tcp_pcb*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

struct tcp_pcb*
FUNC_4(struct test_tcp_counters* VAR_3)
{
  struct tcp_pcb* VAR_4 = FUNC_2();
  if (VAR_4 != ((void*)0)) {

    FUNC_0(VAR_4, VAR_3);
    FUNC_3(VAR_4, VAR_2);
    FUNC_1(VAR_4, VAR_1);
    VAR_4->snd_wnd = VAR_0;
    VAR_4->snd_wnd_max = VAR_0;
  }
  return VAR_4;
}
