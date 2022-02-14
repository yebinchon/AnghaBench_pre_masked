
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_seg {struct tcp_seg* next; } ;
struct tcp_pcb {struct tcp_seg* ooseq; } ;


 int FUNC_0 (struct tcp_seg*) ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(struct tcp_pcb* VAR_0, int VAR_1)
{
  int VAR_2 = 0;
  struct tcp_seg* VAR_3 = VAR_0->ooseq;


  while(VAR_3 != ((void*)0)) {
    if(VAR_2 == VAR_1) {
      return FUNC_0(VAR_3);
    }
    VAR_2++;
    VAR_3 = VAR_3->next;
  }
  FUNC_1();
  return -1;
}
