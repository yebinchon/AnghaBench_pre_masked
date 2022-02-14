
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct sk_buff {int dummy; } ;
struct netns_ipvs {int dummy; } ;
struct ip_vs_dest {scalar_t__ tun_type; } ;
struct gre_base_hdr {int flags; scalar_t__ protocol; } ;
typedef int _greh ;
typedef int __u8 ;
typedef int __u16 ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 struct ip_vs_dest* FUNC_3 (struct netns_ipvs*,int ,union nf_inet_addr const*,int ) ;
 struct gre_base_hdr* FUNC_4 (struct sk_buff*,unsigned int,int,struct gre_base_hdr*) ;

__attribute__((used)) static int FUNC_5(struct netns_ipvs *VAR_4, struct sk_buff *VAR_5,
     unsigned int VAR_6, __u16 VAR_7,
     const union nf_inet_addr *VAR_8, __u8 *VAR_9)
{
 struct gre_base_hdr VAR_10, *VAR_11;
 struct ip_vs_dest *VAR_12;

 VAR_11 = FUNC_4(VAR_5, VAR_6, sizeof(VAR_10), &VAR_10);
 if (!VAR_11)
  goto unk;
 VAR_12 = FUNC_3(VAR_4, VAR_7, VAR_8, 0);
 if (!VAR_12)
  goto unk;
 if (VAR_12->tun_type == VAR_3) {
  __be16 VAR_13;


  if ((VAR_11->flags & ~VAR_1) != 0)
   goto unk;
  VAR_13 = VAR_11->protocol;

  if (VAR_13 != FUNC_2(VAR_0))
   goto unk;
  *VAR_9 = VAR_2;
  return FUNC_0(FUNC_1(VAR_11->flags));
 }

unk:
 return 0;
}
