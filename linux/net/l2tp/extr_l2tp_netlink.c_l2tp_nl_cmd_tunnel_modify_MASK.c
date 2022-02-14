
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct l2tp_tunnel {void* debug; } ;
struct genl_info {scalar_t__* attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 struct net* FUNC_0 (struct genl_info*) ;
 int VAR_5 ;
 int FUNC_1 (struct l2tp_tunnel*) ;
 struct l2tp_tunnel* FUNC_2 (struct net*,void*) ;
 int FUNC_3 (int *,struct genl_info*,struct l2tp_tunnel*,int ) ;
 void* FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_6, struct genl_info *VAR_7)
{
 struct l2tp_tunnel *VAR_8;
 u32 VAR_9;
 int VAR_10 = 0;
 struct net *VAR_11 = FUNC_0(VAR_7);

 if (!VAR_7->attrs[VAR_2]) {
  VAR_10 = -VAR_0;
  goto out;
 }
 VAR_9 = FUNC_4(VAR_7->attrs[VAR_2]);

 VAR_8 = FUNC_2(VAR_11, VAR_9);
 if (!VAR_8) {
  VAR_10 = -VAR_1;
  goto out;
 }

 if (VAR_7->attrs[VAR_3])
  VAR_8->debug = FUNC_4(VAR_7->attrs[VAR_3]);

 VAR_10 = FUNC_3(&VAR_5, VAR_7,
     VAR_8, VAR_4);

 FUNC_1(VAR_8);

out:
 return VAR_10;
}
