
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sadb_msg {int sadb_msg_errno; scalar_t__ sadb_msg_seq; } ;
struct TYPE_3__ {int (* dump ) (struct pfkey_sock*) ;TYPE_2__* skb; } ;
struct pfkey_sock {int dump_lock; TYPE_1__ dump; int sk; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pfkey_sock*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pfkey_sock*) ;

__attribute__((used)) static int FUNC_7(struct pfkey_sock *VAR_3)
{
 struct sadb_msg *VAR_4;
 int VAR_5;

 FUNC_0(&VAR_3->dump_lock);
 if (!VAR_3->dump.dump) {
  VAR_5 = 0;
  goto out;
 }

 VAR_5 = VAR_3->dump.dump(VAR_3);
 if (VAR_5 == -VAR_1) {
  VAR_5 = 0;
  goto out;
 }

 if (VAR_3->dump.skb) {
  if (!FUNC_3(&VAR_3->sk)) {
   VAR_5 = 0;
   goto out;
  }

  VAR_4 = (struct sadb_msg *) VAR_3->dump.skb->data;
  VAR_4->sadb_msg_seq = 0;
  VAR_4->sadb_msg_errno = VAR_5;
  FUNC_2(VAR_3->dump.skb, VAR_2, VAR_0,
    &VAR_3->sk, FUNC_5(&VAR_3->sk));
  VAR_3->dump.skb = ((void*)0);
 }

 FUNC_4(VAR_3);

out:
 FUNC_1(&VAR_3->dump_lock);
 return VAR_5;
}
