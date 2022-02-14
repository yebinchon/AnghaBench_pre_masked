
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_seg {struct tcp_seg* next; } ;
struct tcp_pcb {struct tcp_seg* ooseq; } ;



__attribute__((used)) static int FUNC_0(struct tcp_pcb* VAR_0)
{
  int VAR_1 = 0;
  struct tcp_seg* VAR_2 = VAR_0->ooseq;
  while(VAR_2 != ((void*)0)) {
    VAR_1++;
    VAR_2 = VAR_2->next;
  }
  return VAR_1;
}
