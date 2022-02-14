
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16_t ;
struct udp_pcb {int dummy; } ;
struct pbuf {int dummy; } ;
struct TYPE_3__ {scalar_t__ type; scalar_t__ self_ref; int pcb; } ;
typedef TYPE_1__ lnet_userdata ;
typedef int ip_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct pbuf*,int *,int ) ;
 int FUNC_1 (struct pbuf*) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, struct udp_pcb *VAR_3, struct pbuf *VAR_4, ip_addr_t *VAR_5, u16_t VAR_6) {
  lnet_userdata *VAR_7 = (lnet_userdata*)VAR_2;
  if (!VAR_7 || !VAR_7->pcb || VAR_7->type != VAR_1 || VAR_7->self_ref == VAR_0) {
    if (VAR_4) FUNC_1(VAR_4);
    return;
  }
  FUNC_0(VAR_7, VAR_4, VAR_5, VAR_6);
}
