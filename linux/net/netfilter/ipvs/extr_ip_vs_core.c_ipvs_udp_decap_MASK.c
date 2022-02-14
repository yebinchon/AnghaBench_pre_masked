
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct udphdr {scalar_t__ control; scalar_t__ version; scalar_t__ proto_ctype; int hlen; int dest; } ;
struct sk_buff {int dummy; } ;
struct netns_ipvs {int dummy; } ;
struct ip_vs_dest {scalar_t__ tun_type; } ;
struct guehdr {scalar_t__ control; scalar_t__ version; scalar_t__ proto_ctype; int hlen; int dest; } ;
typedef int _udph ;
typedef int _gueh ;
typedef scalar_t__ __u8 ;
typedef int __u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ip_vs_dest* FUNC_0 (struct netns_ipvs*,int ,union nf_inet_addr const*,int ) ;
 struct udphdr* FUNC_1 (struct sk_buff*,unsigned int,int,struct udphdr*) ;

__attribute__((used)) static int FUNC_2(struct netns_ipvs *VAR_2, struct sk_buff *VAR_3,
     unsigned int VAR_4, __u16 VAR_5,
     const union nf_inet_addr *VAR_6, __u8 *VAR_7)
{
 struct udphdr VAR_8, *VAR_9;
 struct ip_vs_dest *VAR_10;

 VAR_9 = FUNC_1(VAR_3, VAR_4, sizeof(VAR_8), &VAR_8);
 if (!VAR_9)
  goto unk;
 VAR_4 += sizeof(struct udphdr);
 VAR_10 = FUNC_0(VAR_2, VAR_5, VAR_6, VAR_9->dest);
 if (!VAR_10)
  goto unk;
 if (VAR_10->tun_type == VAR_1) {
  struct guehdr VAR_11, *VAR_12;

  VAR_12 = FUNC_1(VAR_3, VAR_4, sizeof(VAR_11), &VAR_11);
  if (!VAR_12)
   goto unk;
  if (VAR_12->control != 0 || VAR_12->version != 0)
   goto unk;

  if (VAR_12->proto_ctype != VAR_0)
   goto unk;
  *VAR_7 = VAR_12->proto_ctype;
  return sizeof(struct udphdr) + sizeof(struct guehdr) +
         (VAR_12->hlen << 2);
 }

unk:
 return 0;
}
