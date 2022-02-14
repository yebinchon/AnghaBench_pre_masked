
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sync_maxlen; int syncid; int mcast_ifn; } ;
struct netns_ipvs {TYPE_1__ bcfg; } ;
struct ip_vs_sync_thread_data {int buf; TYPE_3__* sock; int id; struct netns_ipvs* ipvs; } ;
struct TYPE_6__ {TYPE_2__* sk; } ;
struct TYPE_5__ {int sk_receive_queue; } ;


 int VAR_0 ;
 int FUNC_0 (struct netns_ipvs*,int ,int) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 int * FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(void *VAR_1)
{
 struct ip_vs_sync_thread_data *VAR_2 = VAR_1;
 struct netns_ipvs *VAR_3 = VAR_2->ipvs;
 int VAR_4;

 FUNC_4("sync thread started: state = BACKUP, mcast_ifn = %s, "
  "syncid = %d, id = %d\n",
  VAR_3->bcfg.mcast_ifn, VAR_3->bcfg.syncid, VAR_2->id);

 while (!FUNC_2()) {
  FUNC_7(*FUNC_5(VAR_2->sock->sk),
    !FUNC_6(&VAR_2->sock->sk->sk_receive_queue)
    || FUNC_2());


  while (!FUNC_6(&(VAR_2->sock->sk->sk_receive_queue))) {
   VAR_4 = FUNC_1(VAR_2->sock, VAR_2->buf,
     VAR_3->bcfg.sync_maxlen);
   if (VAR_4 <= 0) {
    if (VAR_4 != -VAR_0)
     FUNC_3("receiving message error\n");
    break;
   }

   FUNC_0(VAR_3, VAR_2->buf, VAR_4);
  }
 }

 return 0;
}
