
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct batadv_tvlv_gateway_data {void* bandwidth_up; void* bandwidth_down; } ;
struct TYPE_2__ {int bandwidth_up; int bandwidth_down; int mode; } ;
struct batadv_priv {TYPE_1__ gw; } ;
typedef int gw ;





 int VAR_0 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (struct batadv_priv*,int ,int,struct batadv_tvlv_gateway_data*,int) ;
 int FUNC_2 (struct batadv_priv*,int ,int) ;
 void* FUNC_3 (void*) ;

void FUNC_4(struct batadv_priv *VAR_1)
{
 struct batadv_tvlv_gateway_data VAR_2;
 u32 VAR_3, VAR_4;
 char VAR_5;

 VAR_5 = FUNC_0(&VAR_1->gw.mode);

 switch (VAR_5) {
 case 129:
 case 130:
  FUNC_2(VAR_1, VAR_0, 1);
  break;
 case 128:
  VAR_3 = FUNC_0(&VAR_1->gw.bandwidth_down);
  VAR_4 = FUNC_0(&VAR_1->gw.bandwidth_up);
  VAR_2.bandwidth_down = FUNC_3(VAR_3);
  VAR_2.bandwidth_up = FUNC_3(VAR_4);
  FUNC_1(VAR_1, VAR_0, 1,
            &VAR_2, sizeof(VAR_2));
  break;
 }
}
