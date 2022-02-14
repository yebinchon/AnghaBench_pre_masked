
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16_t ;
struct tcp_pcb {int dummy; } ;
typedef scalar_t__ err_t ;
struct TYPE_2__ {unsigned int http_payload_len; scalar_t__ http_payload_data; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct tcp_pcb*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (struct tcp_pcb*) ;
 int FUNC_3 (struct tcp_pcb*,void*) ;
 int FUNC_4 (struct tcp_pcb*,int ) ;
 unsigned int FUNC_5 (struct tcp_pcb*) ;
 scalar_t__ FUNC_6 (struct tcp_pcb*,scalar_t__,unsigned int,int ) ;

__attribute__((used)) static err_t FUNC_7 (void *VAR_3, struct tcp_pcb *VAR_4, u16_t VAR_5)
{
  FUNC_0("streamout_sent");

  (void)VAR_5;
  unsigned VAR_6 = (unsigned)VAR_3;

  if (!VAR_2 || !VAR_2->http_payload_data)
  {
    FUNC_2 (VAR_4);
    return VAR_0;
  }

  unsigned VAR_7 = VAR_2->http_payload_len - VAR_6;
  unsigned VAR_8 = FUNC_5 (VAR_4);
  if (VAR_8 < VAR_7)
    VAR_7 = VAR_8;


  err_t VAR_9 = FUNC_6 (VAR_4, VAR_2->http_payload_data + VAR_6, VAR_7, 0);
  if (VAR_9 != VAR_1)
  {
    FUNC_0("streaming out html failed");
    FUNC_2 (VAR_4);
    return VAR_0;
  }

  VAR_6 += VAR_7;

  if (VAR_6 >= VAR_2->http_payload_len)
  {
    FUNC_4 (VAR_4, 0);
    FUNC_1 (VAR_4);
  }
  else
    FUNC_3 (VAR_4, (void *)VAR_6);

  return VAR_1;
}
