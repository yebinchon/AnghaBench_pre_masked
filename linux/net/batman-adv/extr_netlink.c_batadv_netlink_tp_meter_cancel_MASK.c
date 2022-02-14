
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct genl_info {int * attrs; struct batadv_priv** user_ptr; } ;
struct batadv_priv {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct batadv_priv*,int *,int ) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct sk_buff *VAR_3, struct genl_info *VAR_4)
{
 struct batadv_priv *VAR_5 = VAR_4->user_ptr[0];
 u8 *VAR_6;
 int VAR_7 = 0;

 if (!VAR_4->attrs[VAR_0])
  return -VAR_2;

 VAR_6 = FUNC_1(VAR_4->attrs[VAR_0]);

 FUNC_0(VAR_5, VAR_6, VAR_1);

 return VAR_7;
}
