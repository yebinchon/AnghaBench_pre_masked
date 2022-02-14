
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num; } ;
struct obs_context_data {TYPE_1__ hotkeys; } ;
typedef int obs_data_t ;


 int FUNC_0 (struct obs_context_data*,int ,int *) ;
 int VAR_0 ;
 int * FUNC_1 () ;

__attribute__((used)) static inline obs_data_t *FUNC_2(struct obs_context_data *VAR_1)
{
 if (!VAR_1->hotkeys.num)
  return ((void*)0);

 obs_data_t *VAR_2 = FUNC_1();
 FUNC_0(VAR_1, VAR_0, VAR_2);
 return VAR_2;
}
