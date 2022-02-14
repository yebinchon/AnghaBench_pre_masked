
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void* hard_packet_limit; void* hard_byte_limit; void* soft_packet_limit; void* soft_byte_limit; } ;
struct TYPE_6__ {int add_time; } ;
struct TYPE_8__ {int function; } ;
struct TYPE_5__ {int all; } ;
struct xfrm_state {int lock; scalar_t__ replay_maxdiff; scalar_t__ replay_maxage; TYPE_3__ lft; TYPE_2__ curlft; int rtimer; TYPE_4__ mtimer; int byspi; int bysrc; int bydst; TYPE_1__ km; int tunnel_users; int refcnt; int xs_net; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 struct xfrm_state* FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,struct net*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

struct xfrm_state *FUNC_10(struct net *VAR_8)
{
 struct xfrm_state *VAR_9;

 VAR_9 = FUNC_4(VAR_6, VAR_1 | VAR_4);

 if (VAR_9) {
  FUNC_9(&VAR_9->xs_net, VAR_8);
  FUNC_6(&VAR_9->refcnt, 1);
  FUNC_2(&VAR_9->tunnel_users, 0);
  FUNC_1(&VAR_9->km.all);
  FUNC_0(&VAR_9->bydst);
  FUNC_0(&VAR_9->bysrc);
  FUNC_0(&VAR_9->byspi);
  FUNC_3(&VAR_9->mtimer, VAR_0, VAR_2);
  VAR_9->mtimer.function = VAR_7;
  FUNC_8(&VAR_9->rtimer, VAR_5, 0);
  VAR_9->curlft.add_time = FUNC_5();
  VAR_9->lft.soft_byte_limit = VAR_3;
  VAR_9->lft.soft_packet_limit = VAR_3;
  VAR_9->lft.hard_byte_limit = VAR_3;
  VAR_9->lft.hard_packet_limit = VAR_3;
  VAR_9->replay_maxage = 0;
  VAR_9->replay_maxdiff = 0;
  FUNC_7(&VAR_9->lock);
 }
 return VAR_9;
}
