
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netlbl_audit {int dummy; } ;
struct genl_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct netlbl_audit*) ;
 int FUNC_1 (struct sk_buff*,struct netlbl_audit*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1, struct genl_info *VAR_2)
{
 struct netlbl_audit VAR_3;

 FUNC_1(VAR_1, &VAR_3);

 return FUNC_0(VAR_0, &VAR_3);
}
