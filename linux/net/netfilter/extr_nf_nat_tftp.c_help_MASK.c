
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_8__ {int port; } ;
struct TYPE_9__ {TYPE_1__ udp; } ;
struct nf_conntrack_expect {struct nf_conn* master; int expectfn; int dir; TYPE_2__ saved_proto; } ;
struct nf_conn {TYPE_7__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_10__ {int port; } ;
struct TYPE_11__ {TYPE_3__ udp; } ;
struct TYPE_12__ {TYPE_4__ u; } ;
struct TYPE_13__ {TYPE_5__ src; } ;
struct TYPE_14__ {TYPE_6__ tuple; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (struct nf_conntrack_expect*,int ) ;
 int FUNC_1 (struct sk_buff*,struct nf_conn*,char*) ;
 int VAR_4 ;

__attribute__((used)) static unsigned int FUNC_2(struct sk_buff *VAR_5,
    enum ip_conntrack_info VAR_6,
    struct nf_conntrack_expect *VAR_7)
{
 const struct nf_conn *VAR_8 = VAR_7->master;

 VAR_7->saved_proto.udp.port
  = VAR_8->tuplehash[VAR_0].tuple.src.u.udp.port;
 VAR_7->dir = VAR_1;
 VAR_7->expectfn = VAR_4;
 if (FUNC_0(VAR_7, 0) != 0) {
  FUNC_1(VAR_5, VAR_7->master, "cannot add expectation");
  return VAR_3;
 }
 return VAR_2;
}
