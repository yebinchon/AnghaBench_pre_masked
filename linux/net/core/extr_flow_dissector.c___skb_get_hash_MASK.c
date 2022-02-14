
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct flow_keys {int dummy; } ;


 int FUNC_0 (struct sk_buff*,struct flow_keys*,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct flow_keys*) ;
 int VAR_0 ;

void FUNC_4(struct sk_buff *VAR_1)
{
 struct flow_keys VAR_2;
 u32 VAR_3;

 FUNC_1();

 VAR_3 = FUNC_0(VAR_1, &VAR_2, &VAR_0);

 FUNC_2(VAR_1, VAR_3, FUNC_3(&VAR_2));
}
