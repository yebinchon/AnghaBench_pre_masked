
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32_t ;
struct tcp_seg {struct tcp_seg* next; TYPE_1__* tcphdr; } ;
struct tcp_pcb {struct tcp_seg* ooseq; } ;
struct TYPE_2__ {int seqno; } ;


 int FUNC_0 () ;

__attribute__((used)) static u32_t
FUNC_1(struct tcp_pcb* VAR_0, int VAR_1)
{
  int VAR_2 = 0;
  struct tcp_seg* VAR_3 = VAR_0->ooseq;


  while(VAR_3 != ((void*)0)) {
    if(VAR_2 == VAR_1) {
      return VAR_3->tcphdr->seqno;
    }
    VAR_2++;
    VAR_3 = VAR_3->next;
  }
  FUNC_0();
  return 0;
}
