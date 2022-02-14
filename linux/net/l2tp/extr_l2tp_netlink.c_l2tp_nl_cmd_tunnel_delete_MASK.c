
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct l2tp_tunnel {int dummy; } ;
struct genl_info {int * attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct net* FUNC_0 (struct genl_info*) ;
 int VAR_4 ;
 int FUNC_1 (struct l2tp_tunnel*) ;
 int FUNC_2 (struct l2tp_tunnel*) ;
 struct l2tp_tunnel* FUNC_3 (struct net*,int ) ;
 int FUNC_4 (int *,struct genl_info*,struct l2tp_tunnel*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 struct l2tp_tunnel *VAR_7;
 u32 VAR_8;
 int VAR_9 = 0;
 struct net *VAR_10 = FUNC_0(VAR_6);

 if (!VAR_6->attrs[VAR_2]) {
  VAR_9 = -VAR_0;
  goto out;
 }
 VAR_8 = FUNC_5(VAR_6->attrs[VAR_2]);

 VAR_7 = FUNC_3(VAR_10, VAR_8);
 if (!VAR_7) {
  VAR_9 = -VAR_1;
  goto out;
 }

 FUNC_4(&VAR_4, VAR_6,
      VAR_7, VAR_3);

 FUNC_2(VAR_7);

 FUNC_1(VAR_7);

out:
 return VAR_9;
}
