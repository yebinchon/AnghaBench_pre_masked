
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32_t ;
struct tcp_seg {TYPE_1__* tcphdr; struct tcp_seg* next; } ;
struct TYPE_2__ {scalar_t__ seqno; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct tcp_seg *VAR_0, int VAR_1, u32_t *VAR_2)
{
  struct tcp_seg *VAR_3 = VAR_0;
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++, VAR_3 = VAR_3->next) {
    FUNC_1(VAR_3 != ((void*)0));
    FUNC_0(VAR_3->tcphdr->seqno == FUNC_2(VAR_2[VAR_4]));
  }
  FUNC_0(VAR_3 == ((void*)0));
}
