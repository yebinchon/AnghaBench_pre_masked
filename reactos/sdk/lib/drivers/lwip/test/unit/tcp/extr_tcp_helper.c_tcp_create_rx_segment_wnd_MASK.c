
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef scalar_t__ u32_t ;
typedef int u16_t ;
struct tcp_pcb {scalar_t__ lastack; scalar_t__ rcv_nxt; int local_port; int remote_port; int local_ip; int remote_ip; } ;
struct pbuf {int dummy; } ;


 struct pbuf* FUNC_0 (int *,int *,int ,int ,void*,size_t,scalar_t__,scalar_t__,int ,int ) ;

struct pbuf* FUNC_1(struct tcp_pcb* VAR_0, void* VAR_1, size_t VAR_2,
                   u32_t VAR_3, u32_t VAR_4, u8_t VAR_5, u16_t VAR_6)
{
  return FUNC_0(&VAR_0->remote_ip, &VAR_0->local_ip, VAR_0->remote_port, VAR_0->local_port,
    VAR_1, VAR_2, VAR_0->rcv_nxt + VAR_3, VAR_0->lastack + VAR_4, VAR_5, VAR_6);
}
