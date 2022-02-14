
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int (* sk_error_report ) (struct sock*) ;int sk_err; } ;
struct TYPE_2__ {scalar_t__ type; struct net_device* dev; } ;
struct packet_sock {int ifindex; int bind_lock; TYPE_1__ prot_hook; scalar_t__ num; scalar_t__ running; scalar_t__ fanout; } ;
struct net_device {int ifindex; int flags; } ;
typedef scalar_t__ __be16 ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sock*,int) ;
 struct net_device* FUNC_2 (int ,int) ;
 struct net_device* FUNC_3 (int ,char const*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct packet_sock*,struct net_device*) ;
 int FUNC_8 (struct packet_sock*) ;
 struct packet_sock* FUNC_9 (struct sock*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*,int ) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct sock*) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static int FUNC_20(struct sock *VAR_5, const char *VAR_6, int VAR_7,
     __be16 VAR_8)
{
 struct packet_sock *VAR_9 = FUNC_9(VAR_5);
 struct net_device *VAR_10;
 __be16 VAR_11;
 bool VAR_12;
 struct net_device *VAR_13 = ((void*)0);
 int VAR_14 = 0;
 bool VAR_15 = 0;

 FUNC_6(VAR_5);
 FUNC_16(&VAR_9->bind_lock);
 FUNC_10();

 if (VAR_9->fanout) {
  VAR_14 = -VAR_0;
  goto out_unlock;
 }

 if (VAR_6) {
  VAR_13 = FUNC_3(FUNC_15(VAR_5), VAR_6);
  if (!VAR_13) {
   VAR_14 = -VAR_2;
   goto out_unlock;
  }
 } else if (VAR_7) {
  VAR_13 = FUNC_2(FUNC_15(VAR_5), VAR_7);
  if (!VAR_13) {
   VAR_14 = -VAR_2;
   goto out_unlock;
  }
 }

 if (VAR_13)
  FUNC_4(VAR_13);

 VAR_11 = VAR_9->prot_hook.type;
 VAR_10 = VAR_9->prot_hook.dev;

 VAR_12 = VAR_11 != VAR_8 || VAR_10 != VAR_13;

 if (VAR_12) {
  if (VAR_9->running) {
   FUNC_11();



   VAR_9->num = 0;
   FUNC_1(VAR_5, 1);
   FUNC_10();
   VAR_10 = VAR_9->prot_hook.dev;
   if (VAR_13)
    VAR_15 = !FUNC_2(FUNC_15(VAR_5),
         VAR_13->ifindex);
  }

  FUNC_0(VAR_9->running);
  VAR_9->num = VAR_8;
  VAR_9->prot_hook.type = VAR_8;

  if (FUNC_19(VAR_15)) {
   FUNC_5(VAR_13);
   VAR_9->prot_hook.dev = ((void*)0);
   VAR_9->ifindex = -1;
   FUNC_8(VAR_9);
  } else {
   VAR_9->prot_hook.dev = VAR_13;
   VAR_9->ifindex = VAR_13 ? VAR_13->ifindex : 0;
   FUNC_7(VAR_9, VAR_13);
  }
 }
 if (VAR_10)
  FUNC_5(VAR_10);

 if (VAR_8 == 0 || !VAR_12)
  goto out_unlock;

 if (!VAR_15 && (!VAR_13 || (VAR_13->flags & VAR_3))) {
  FUNC_12(VAR_5);
 } else {
  VAR_5->sk_err = VAR_1;
  if (!FUNC_14(VAR_5, VAR_4))
   VAR_5->sk_error_report(VAR_5);
 }

out_unlock:
 FUNC_11();
 FUNC_17(&VAR_9->bind_lock);
 FUNC_13(VAR_5);
 return VAR_14;
}
