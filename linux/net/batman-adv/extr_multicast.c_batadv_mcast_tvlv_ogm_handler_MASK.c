
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int mcast_flags; int mcast_handler_lock; int capa_initialized; int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,void*,int ) ;
 int FUNC_1 (struct batadv_priv*,struct batadv_orig_node*,int) ;
 int FUNC_2 (struct batadv_priv*,struct batadv_orig_node*,int) ;
 int FUNC_3 (struct batadv_priv*,struct batadv_orig_node*,int) ;
 int FUNC_4 (struct batadv_priv*,struct batadv_orig_node*,int) ;
 int FUNC_5 (struct batadv_priv*,struct batadv_orig_node*,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct batadv_priv *VAR_2,
       struct batadv_orig_node *VAR_3,
       u8 VAR_4,
       void *VAR_5,
       u16 VAR_6)
{
 bool VAR_7 = !(VAR_4 & VAR_1);
 u8 VAR_8;

 VAR_8 = FUNC_0(VAR_7,
        VAR_5, VAR_6);

 FUNC_8(&VAR_3->mcast_handler_lock);

 if (VAR_7 &&
     !FUNC_10(VAR_0, &VAR_3->capabilities)) {
  FUNC_7(VAR_0, &VAR_3->capabilities);
 } else if (!VAR_7 &&
     FUNC_10(VAR_0, &VAR_3->capabilities)) {
  FUNC_6(VAR_0, &VAR_3->capabilities);
 }

 FUNC_7(VAR_0, &VAR_3->capa_initialized);

 FUNC_5(VAR_2, VAR_3, VAR_8);
 FUNC_1(VAR_2, VAR_3, VAR_8);
 FUNC_2(VAR_2, VAR_3, VAR_8);
 FUNC_3(VAR_2, VAR_3, VAR_8);
 FUNC_4(VAR_2, VAR_3, VAR_8);

 VAR_3->mcast_flags = VAR_8;
 FUNC_9(&VAR_3->mcast_handler_lock);
}
