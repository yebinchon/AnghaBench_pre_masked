
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ieee80211_if_mesh {scalar_t__ mesh_id_len; int mesh_id; } ;
struct TYPE_2__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int * FUNC_1 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

int FUNC_3(struct ieee80211_sub_if_data *VAR_2, struct sk_buff *VAR_3)
{
 struct ieee80211_if_mesh *VAR_4 = &VAR_2->u.mesh;
 u8 *VAR_5;

 if (FUNC_2(VAR_3) < 2 + VAR_4->mesh_id_len)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_3, 2 + VAR_4->mesh_id_len);
 *VAR_5++ = VAR_1;
 *VAR_5++ = VAR_4->mesh_id_len;
 if (VAR_4->mesh_id_len)
  FUNC_0(VAR_5, VAR_4->mesh_id, VAR_4->mesh_id_len);

 return 0;
}
