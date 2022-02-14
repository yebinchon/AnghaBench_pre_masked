
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expander_data {size_t env_in_len; int env_in; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct expander_data *VAR_0, size_t VAR_1)
{
 VAR_0->env_in_len = VAR_1;
 VAR_0->env_in = FUNC_0(VAR_0->env_in, VAR_0->env_in_len * sizeof(float));
}
