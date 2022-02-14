
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow {int key; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int,struct sk_buff*) ;

int FUNC_1(const struct sw_flow *VAR_1, struct sk_buff *VAR_2)
{
 return FUNC_0(&VAR_1->key, &VAR_1->key,
    VAR_0, 0, VAR_2);
}
