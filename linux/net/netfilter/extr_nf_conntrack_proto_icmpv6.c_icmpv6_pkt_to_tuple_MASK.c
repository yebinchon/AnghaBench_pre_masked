
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


struct sk_buff {int dummy; } ;
struct TYPE_10__ {int code; int type; } ;
struct TYPE_12__ {TYPE_4__ icmp; } ;
struct TYPE_11__ {TYPE_6__ u; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_8__ {TYPE_1__ icmp; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
struct nf_conntrack_tuple {TYPE_5__ dst; TYPE_3__ src; } ;
struct net {int dummy; } ;
struct icmp6hdr {int icmp6_code; int icmp6_identifier; int icmp6_type; } ;
typedef int _hdr ;


 struct icmp6hdr* FUNC_0 (struct sk_buff const*,unsigned int,int,struct icmp6hdr*) ;

bool FUNC_1(const struct sk_buff *VAR_0,
    unsigned int VAR_1,
    struct net *VAR_2,
    struct nf_conntrack_tuple *VAR_3)
{
 const struct icmp6hdr *VAR_4;
 struct icmp6hdr VAR_5;

 VAR_4 = FUNC_0(VAR_0, VAR_1, sizeof(VAR_5), &VAR_5);
 if (VAR_4 == ((void*)0))
  return 0;
 VAR_3->dst.u.icmp.type = VAR_4->icmp6_type;
 VAR_3->src.u.icmp.id = VAR_4->icmp6_identifier;
 VAR_3->dst.u.icmp.code = VAR_4->icmp6_code;

 return 1;
}
