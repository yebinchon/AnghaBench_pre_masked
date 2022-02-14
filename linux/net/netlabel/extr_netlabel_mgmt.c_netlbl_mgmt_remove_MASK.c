
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netlbl_audit {int dummy; } ;
struct genl_info {int * attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*,int ,struct netlbl_audit*) ;
 int FUNC_1 (struct sk_buff*,struct netlbl_audit*) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_3, struct genl_info *VAR_4)
{
 char *VAR_5;
 struct netlbl_audit VAR_6;

 if (!VAR_4->attrs[VAR_2])
  return -VAR_1;

 FUNC_1(VAR_3, &VAR_6);

 VAR_5 = FUNC_2(VAR_4->attrs[VAR_2]);
 return FUNC_0(VAR_5, VAR_0, &VAR_6);
}
