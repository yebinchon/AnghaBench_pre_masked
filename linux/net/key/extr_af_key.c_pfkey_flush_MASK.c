
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sadb_msg {int sadb_msg_pid; int sadb_msg_seq; int sadb_msg_satype; } ;
struct net {int dummy; } ;
struct TYPE_2__ {unsigned int proto; } ;
struct km_event {struct net* net; int event; int portid; int seq; TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct km_event*) ;
 unsigned int FUNC_1 (int ) ;
 struct net* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,struct sadb_msg const*) ;
 int FUNC_4 (struct net*,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_3, struct sk_buff *VAR_4, const struct sadb_msg *VAR_5, void * const *VAR_6)
{
 struct net *VAR_7 = FUNC_2(VAR_3);
 unsigned int VAR_8;
 struct km_event VAR_9;
 int VAR_10, VAR_11;

 VAR_8 = FUNC_1(VAR_5->sadb_msg_satype);
 if (VAR_8 == 0)
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_7, VAR_8, 1, 0);
 VAR_11 = FUNC_3(VAR_3, VAR_5);
 if (VAR_10 || VAR_11) {
  if (VAR_10 == -VAR_1)
   VAR_10 = 0;
  return VAR_10 ? VAR_10 : VAR_11;
 }

 VAR_9.data.proto = VAR_8;
 VAR_9.seq = VAR_5->sadb_msg_seq;
 VAR_9.portid = VAR_5->sadb_msg_pid;
 VAR_9.event = VAR_2;
 VAR_9.net = VAR_7;
 FUNC_0(((void*)0), &VAR_9);

 return 0;
}
