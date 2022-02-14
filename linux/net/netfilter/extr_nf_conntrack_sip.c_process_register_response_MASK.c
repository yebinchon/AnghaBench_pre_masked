
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nf_ct_sip_master {unsigned int register_cseq; } ;
struct nf_conn {TYPE_3__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
typedef int __be16 ;
struct TYPE_4__ {int u3; } ;
struct TYPE_5__ {TYPE_1__ dst; } ;
struct TYPE_6__ {TYPE_2__ tuple; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct nf_conn*,char const*,int ,unsigned int,int ,unsigned int*,unsigned int*) ;
 int FUNC_2 (struct nf_conn*,char const*,unsigned int*,unsigned int,int ,int*,unsigned int*,unsigned int*,union nf_inet_addr*,int *) ;
 int FUNC_3 (struct nf_conn*,char const*,unsigned int,unsigned int,char*,int *,int *,unsigned int*) ;
 scalar_t__ FUNC_4 (struct nf_conn*,char const*,unsigned int,unsigned int,int *) ;
 int FUNC_5 (struct nf_conn*,int) ;
 struct nf_conn* FUNC_6 (struct sk_buff*,int*) ;
 int FUNC_7 (struct sk_buff*,struct nf_conn*,char*) ;
 int FUNC_8 (int *,union nf_inet_addr*) ;
 struct nf_ct_sip_master* FUNC_9 (struct nf_conn*) ;
 scalar_t__ FUNC_10 (struct nf_conn*,union nf_inet_addr*,int ,int ,unsigned int) ;
 unsigned int FUNC_11 (char const*,int *,int) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_4, unsigned int VAR_5,
         unsigned int VAR_6,
         const char **VAR_7, unsigned int *VAR_8,
         unsigned int VAR_9, unsigned int VAR_10)
{
 enum ip_conntrack_info VAR_11;
 struct nf_conn *VAR_12 = FUNC_6(VAR_4, &VAR_11);
 struct nf_ct_sip_master *VAR_13 = FUNC_9(VAR_12);
 enum ip_conntrack_dir VAR_14 = FUNC_0(VAR_11);
 union nf_inet_addr VAR_15;
 __be16 VAR_16;
 u8 VAR_17;
 unsigned int VAR_18, VAR_19, VAR_20 = 0;
 unsigned int VAR_21 = 0;
 int VAR_22 = 0, VAR_23;
 if (VAR_13->register_cseq != VAR_9)
  return VAR_0;

 if (VAR_10 >= 100 && VAR_10 <= 199)
  return VAR_0;
 if (VAR_10 < 200 || VAR_10 > 299)
  goto flush;

 if (FUNC_1(VAR_12, *VAR_7, 0, *VAR_8, VAR_3,
         &VAR_18, &VAR_19) > 0)
  VAR_21 = FUNC_11(*VAR_7 + VAR_18, ((void*)0), 10);

 while (1) {
  unsigned int VAR_24 = VAR_21;

  VAR_23 = FUNC_2(VAR_12, *VAR_7, &VAR_20, *VAR_8,
           VAR_2, &VAR_22,
           &VAR_18, &VAR_19,
           &VAR_15, &VAR_16);
  if (VAR_23 < 0) {
   FUNC_7(VAR_4, VAR_12, "cannot parse contact");
   return VAR_1;
  } else if (VAR_23 == 0)
   break;


  if (!FUNC_8(&VAR_12->tuplehash[VAR_14].tuple.dst.u3, &VAR_15))
   continue;

  if (FUNC_4(VAR_12, *VAR_7, VAR_18 + VAR_19,
        *VAR_8, &VAR_17) == 0)
   continue;

  VAR_23 = FUNC_3(VAR_12, *VAR_7,
         VAR_18 + VAR_19,
         *VAR_8, "expires=",
         ((void*)0), ((void*)0), &VAR_24);
  if (VAR_23 < 0) {
   FUNC_7(VAR_4, VAR_12, "cannot parse expires");
   return VAR_1;
  }
  if (VAR_24 == 0)
   break;
  if (FUNC_10(VAR_12, &VAR_15, VAR_17, VAR_16,
         VAR_24))
   return VAR_0;
 }

flush:
 FUNC_5(VAR_12, 0);
 return VAR_0;
}
