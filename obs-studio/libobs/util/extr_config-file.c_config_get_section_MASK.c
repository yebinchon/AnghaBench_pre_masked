
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct config_section {char* name; } ;
struct TYPE_5__ {size_t num; } ;
struct TYPE_4__ {int mutex; TYPE_2__ sections; } ;
typedef TYPE_1__ config_t ;


 struct config_section* FUNC_0 (int,TYPE_2__*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

const char *FUNC_3(config_t *VAR_0, size_t VAR_1)
{
 struct config_section *VAR_2;
 const char *VAR_3 = ((void*)0);

 FUNC_1(&VAR_0->mutex);

 if (VAR_1 >= VAR_0->sections.num)
  goto unlock;

 VAR_2 = FUNC_0(sizeof(struct config_section), &VAR_0->sections,
         VAR_1);
 VAR_3 = VAR_2->name;

unlock:
 FUNC_2(&VAR_0->mutex);
 return VAR_3;
}
