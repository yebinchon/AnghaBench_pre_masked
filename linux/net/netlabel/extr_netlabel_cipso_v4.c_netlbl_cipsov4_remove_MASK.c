
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct netlbl_domhsh_walk_arg {int doi; struct netlbl_audit* audit_info; } ;
struct netlbl_audit {int dummy; } ;
struct genl_info {int * attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct netlbl_audit*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int *,int ,struct netlbl_domhsh_walk_arg*) ;
 int FUNC_3 (struct sk_buff*,struct netlbl_audit*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 int VAR_7 = -VAR_0;
 struct netlbl_domhsh_walk_arg VAR_8;
 struct netlbl_audit VAR_9;
 u32 VAR_10 = 0;
 u32 VAR_11 = 0;

 if (!VAR_6->attrs[VAR_2])
  return -VAR_0;

 FUNC_3(VAR_5, &VAR_9);
 VAR_8.doi = FUNC_4(VAR_6->attrs[VAR_2]);
 VAR_8.audit_info = &VAR_9;
 VAR_7 = FUNC_2(&VAR_10, &VAR_11,
         VAR_4, &VAR_8);
 if (VAR_7 == 0 || VAR_7 == -VAR_1) {
  VAR_7 = FUNC_1(VAR_8.doi, &VAR_9);
  if (VAR_7 == 0)
   FUNC_0(&VAR_3);
 }

 return VAR_7;
}
