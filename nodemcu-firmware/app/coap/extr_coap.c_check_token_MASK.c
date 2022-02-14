
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ len; int p; } ;
struct TYPE_6__ {TYPE_1__ tok; } ;
typedef TYPE_2__ coap_packet_t ;
struct TYPE_7__ {scalar_t__ len; int p; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 TYPE_3__ VAR_0 ;

int
FUNC_1(coap_packet_t *VAR_1) {
  return VAR_1->tok.len == VAR_0.len && FUNC_0(VAR_1->tok.p, VAR_0.p, VAR_0.len) == 0;
}
