
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kparam_array {scalar_t__ num; TYPE_1__* ops; int elemsize; int elem; int max; } ;
struct kernel_param {int level; int name; int mod; struct kparam_array* arr; } ;
struct TYPE_2__ {int set; } ;


 int FUNC_0 (int ,int ,char const*,int,int ,int ,int ,int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, const struct kernel_param *VAR_1)
{
 const struct kparam_array *VAR_2 = VAR_1->arr;
 unsigned int VAR_3;

 return FUNC_0(VAR_1->mod, VAR_1->name, VAR_0, 1, VAR_2->max, VAR_2->elem,
      VAR_2->elemsize, VAR_2->ops->set, VAR_1->level,
      VAR_2->num ?: &VAR_3);
}
