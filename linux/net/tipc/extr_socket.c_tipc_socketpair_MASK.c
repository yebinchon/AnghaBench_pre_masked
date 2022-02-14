
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_4__ {void* node; int ref; } ;
struct TYPE_5__ {TYPE_1__ id; } ;
struct TYPE_6__ {TYPE_2__ addr; void* scope; void* addrtype; void* family; } ;
struct tipc_sock {int portid; TYPE_3__ peer; } ;
struct socket {int sk; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 struct tipc_sock* FUNC_2 (int ) ;
 int FUNC_3 (struct tipc_sock*,int ,void*) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_3, struct socket *VAR_4)
{
 struct tipc_sock *VAR_5 = FUNC_2(VAR_4->sk);
 struct tipc_sock *VAR_6 = FUNC_2(VAR_3->sk);
 u32 VAR_7 = FUNC_1(FUNC_0(VAR_3->sk));

 VAR_6->peer.family = VAR_0;
 VAR_6->peer.addrtype = VAR_1;
 VAR_6->peer.scope = VAR_2;
 VAR_6->peer.addr.id.ref = VAR_5->portid;
 VAR_6->peer.addr.id.node = VAR_7;
 VAR_5->peer.family = VAR_0;
 VAR_5->peer.addrtype = VAR_1;
 VAR_5->peer.scope = VAR_2;
 VAR_5->peer.addr.id.ref = VAR_6->portid;
 VAR_5->peer.addr.id.node = VAR_7;

 FUNC_3(VAR_6, VAR_5->portid, VAR_7);
 FUNC_3(VAR_5, VAR_6->portid, VAR_7);
 return 0;
}
