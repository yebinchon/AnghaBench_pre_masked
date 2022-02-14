
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_tcp_txcounters {struct pbuf* tx_packets; scalar_t__ copy_tx_packets; int num_tx_bytes; int num_tx_calls; } ;
struct pbuf {scalar_t__ tot_len; } ;
struct netif {scalar_t__ state; } ;
typedef int ip_addr_t ;
typedef scalar_t__ err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct pbuf* FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (struct pbuf*,struct pbuf*) ;
 scalar_t__ FUNC_4 (struct pbuf*,struct pbuf*) ;

__attribute__((used)) static err_t FUNC_5(struct netif *VAR_3, struct pbuf *VAR_4,
       ip_addr_t *VAR_5)
{
  struct test_tcp_txcounters *VAR_6 = (struct test_tcp_txcounters*)VAR_3->state;
  FUNC_1(VAR_5);
  if (VAR_6 != ((void*)0))
  {
    VAR_6->num_tx_calls++;
    VAR_6->num_tx_bytes += VAR_4->tot_len;
    if (VAR_6->copy_tx_packets) {
      struct pbuf *VAR_7 = FUNC_2(VAR_1, VAR_4->tot_len, VAR_2);
      err_t VAR_8;
      FUNC_0(VAR_7 != ((void*)0));
      VAR_8 = FUNC_4(VAR_7, VAR_4);
      FUNC_0(VAR_8 == VAR_0);
      if (VAR_6->tx_packets == ((void*)0)) {
        VAR_6->tx_packets = VAR_7;
      } else {
        FUNC_3(VAR_6->tx_packets, VAR_7);
      }
    }
  }
  return VAR_0;
}
