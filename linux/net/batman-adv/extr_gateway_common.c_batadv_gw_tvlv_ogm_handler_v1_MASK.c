
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct batadv_tvlv_gateway_data {scalar_t__ bandwidth_down; scalar_t__ bandwidth_up; } ;
struct TYPE_2__ {int mode; } ;
struct batadv_priv {TYPE_1__ gw; } ;
struct batadv_orig_node {int dummy; } ;
typedef int gateway ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct batadv_priv*,struct batadv_orig_node*) ;
 int FUNC_2 (struct batadv_priv*,struct batadv_orig_node*,struct batadv_tvlv_gateway_data*) ;

__attribute__((used)) static void FUNC_3(struct batadv_priv *VAR_2,
       struct batadv_orig_node *VAR_3,
       u8 VAR_4,
       void *VAR_5, u16 VAR_6)
{
 struct batadv_tvlv_gateway_data VAR_7, *VAR_8;




 if (VAR_4 & VAR_1 ||
     VAR_6 < sizeof(VAR_7)) {
  VAR_7.bandwidth_down = 0;
  VAR_7.bandwidth_up = 0;
 } else {
  VAR_8 = VAR_5;
  VAR_7.bandwidth_down = VAR_8->bandwidth_down;
  VAR_7.bandwidth_up = VAR_8->bandwidth_up;
  if (VAR_7.bandwidth_down == 0 ||
      VAR_7.bandwidth_up == 0) {
   VAR_7.bandwidth_down = 0;
   VAR_7.bandwidth_up = 0;
  }
 }

 FUNC_2(VAR_2, VAR_3, &VAR_7);


 if (VAR_7.bandwidth_down != 0 &&
     FUNC_0(&VAR_2->gw.mode) == VAR_0)
  FUNC_1(VAR_2, VAR_3);
}
