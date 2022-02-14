
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct flow_keys {int dummy; } ;
struct TYPE_3__ {int all; } ;
struct TYPE_4__ {TYPE_1__ u; } ;


 int FUNC_0 (struct sk_buff const*,int ) ;
 int FUNC_1 (struct sk_buff const*,struct flow_keys const*) ;
 int FUNC_2 (int ) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static u32 FUNC_3(const struct sk_buff *VAR_1,
       const struct flow_keys *VAR_2)
{
 return FUNC_2(FUNC_0(VAR_1, VAR_0.u.all));
fallback:
 return FUNC_1(VAR_1, VAR_2);
}
