
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct nf_conn_counter {int bytes; int packets; } ;
struct nf_conn_acct {struct nf_conn_counter* counter; } ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
typedef enum ctattr_type { ____Placeholder_ctattr_type } ctattr_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct sk_buff *VAR_6, struct nf_conn_acct *VAR_7,
       enum ip_conntrack_dir VAR_8, int VAR_9)
{
 enum ctattr_type VAR_10 = VAR_8 ? VAR_4: VAR_1;
 struct nf_conn_counter *VAR_11 = VAR_7->counter;
 struct nlattr *VAR_12;
 u64 VAR_13, VAR_14;

 if (VAR_9 == VAR_5) {
  VAR_13 = FUNC_1(&VAR_11[VAR_8].packets, 0);
  VAR_14 = FUNC_1(&VAR_11[VAR_8].bytes, 0);
 } else {
  VAR_13 = FUNC_0(&VAR_11[VAR_8].packets);
  VAR_14 = FUNC_0(&VAR_11[VAR_8].bytes);
 }

 VAR_12 = FUNC_4(VAR_6, VAR_10);
 if (!VAR_12)
  goto nla_put_failure;

 if (FUNC_5(VAR_6, VAR_2, FUNC_2(VAR_13),
    VAR_3) ||
     FUNC_5(VAR_6, VAR_0, FUNC_2(VAR_14),
    VAR_3))
  goto nla_put_failure;

 FUNC_3(VAR_6, VAR_12);

 return 0;

nla_put_failure:
 return -1;
}
