
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcp_pcb {int dummy; } ;
struct pbuf {int dummy; } ;
struct TYPE_4__ {scalar_t__ hold; } ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ self_ref; TYPE_1__ client; int pcb; } ;
typedef TYPE_2__ lnet_userdata ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (void*,int ) ;
 int FUNC_1 (TYPE_2__*,struct pbuf*,int ,int ) ;
 int FUNC_2 (struct tcp_pcb*) ;
 int FUNC_3 (struct tcp_pcb*,int ) ;

__attribute__((used)) static err_t FUNC_4(void *VAR_5, struct tcp_pcb *VAR_6, struct pbuf *VAR_7, err_t VAR_8) {
  lnet_userdata *VAR_9 = (lnet_userdata*)VAR_5;
  if (!VAR_9 || !VAR_9->pcb || VAR_9->type != VAR_4 || VAR_9->self_ref == VAR_2)
    return VAR_0;
  if (!VAR_7) {
    FUNC_0(VAR_5, VAR_8);
    return FUNC_2(VAR_6);
  }
  FUNC_1(VAR_9, VAR_7, 0, 0);
  FUNC_3(VAR_6, VAR_9->client.hold ? 0 : VAR_3);
  return VAR_1;
}
