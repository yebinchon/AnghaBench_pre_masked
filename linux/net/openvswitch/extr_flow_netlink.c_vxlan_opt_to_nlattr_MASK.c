
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_metadata {int gbp; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_3,
          const void *VAR_4, int VAR_5)
{
 const struct vxlan_metadata *VAR_6 = VAR_4;
 struct nlattr *VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 if (FUNC_2(VAR_3, VAR_2, VAR_6->gbp) < 0)
  return -VAR_0;

 FUNC_0(VAR_3, VAR_7);
 return 0;
}
