
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_context_data {int rename_cache_mutex; int private; scalar_t__ name; int rename_cache; } ;


 int FUNC_0 (int ,scalar_t__*) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct obs_context_data *VAR_0,
         const char *VAR_1)
{
 FUNC_2(&VAR_0->rename_cache_mutex);

 if (VAR_0->name)
  FUNC_0(VAR_0->rename_cache, &VAR_0->name);
 VAR_0->name = FUNC_1(VAR_1, VAR_0->private);

 FUNC_3(&VAR_0->rename_cache_mutex);
}
