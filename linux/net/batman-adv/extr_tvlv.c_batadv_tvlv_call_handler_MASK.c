
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct batadv_tvlv_handler {int (* unicast_handler ) (struct batadv_priv*,int *,int *,void*,int ) ;int flags; int (* ogm_handler ) (struct batadv_priv*,struct batadv_orig_node*,int ,void*,int ) ;} ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct batadv_priv*,struct batadv_orig_node*,int ,void*,int ) ;
 int FUNC_1 (struct batadv_priv*,int *,int *,void*,int ) ;

__attribute__((used)) static int FUNC_2(struct batadv_priv *VAR_3,
        struct batadv_tvlv_handler *VAR_4,
        bool VAR_5,
        struct batadv_orig_node *VAR_6,
        u8 *VAR_7, u8 *VAR_8,
        void *VAR_9, u16 VAR_10)
{
 if (!VAR_4)
  return VAR_2;

 if (VAR_5) {
  if (!VAR_4->ogm_handler)
   return VAR_2;

  if (!VAR_6)
   return VAR_2;

  VAR_4->ogm_handler(VAR_3, VAR_6,
       VAR_0,
       VAR_9, VAR_10);
  VAR_4->flags |= VAR_1;
 } else {
  if (!VAR_7)
   return VAR_2;

  if (!VAR_8)
   return VAR_2;

  if (!VAR_4->unicast_handler)
   return VAR_2;

  return VAR_4->unicast_handler(VAR_3, VAR_7,
           VAR_8, VAR_9,
           VAR_10);
 }

 return VAR_2;
}
