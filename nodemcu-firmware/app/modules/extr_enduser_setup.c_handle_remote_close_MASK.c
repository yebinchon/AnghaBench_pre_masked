
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_pcb {int dummy; } ;
struct pbuf {int tot_len; } ;
typedef int err_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct pbuf*) ;
 int FUNC_2 (struct tcp_pcb*) ;
 int FUNC_3 (struct tcp_pcb*,int ,int ) ;
 int FUNC_4 (struct tcp_pcb*,int ) ;
 int FUNC_5 (struct tcp_pcb*,int ) ;

__attribute__((used)) static err_t FUNC_6 (void *VAR_1, struct tcp_pcb *VAR_2, struct pbuf *VAR_3, err_t VAR_4)
{
  FUNC_0("handle_remote_close");

  (void)VAR_1; (void)VAR_4;
  if (VAR_3)
  {
    FUNC_5 (VAR_2, VAR_3->tot_len);
    FUNC_1 (VAR_3);
  }
  else
  {
    FUNC_4 (VAR_2, 0);
    FUNC_3 (VAR_2, 0, 0);
    FUNC_2 (VAR_2);
  }
  return VAR_0;
}
