
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_tcp_txcounters {struct test_tcp_txcounters* next; int ip_addr; int netmask; int flags; int output; struct test_tcp_txcounters* state; } ;
struct netif {struct netif* next; int ip_addr; int netmask; int flags; int output; struct netif* state; } ;
typedef int ip_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct test_tcp_txcounters*,int ,int) ;
 struct test_tcp_txcounters* VAR_1 ;
 int VAR_2 ;

void FUNC_2(struct netif *VAR_3, struct test_tcp_txcounters *VAR_4,
                         ip_addr_t *VAR_5, ip_addr_t *VAR_6)
{
  struct netif *VAR_7;
  FUNC_1(VAR_3, 0, sizeof(struct netif));
  if (VAR_4 != ((void*)0)) {
    FUNC_1(VAR_4, 0, sizeof(struct test_tcp_txcounters));
    VAR_3->state = VAR_4;
  }
  VAR_3->output = VAR_2;
  VAR_3->flags |= VAR_0;
  FUNC_0(VAR_3->netmask, *VAR_6);
  FUNC_0(VAR_3->ip_addr, *VAR_5);
  for (VAR_7 = VAR_1; VAR_7 != ((void*)0); VAR_7 = VAR_7->next) {
    if (VAR_7 == VAR_3) {
      return;
    }
  }
  VAR_3->next = ((void*)0);
  VAR_1 = VAR_3;
}
