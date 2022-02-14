
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_key_range {int end; int start; } ;
struct sw_flow_key {int dummy; } ;
struct sw_flow {int key; } ;


 int FUNC_0 (int *,struct sw_flow_key const*,int ,int ) ;

__attribute__((used)) static bool FUNC_1(const struct sw_flow *VAR_0,
    const struct sw_flow_key *VAR_1,
    const struct sw_flow_key_range *VAR_2)
{
 return FUNC_0(&VAR_0->key, VAR_1, VAR_2->start, VAR_2->end);
}
