
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct sk_buff {int ipvs_property; } ;
struct ip_vs_protocol {int dummy; } ;
struct ip_vs_conn {int flags; int ipvs; } ;
typedef scalar_t__ __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,union nf_inet_addr*) ;
 int FUNC_1 (int,char*,int ) ;
 scalar_t__ FUNC_2 (struct ip_vs_conn*) ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_3 (struct ip_vs_conn*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,unsigned int) ;
 int FUNC_5 (struct sk_buff*,struct ip_vs_protocol*,struct ip_vs_conn*,int) ;
 int FUNC_6 (struct sk_buff*,struct ip_vs_protocol*,struct ip_vs_conn*,int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct ip_vs_conn*,struct sk_buff*) ;
 scalar_t__ FUNC_9 (int ,int,struct sk_buff*,unsigned int) ;
 int FUNC_10 (struct sk_buff*,struct ip_vs_conn*,int ) ;
 int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static int FUNC_13(int VAR_8, struct sk_buff *VAR_9,
    union nf_inet_addr *VAR_10,
    __u8 VAR_11, struct ip_vs_conn *VAR_12,
    struct ip_vs_protocol *VAR_13,
    unsigned int VAR_14, unsigned int VAR_15,
    unsigned int VAR_16)
{
 unsigned int VAR_17 = VAR_7;

 if (FUNC_2(VAR_12) != VAR_4)
  goto ignore_cp;


 if (!FUNC_11(VAR_9) && FUNC_4(VAR_9, VAR_15)) {

  FUNC_1(1, "Forward ICMP: failed checksum from %s!\n",
         FUNC_0(VAR_8, VAR_10));
  goto out;
 }

 if (VAR_2 == VAR_11 || VAR_3 == VAR_11 ||
     VAR_1 == VAR_11)
  VAR_14 += 2 * sizeof(__u16);
 if (FUNC_12(VAR_9, VAR_14))
  goto out;






  FUNC_5(VAR_9, VAR_13, VAR_12, 1);

 if (FUNC_9(VAR_12->ipvs, VAR_8, VAR_9, VAR_16))
  goto out;


 FUNC_8(VAR_12, VAR_9);

 VAR_9->ipvs_property = 1;
 if (!(VAR_12->flags & VAR_5))
  FUNC_7(VAR_9);
 else
  FUNC_10(VAR_9, VAR_12, 0);

ignore_cp:
 VAR_17 = VAR_6;

out:
 FUNC_3(VAR_12);

 return VAR_17;
}
