
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_psock_link {int link_raw; TYPE_1__* map; } ;
struct TYPE_3__ {int map_type; } ;




 void FUNC_0 (TYPE_1__*,struct sock*,int ) ;
 void FUNC_1 (TYPE_1__*,struct sock*,int ) ;

void FUNC_2(struct sock *VAR_0, struct sk_psock_link *VAR_1)
{
 switch (VAR_1->map->map_type) {
 case 128:
  return FUNC_1(VAR_1->map, VAR_0,
       VAR_1->link_raw);
 case 129:
  return FUNC_0(VAR_1->map, VAR_0,
        VAR_1->link_raw);
 default:
  break;
 }
}
