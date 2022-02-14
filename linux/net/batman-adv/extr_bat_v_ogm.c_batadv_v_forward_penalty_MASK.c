
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct batadv_priv {int hop_penalty; } ;
struct TYPE_2__ {int flags; } ;
struct batadv_hard_iface {TYPE_1__ bat_v; } ;


 int VAR_0 ;
 struct batadv_hard_iface* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static u32 FUNC_1(struct batadv_priv *VAR_3,
        struct batadv_hard_iface *VAR_4,
        struct batadv_hard_iface *VAR_5,
        u32 VAR_6)
{
 int VAR_7 = FUNC_0(&VAR_3->hop_penalty);
 int VAR_8 = VAR_2;


 if (VAR_5 == VAR_1)
  return VAR_6;





 if (VAR_6 > 10 &&
     VAR_4 == VAR_5 &&
     !(VAR_4->bat_v.flags & VAR_0))
  return VAR_6 / 2;


 return VAR_6 * (VAR_8 - VAR_7) / VAR_8;
}
