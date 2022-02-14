
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sk_rcvbuf; } ;
struct TYPE_3__ {int rcast; int mandatory; } ;
struct tipc_msg {int dummy; } ;
struct tipc_sock {TYPE_2__ sk; TYPE_1__ mc_method; struct tipc_group* group; int group_is_open; int portid; struct tipc_msg phdr; } ;
struct tipc_name_seq {int lower; int upper; int type; } ;
struct tipc_group_req {int scope; int type; int instance; } ;
struct tipc_group {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tipc_msg*,int) ;
 int FUNC_1 (struct tipc_msg*,int ) ;
 int FUNC_2 (struct tipc_msg*,int ) ;
 struct net* FUNC_3 (TYPE_2__*) ;
 struct tipc_group* FUNC_4 (struct net*,int ,struct tipc_group_req*,int *) ;
 int FUNC_5 (struct net*,struct tipc_group*) ;
 int FUNC_6 (struct net*,struct tipc_group*,int *) ;
 int FUNC_7 (struct net*,struct tipc_group*,int ,int ) ;
 int FUNC_8 (struct tipc_sock*,int ,struct tipc_name_seq*) ;

__attribute__((used)) static int FUNC_9(struct tipc_sock *VAR_5, struct tipc_group_req *VAR_6)
{
 struct net *VAR_7 = FUNC_3(&VAR_5->sk);
 struct tipc_group *VAR_8 = VAR_5->group;
 struct tipc_msg *VAR_9 = &VAR_5->phdr;
 struct tipc_name_seq VAR_10;
 int VAR_11;

 if (VAR_6->type < VAR_4)
  return -VAR_0;
 if (VAR_6->scope > VAR_3)
  return -VAR_1;
 if (VAR_8)
  return -VAR_0;
 VAR_8 = FUNC_4(VAR_7, VAR_5->portid, VAR_6, &VAR_5->group_is_open);
 if (!VAR_8)
  return -VAR_2;
 VAR_5->group = VAR_8;
 FUNC_1(VAR_9, VAR_6->scope);
 FUNC_2(VAR_9, VAR_6->type);
 FUNC_0(VAR_9, 1);
 VAR_10.type = VAR_6->type;
 VAR_10.lower = VAR_6->instance;
 VAR_10.upper = VAR_10.lower;
 FUNC_7(VAR_7, VAR_8, VAR_6->type, VAR_6->scope);
 VAR_11 = FUNC_8(VAR_5, VAR_6->scope, &VAR_10);
 if (VAR_11) {
  FUNC_5(VAR_7, VAR_8);
  VAR_5->group = ((void*)0);
  return VAR_11;
 }

 VAR_5->mc_method.rcast = 1;
 VAR_5->mc_method.mandatory = 1;
 FUNC_6(VAR_7, VAR_8, &VAR_5->sk.sk_rcvbuf);
 return VAR_11;
}
