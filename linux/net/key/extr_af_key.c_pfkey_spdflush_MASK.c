
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sadb_msg {int sadb_msg_seq; int sadb_msg_pid; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct km_event {struct net* net; int seq; int portid; int event; TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,struct km_event*) ;
 struct net* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct sadb_msg const*) ;
 int FUNC_3 (struct net*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_3, struct sk_buff *VAR_4, const struct sadb_msg *VAR_5, void * const *VAR_6)
{
 struct net *VAR_7 = FUNC_1(VAR_3);
 struct km_event VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_3(VAR_7, VAR_2, 1);
 VAR_10 = FUNC_2(VAR_3, VAR_5);
 if (VAR_9 || VAR_10) {
  if (VAR_9 == -VAR_0)
   return 0;
  return VAR_9;
 }

 VAR_8.data.type = VAR_2;
 VAR_8.event = VAR_1;
 VAR_8.portid = VAR_5->sadb_msg_pid;
 VAR_8.seq = VAR_5->sadb_msg_seq;
 VAR_8.net = VAR_7;
 FUNC_0(((void*)0), 0, &VAR_8);

 return 0;
}
