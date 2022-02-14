
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_head {int tci; int tpid; } ;
struct sk_buff {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_3, const struct vlan_head *VAR_4,
       bool VAR_5)
{
 __be16 VAR_6 = !VAR_5 ? VAR_4->tpid : FUNC_0(0xffff);

 if (FUNC_1(VAR_3, VAR_1, VAR_6) ||
     FUNC_1(VAR_3, VAR_2, VAR_4->tci))
  return -VAR_0;
 return 0;
}
