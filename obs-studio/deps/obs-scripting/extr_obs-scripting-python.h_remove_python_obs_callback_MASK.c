
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct python_obs_callback {int * func; int base; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct python_obs_callback *VAR_0)
{
 FUNC_1(&VAR_0->base);

 FUNC_0(VAR_0->func);
 VAR_0->func = ((void*)0);
}
