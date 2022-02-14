
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nf_nat_sip_hooks {int (* expect ) (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*,struct nf_conntrack_expect*,unsigned int,unsigned int) ;} ;
struct nf_ct_sip_master {unsigned int register_cseq; } ;
struct TYPE_9__ {int expires; } ;
struct nf_conntrack_expect {int flags; int helper; TYPE_4__ timeout; } ;
struct nf_conn {int status; TYPE_3__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
typedef int __be16 ;
struct TYPE_10__ {int helper; } ;
struct TYPE_6__ {union nf_inet_addr u3; } ;
struct TYPE_7__ {TYPE_1__ src; } ;
struct TYPE_8__ {TYPE_2__ tuple; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct nf_conn*,char const*,int ,unsigned int,int ,unsigned int*,unsigned int*) ;
 int FUNC_2 (struct nf_conn*,char const*,int *,unsigned int,int ,int *,unsigned int*,unsigned int*,union nf_inet_addr*,int *) ;
 scalar_t__ FUNC_3 (struct nf_conn*,char const*,unsigned int,unsigned int,char*,int *,int *,unsigned int*) ;
 scalar_t__ FUNC_4 (struct nf_conn*,char const*,unsigned int,unsigned int,int *) ;
 struct nf_conntrack_expect* FUNC_5 (struct nf_conn*) ;
 int FUNC_6 (struct nf_conntrack_expect*,int ,int ,union nf_inet_addr*,union nf_inet_addr*,int ,int *,int *) ;
 int FUNC_7 (struct nf_conntrack_expect*) ;
 scalar_t__ FUNC_8 (struct nf_conntrack_expect*,int ) ;
 struct nf_conn* FUNC_9 (struct sk_buff*,int*) ;
 int FUNC_10 (struct sk_buff*,struct nf_conn*,char*) ;
 int FUNC_11 (struct nf_conn*) ;
 int FUNC_12 (union nf_inet_addr*,union nf_inet_addr*) ;
 int VAR_10 ;
 TYPE_5__* FUNC_13 (struct nf_conn*) ;
 struct nf_ct_sip_master* FUNC_14 (struct nf_conn*) ;
 struct nf_nat_sip_hooks* FUNC_15 (int ) ;
 unsigned int FUNC_16 (char const*,int *,int) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_17 (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*,struct nf_conntrack_expect*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_18(struct sk_buff *VAR_13, unsigned int VAR_14,
        unsigned int VAR_15,
        const char **VAR_16, unsigned int *VAR_17,
        unsigned int VAR_18)
{
 enum ip_conntrack_info VAR_19;
 struct nf_conn *VAR_20 = FUNC_9(VAR_13, &VAR_19);
 struct nf_ct_sip_master *VAR_21 = FUNC_14(VAR_20);
 enum ip_conntrack_dir VAR_22 = FUNC_0(VAR_19);
 unsigned int VAR_23, VAR_24;
 struct nf_conntrack_expect *VAR_25;
 union nf_inet_addr *VAR_26, VAR_27;
 const struct nf_nat_sip_hooks *VAR_28;
 __be16 VAR_29;
 u8 VAR_30;
 unsigned int VAR_31 = 0;
 int VAR_32;


 if (VAR_20->status & VAR_1)
  return VAR_3;
 if (FUNC_1(VAR_20, *VAR_16, 0, *VAR_17, VAR_9,
         &VAR_23, &VAR_24) > 0)
  VAR_31 = FUNC_16(*VAR_16 + VAR_23, ((void*)0), 10);

 VAR_32 = FUNC_2(VAR_20, *VAR_16, ((void*)0), *VAR_17,
          VAR_8, ((void*)0),
          &VAR_23, &VAR_24, &VAR_27, &VAR_29);
 if (VAR_32 < 0) {
  FUNC_10(VAR_13, VAR_20, "cannot parse contact");
  return VAR_6;
 } else if (VAR_32 == 0)
  return VAR_3;


 if (!FUNC_12(&VAR_20->tuplehash[VAR_22].tuple.src.u3, &VAR_27))
  return VAR_3;

 if (FUNC_4(VAR_20, *VAR_16, VAR_23 + VAR_24, *VAR_17,
       &VAR_30) == 0)
  return VAR_3;

 if (FUNC_3(VAR_20, *VAR_16,
      VAR_23 + VAR_24, *VAR_17,
      "expires=", ((void*)0), ((void*)0), &VAR_31) < 0) {
  FUNC_10(VAR_13, VAR_20, "cannot parse expires");
  return VAR_6;
 }

 if (VAR_31 == 0) {
  VAR_32 = VAR_3;
  goto store_cseq;
 }

 VAR_25 = FUNC_5(VAR_20);
 if (!VAR_25) {
  FUNC_10(VAR_13, VAR_20, "cannot alloc expectation");
  return VAR_6;
 }

 VAR_26 = ((void*)0);
 if (VAR_11)
  VAR_26 = &VAR_20->tuplehash[!VAR_22].tuple.src.u3;

 FUNC_6(VAR_25, VAR_7, FUNC_11(VAR_20),
     VAR_26, &VAR_27, VAR_30, ((void*)0), &VAR_29);
 VAR_25->timeout.expires = VAR_12 * VAR_0;
 VAR_25->helper = FUNC_13(VAR_20)->helper;
 VAR_25->flags = VAR_5 | VAR_4;

 VAR_28 = FUNC_15(VAR_10);
 if (VAR_28 && VAR_20->status & VAR_2)
  VAR_32 = VAR_28->expect(VAR_13, VAR_14, VAR_15, VAR_16, VAR_17,
        VAR_25, VAR_23, VAR_24);
 else {
  if (FUNC_8(VAR_25, 0) != 0) {
   FUNC_10(VAR_13, VAR_20, "cannot add expectation");
   VAR_32 = VAR_6;
  } else
   VAR_32 = VAR_3;
 }
 FUNC_7(VAR_25);

store_cseq:
 if (VAR_32 == VAR_3)
  VAR_21->register_cseq = VAR_18;
 return VAR_32;
}
