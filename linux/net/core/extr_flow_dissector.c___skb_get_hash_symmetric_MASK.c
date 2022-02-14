
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct flow_keys {int dummy; } ;
typedef int keys ;


 int VAR_0 ;
 int FUNC_0 (struct flow_keys*,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,struct sk_buff const*,int *,struct flow_keys*,int *,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct flow_keys*,int ,int) ;

u32 FUNC_4(const struct sk_buff *VAR_3)
{
 struct flow_keys VAR_4;

 FUNC_1();

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 FUNC_2(((void*)0), VAR_3, &VAR_1,
      &VAR_4, ((void*)0), 0, 0, 0,
      VAR_0);

 return FUNC_0(&VAR_4, &VAR_2);
}
