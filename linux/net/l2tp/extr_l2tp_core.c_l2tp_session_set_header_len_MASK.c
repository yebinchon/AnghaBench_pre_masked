
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l2tp_session {int hdr_len; int cookie_len; TYPE_1__* tunnel; scalar_t__ send_seq; } ;
struct TYPE_2__ {scalar_t__ encap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct l2tp_session*) ;

void FUNC_1(struct l2tp_session *VAR_2, int VAR_3)
{
 if (VAR_3 == VAR_1) {
  VAR_2->hdr_len = 6;
  if (VAR_2->send_seq)
   VAR_2->hdr_len += 4;
 } else {
  VAR_2->hdr_len = 4 + VAR_2->cookie_len;
  VAR_2->hdr_len += FUNC_0(VAR_2);
  if (VAR_2->tunnel->encap == VAR_0)
   VAR_2->hdr_len += 4;
 }

}
