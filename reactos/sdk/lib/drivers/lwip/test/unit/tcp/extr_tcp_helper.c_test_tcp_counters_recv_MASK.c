
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_tcp_counters {scalar_t__ close_calls; scalar_t__ recv_calls_after_close; scalar_t__ recved_bytes_after_close; int recved_bytes; int recv_calls; } ;
struct tcp_pcb {int dummy; } ;
struct pbuf {scalar_t__ tot_len; } ;
typedef scalar_t__ err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct pbuf*) ;
 int FUNC_3 (struct test_tcp_counters*,struct pbuf*) ;

err_t
FUNC_4(void* VAR_1, struct tcp_pcb* VAR_2, struct pbuf* VAR_3, err_t VAR_4)
{
  struct test_tcp_counters* VAR_5 = VAR_1;
  FUNC_1(VAR_1 != ((void*)0), VAR_0);
  FUNC_1(VAR_2 != ((void*)0), VAR_0);
  FUNC_1(VAR_4 == VAR_0, VAR_0);

  if (VAR_3 != ((void*)0)) {
    if (VAR_5->close_calls == 0) {
      VAR_5->recv_calls++;
      FUNC_3(VAR_5, VAR_3);
      VAR_5->recved_bytes += VAR_3->tot_len;
    } else {
      VAR_5->recv_calls_after_close++;
      VAR_5->recved_bytes_after_close += VAR_3->tot_len;
    }
    FUNC_2(VAR_3);
  } else {
    VAR_5->close_calls++;
  }
  FUNC_0(VAR_5->recv_calls_after_close == 0 && VAR_5->recved_bytes_after_close == 0);
  return VAR_0;
}
