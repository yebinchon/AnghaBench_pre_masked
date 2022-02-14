
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct batadv_tvlv_mcast_data {int reserved; int flags; } ;
struct batadv_mcast_mla_flags {int tvlv_flags; } ;
struct TYPE_2__ {struct batadv_mcast_mla_flags mla_flags; } ;
struct batadv_priv {TYPE_1__ mcast; } ;
typedef int mcast_data ;


 int VAR_0 ;
 int FUNC_0 (struct batadv_priv*,struct batadv_mcast_mla_flags*) ;
 int FUNC_1 (struct batadv_priv*,int ) ;
 int FUNC_2 (struct batadv_priv*,int ,int,struct batadv_tvlv_mcast_data*,int) ;
 int FUNC_3 (struct batadv_mcast_mla_flags*,struct batadv_mcast_mla_flags*,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct batadv_priv *VAR_1,
         struct batadv_mcast_mla_flags *VAR_2)
{
 struct batadv_tvlv_mcast_data VAR_3;

 if (!FUNC_3(VAR_2, &VAR_1->mcast.mla_flags, sizeof(*VAR_2)))
  return;

 FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_1, VAR_2->tvlv_flags);

 VAR_3.flags = VAR_2->tvlv_flags;
 FUNC_4(VAR_3.reserved, 0, sizeof(VAR_3.reserved));

 FUNC_2(VAR_1, VAR_0, 2,
           &VAR_3, sizeof(VAR_3));

 VAR_1->mcast.mla_flags = *VAR_2;
}
