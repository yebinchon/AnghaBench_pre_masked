
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int ogm_append_cnt; int vn; int local_changes; int commit_lock; } ;
struct batadv_priv {TYPE_1__ tt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct batadv_priv*,char*,int ) ;
 int FUNC_5 (struct batadv_priv*) ;
 int FUNC_6 (struct batadv_priv*,int ,int,int) ;
 int FUNC_7 (struct batadv_priv*) ;
 int FUNC_8 (struct batadv_priv*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct batadv_priv *VAR_3)
{
 FUNC_9(&VAR_3->tt.commit_lock);

 if (FUNC_1(&VAR_3->tt.local_changes) < 1) {
  if (!FUNC_3(&VAR_3->tt.ogm_append_cnt))
   FUNC_8(VAR_3);
  return;
 }

 FUNC_6(VAR_3, VAR_1, 0, 1);

 FUNC_5(VAR_3);
 FUNC_7(VAR_3);


 FUNC_0(&VAR_3->tt.vn);
 FUNC_4(VAR_0, VAR_3,
     "Local changes committed, updating to ttvn %u\n",
     (u8)FUNC_1(&VAR_3->tt.vn));


 FUNC_2(&VAR_3->tt.ogm_append_cnt, VAR_2);
 FUNC_8(VAR_3);
}
