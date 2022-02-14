
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {int qdisc; } ;
struct net_device {int dummy; } ;
struct Qdisc {int flags; int seqlock; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (int ,struct Qdisc*) ;
 struct Qdisc* FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_3,
     struct netdev_queue *VAR_4,
     void *VAR_5)
{
 struct Qdisc *VAR_6 = VAR_5;
 struct Qdisc *VAR_7;

 VAR_7 = FUNC_3(VAR_4->qdisc);
 if (VAR_7) {
  bool VAR_8 = VAR_7->flags & VAR_1;

  if (VAR_8)
   FUNC_5(&VAR_7->seqlock);
  FUNC_5(FUNC_0(VAR_7));

  if (!(VAR_7->flags & VAR_0))
   FUNC_4(VAR_2, &VAR_7->state);

  FUNC_2(VAR_4->qdisc, VAR_6);
  FUNC_1(VAR_7);

  FUNC_6(FUNC_0(VAR_7));
  if (VAR_8)
   FUNC_6(&VAR_7->seqlock);
 }
}
