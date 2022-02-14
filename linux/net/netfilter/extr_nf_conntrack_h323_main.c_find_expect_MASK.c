
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct TYPE_9__ {int port; } ;
struct TYPE_10__ {TYPE_3__ tcp; } ;
struct TYPE_11__ {int protonum; TYPE_4__ u; int u3; } ;
struct TYPE_7__ {scalar_t__ port; } ;
struct TYPE_8__ {TYPE_1__ tcp; } ;
struct TYPE_12__ {TYPE_2__ u; int u3; } ;
struct nf_conntrack_tuple {TYPE_5__ dst; TYPE_6__ src; } ;
struct nf_conntrack_expect {struct nf_conn* master; } ;
struct nf_conn {int dummy; } ;
struct net {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 struct nf_conntrack_expect* FUNC_0 (struct net*,int ,struct nf_conntrack_tuple*) ;
 int FUNC_1 (int *,union nf_inet_addr*,int) ;
 int FUNC_2 (int *,int ,int) ;
 struct net* FUNC_3 (struct nf_conn*) ;
 int FUNC_4 (struct nf_conn*) ;

__attribute__((used)) static struct nf_conntrack_expect *FUNC_5(struct nf_conn *VAR_1,
            union nf_inet_addr *VAR_2,
            __be16 VAR_3)
{
 struct net *VAR_4 = FUNC_3(VAR_1);
 struct nf_conntrack_expect *VAR_5;
 struct nf_conntrack_tuple VAR_6;

 FUNC_2(&VAR_6.src.u3, 0, sizeof(VAR_6.src.u3));
 VAR_6.src.u.tcp.port = 0;
 FUNC_1(&VAR_6.dst.u3, VAR_2, sizeof(VAR_6.dst.u3));
 VAR_6.dst.u.tcp.port = VAR_3;
 VAR_6.dst.protonum = VAR_0;

 VAR_5 = FUNC_0(VAR_4, FUNC_4(VAR_1), &VAR_6);
 if (VAR_5 && VAR_5->master == VAR_1)
  return VAR_5;
 return ((void*)0);
}
