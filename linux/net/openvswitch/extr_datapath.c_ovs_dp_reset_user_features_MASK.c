
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct genl_info {int attrs; int userhdr; } ;
struct datapath {scalar_t__ user_features; } ;


 scalar_t__ FUNC_0 (struct datapath*) ;
 int FUNC_1 (scalar_t__,char*) ;
 struct datapath* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_0, struct genl_info *VAR_1)
{
 struct datapath *VAR_2;

 VAR_2 = FUNC_2(FUNC_3(VAR_0->sk), VAR_1->userhdr, VAR_1->attrs);
 if (FUNC_0(VAR_2))
  return;

 FUNC_1(VAR_2->user_features, "Dropping previously announced user features\n");
 VAR_2->user_features = 0;
}
