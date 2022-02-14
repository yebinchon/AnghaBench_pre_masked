
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ cipher_type; scalar_t__ version; } ;
struct tls_context {TYPE_1__ prot_info; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_4__ {int icsk_ulp_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (struct sock const*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,int ,scalar_t__) ;
 struct tls_context* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (struct tls_context*,int) ;

__attribute__((used)) static int FUNC_9(const struct sock *VAR_6, struct sk_buff *VAR_7)
{
 u16 VAR_8, VAR_9;
 struct tls_context *VAR_10;
 struct nlattr *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_3(VAR_7, VAR_1);
 if (!VAR_11)
  return -VAR_0;

 FUNC_6();
 VAR_10 = FUNC_5(FUNC_0(VAR_6)->icsk_ulp_data);
 if (!VAR_10) {
  VAR_12 = 0;
  goto nla_failure;
 }
 VAR_8 = VAR_10->prot_info.version;
 if (VAR_8) {
  VAR_12 = FUNC_4(VAR_7, VAR_5, VAR_8);
  if (VAR_12)
   goto nla_failure;
 }
 VAR_9 = VAR_10->prot_info.cipher_type;
 if (VAR_9) {
  VAR_12 = FUNC_4(VAR_7, VAR_2, VAR_9);
  if (VAR_12)
   goto nla_failure;
 }
 VAR_12 = FUNC_4(VAR_7, VAR_4, FUNC_8(VAR_10, 1));
 if (VAR_12)
  goto nla_failure;

 VAR_12 = FUNC_4(VAR_7, VAR_3, FUNC_8(VAR_10, 0));
 if (VAR_12)
  goto nla_failure;

 FUNC_7();
 FUNC_2(VAR_7, VAR_11);
 return 0;

nla_failure:
 FUNC_7();
 FUNC_1(VAR_7, VAR_11);
 return VAR_12;
}
