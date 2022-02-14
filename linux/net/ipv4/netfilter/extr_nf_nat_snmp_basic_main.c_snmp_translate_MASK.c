
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


typedef scalar_t__ u16 ;
struct udphdr {int check; int len; } ;
struct snmp_ctx {scalar_t__ from; scalar_t__ to; unsigned char* begin; int * check; } ;
struct sk_buff {int dummy; } ;
struct nf_conn {TYPE_6__* tuplehash; } ;
struct iphdr {int ihl; } ;
typedef int __be32 ;
struct TYPE_9__ {scalar_t__ ip; } ;
struct TYPE_10__ {TYPE_3__ u3; } ;
struct TYPE_7__ {scalar_t__ ip; } ;
struct TYPE_8__ {TYPE_1__ u3; } ;
struct TYPE_11__ {TYPE_4__ dst; TYPE_2__ src; } ;
struct TYPE_12__ {TYPE_5__ tuple; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct snmp_ctx*,char*,scalar_t__) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct nf_conn*,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct nf_conn *VAR_4, int VAR_5, struct sk_buff *VAR_6)
{
 struct iphdr *VAR_7 = FUNC_1(VAR_6);
 struct udphdr *VAR_8 = (struct udphdr *)((__be32 *)VAR_7 + VAR_7->ihl);
 u16 VAR_9 = FUNC_3(VAR_8->len) - sizeof(struct udphdr);
 char *VAR_10 = (unsigned char *)VAR_8 + sizeof(struct udphdr);
 struct snmp_ctx VAR_11;
 int VAR_12;

 if (VAR_5 == VAR_0) {
  VAR_11.from = VAR_4->tuplehash[VAR_5].tuple.src.u3.ip;
  VAR_11.to = VAR_4->tuplehash[!VAR_5].tuple.dst.u3.ip;
 } else {
  VAR_11.from = VAR_4->tuplehash[!VAR_5].tuple.src.u3.ip;
  VAR_11.to = VAR_4->tuplehash[VAR_5].tuple.dst.u3.ip;
 }

 if (VAR_11.from == VAR_11.to)
  return VAR_1;

 VAR_11.begin = (unsigned char *)VAR_8 + sizeof(struct udphdr);
 VAR_11.check = &VAR_8->check;
 VAR_12 = FUNC_0(&VAR_3, &VAR_11, VAR_10, VAR_9);
 if (VAR_12 < 0) {
  FUNC_2(VAR_6, VAR_4, "parser failed\n");
  return VAR_2;
 }

 return VAR_1;
}
