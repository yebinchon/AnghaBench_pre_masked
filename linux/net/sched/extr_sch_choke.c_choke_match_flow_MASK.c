
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ protocol; } ;
struct flow_keys {int dummy; } ;
struct TYPE_2__ {int keys_valid; int keys; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,struct flow_keys*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct sk_buff*,struct flow_keys*,int ) ;

__attribute__((used)) static bool FUNC_4(struct sk_buff *VAR_0,
        struct sk_buff *VAR_1)
{
 struct flow_keys VAR_2;

 if (VAR_0->protocol != VAR_1->protocol)
  return 0;

 if (!FUNC_0(VAR_0)->keys_valid) {
  FUNC_0(VAR_0)->keys_valid = 1;
  FUNC_3(VAR_0, &VAR_2, 0);
  FUNC_1(&FUNC_0(VAR_0)->keys, &VAR_2);
 }

 if (!FUNC_0(VAR_1)->keys_valid) {
  FUNC_0(VAR_1)->keys_valid = 1;
  FUNC_3(VAR_1, &VAR_2, 0);
  FUNC_1(&FUNC_0(VAR_1)->keys, &VAR_2);
 }

 return !FUNC_2(&FUNC_0(VAR_0)->keys,
         &FUNC_0(VAR_1)->keys,
         sizeof(FUNC_0(VAR_0)->keys));
}
