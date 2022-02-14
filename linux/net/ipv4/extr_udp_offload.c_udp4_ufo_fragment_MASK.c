
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udphdr {scalar_t__ check; } ;
struct sk_buff {unsigned int len; int encap_hdr_csum; int ip_summed; scalar_t__ encapsulation; } ;
struct iphdr {int daddr; int saddr; } ;
typedef int netdev_features_t ;
typedef int __wsum ;
struct TYPE_2__ {int gso_type; unsigned int gso_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sk_buff* FUNC_1 (struct sk_buff*,int ) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int ,unsigned int,int ) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct sk_buff*,int ,int) ;
 struct udphdr* FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (unsigned int,int ,int ,int ) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_11(struct sk_buff *VAR_8,
      netdev_features_t VAR_9)
{
 struct sk_buff *VAR_10 = FUNC_0(-VAR_2);
 unsigned int VAR_11;
 __wsum VAR_12;
 struct udphdr *VAR_13;
 struct iphdr *VAR_14;

 if (VAR_8->encapsulation &&
     (FUNC_6(VAR_8)->gso_type &
      (VAR_6|VAR_7))) {
  VAR_10 = FUNC_7(VAR_8, VAR_9, 0);
  goto out;
 }

 if (!(FUNC_6(VAR_8)->gso_type & (VAR_4 | VAR_5)))
  goto out;

 if (!FUNC_3(VAR_8, sizeof(struct udphdr)))
  goto out;

 if (FUNC_6(VAR_8)->gso_type & VAR_5)
  return FUNC_1(VAR_8, VAR_9);

 VAR_11 = FUNC_6(VAR_8)->gso_size;
 if (FUNC_10(VAR_8->len <= VAR_11))
  goto out;






 VAR_13 = FUNC_8(VAR_8);
 VAR_14 = FUNC_2(VAR_8);

 VAR_13->check = 0;
 VAR_12 = FUNC_4(VAR_8, 0, VAR_8->len, 0);
 VAR_13->check = FUNC_9(VAR_8->len, VAR_14->saddr, VAR_14->daddr, VAR_12);
 if (VAR_13->check == 0)
  VAR_13->check = VAR_1;

 VAR_8->ip_summed = VAR_0;





 if (!VAR_8->encap_hdr_csum)
  VAR_9 |= VAR_3;




 VAR_10 = FUNC_5(VAR_8, VAR_9);
out:
 return VAR_10;
}
