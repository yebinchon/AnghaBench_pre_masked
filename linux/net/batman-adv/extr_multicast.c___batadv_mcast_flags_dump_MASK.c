
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int len; } ;
struct netlink_callback {int dummy; } ;
struct batadv_priv {struct batadv_hashtable* orig_hash; } ;
struct batadv_hashtable {long size; } ;


 scalar_t__ FUNC_0 (struct sk_buff*,int ,struct netlink_callback*,struct batadv_hashtable*,long,long*) ;

__attribute__((used)) static int
FUNC_1(struct sk_buff *VAR_0, u32 VAR_1,
     struct netlink_callback *VAR_2,
     struct batadv_priv *VAR_3, long *VAR_4, long *VAR_5)
{
 struct batadv_hashtable *VAR_6 = VAR_3->orig_hash;
 long VAR_7 = *VAR_4;
 long VAR_8 = *VAR_5;

 while (VAR_7 < VAR_6->size) {
  if (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_6,
         VAR_7, &VAR_8))
   break;

  VAR_7++;
  VAR_8 = 0;
 }

 *VAR_4 = VAR_7;
 *VAR_5 = VAR_8;

 return VAR_0->len;
}
