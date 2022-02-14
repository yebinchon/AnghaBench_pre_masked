
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kparam_array {unsigned int* num; unsigned int max; unsigned int elemsize; scalar_t__ elem; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* free ) (scalar_t__) ;} ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 unsigned int VAR_1;
 const struct kparam_array *VAR_2 = VAR_0;

 if (VAR_2->ops->free)
  for (VAR_1 = 0; VAR_1 < (VAR_2->num ? *VAR_2->num : VAR_2->max); VAR_1++)
   VAR_2->ops->free(VAR_2->elem + VAR_2->elemsize * VAR_1);
}
