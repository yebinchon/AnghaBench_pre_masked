
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct l2cap_conf_rfc {void* monitor_timeout; void* retrans_timeout; } ;
struct l2cap_chan {scalar_t__ local_amp_id; TYPE_1__* hs_hcon; } ;
struct TYPE_4__ {int amp_be_flush_to; } ;
struct TYPE_3__ {TYPE_2__* hdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct l2cap_chan *VAR_3,
          struct l2cap_conf_rfc *VAR_4)
{
 if (VAR_3->local_amp_id != VAR_0 && VAR_3->hs_hcon) {
  u64 VAR_5 = VAR_3->hs_hcon->hdev->amp_be_flush_to;
  VAR_5 = FUNC_0(VAR_5, 1000);





  VAR_5 = 3 * VAR_5 + 500;

  if (VAR_5 > 0xffff)
   VAR_5 = 0xffff;

  VAR_4->retrans_timeout = FUNC_1((u16) VAR_5);
  VAR_4->monitor_timeout = VAR_4->retrans_timeout;
 } else {
  VAR_4->retrans_timeout = FUNC_1(VAR_2);
  VAR_4->monitor_timeout = FUNC_1(VAR_1);
 }
}
