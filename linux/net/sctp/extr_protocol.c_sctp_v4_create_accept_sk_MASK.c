
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sock {TYPE_5__* sk_prot; } ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_7__ {TYPE_1__ sin_addr; } ;
struct TYPE_8__ {TYPE_2__ v4; } ;
struct TYPE_9__ {TYPE_3__ primary_addr; } ;
struct sctp_association {TYPE_4__ peer; } ;
struct inet_sock {int inet_daddr; } ;
struct TYPE_10__ {scalar_t__ (* init ) (struct sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inet_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,struct sock*,struct sctp_association*) ;
 int FUNC_2 (struct sock*,struct sock*) ;
 struct sock* FUNC_3 (int ,int ,int ,TYPE_5__*,int) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int *,struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,int ) ;
 scalar_t__ FUNC_9 (struct sock*) ;

__attribute__((used)) static struct sock *FUNC_10(struct sock *VAR_3,
          struct sctp_association *VAR_4,
          bool VAR_5)
{
 struct sock *VAR_6 = FUNC_3(FUNC_7(VAR_3), VAR_1, VAR_0,
   VAR_3->sk_prot, VAR_5);
 struct inet_sock *VAR_7;

 if (!VAR_6)
  goto out;

 FUNC_6(((void*)0), VAR_6);

 FUNC_1(VAR_6, VAR_3, VAR_4);
 FUNC_8(VAR_6, VAR_2);

 FUNC_2(VAR_3, VAR_6);

 VAR_7 = FUNC_0(VAR_6);

 VAR_7->inet_daddr = VAR_4->peer.primary_addr.v4.sin_addr.s_addr;

 FUNC_5(VAR_6);

 if (VAR_6->sk_prot->init(VAR_6)) {
  FUNC_4(VAR_6);
  VAR_6 = ((void*)0);
 }

out:
 return VAR_6;
}
