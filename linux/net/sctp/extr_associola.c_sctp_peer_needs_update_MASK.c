
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* sk; } ;
struct sctp_association {int state; int pathmtu; TYPE_2__ base; scalar_t__ a_rwnd; scalar_t__ rwnd; } ;
struct TYPE_4__ {int rwnd_upd_shift; } ;
struct net {TYPE_1__ sctp; } ;
struct TYPE_6__ {int sk_rcvbuf; } ;






 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;
 struct net* FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static inline bool FUNC_2(struct sctp_association *VAR_1)
{
 struct net *VAR_2 = FUNC_1(VAR_1->base.sk);
 switch (VAR_1->state) {
 case 131:
 case 130:
 case 129:
 case 128:
  if ((VAR_1->rwnd > VAR_1->a_rwnd) &&
      ((VAR_1->rwnd - VAR_1->a_rwnd) >= FUNC_0(VAR_0,
      (VAR_1->base.sk->sk_rcvbuf >> VAR_2->sctp.rwnd_upd_shift),
      VAR_1->pathmtu)))
   return 1;
  break;
 default:
  break;
 }
 return 0;
}
