
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kparam_array {int* num; int max; int elemsize; TYPE_1__* ops; scalar_t__ elem; } ;
struct kernel_param {int mod; scalar_t__ arg; struct kparam_array* arr; } ;
struct TYPE_2__ {int (* get ) (char*,struct kernel_param*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,struct kernel_param*) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, const struct kernel_param *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 const struct kparam_array *VAR_5 = VAR_1->arr;
 struct kernel_param VAR_6 = *VAR_1;

 for (VAR_2 = VAR_3 = 0; VAR_2 < (VAR_5->num ? *VAR_5->num : VAR_5->max); VAR_2++) {

  if (VAR_2)
   VAR_0[VAR_3 - 1] = ',';
  VAR_6.arg = VAR_5->elem + VAR_5->elemsize * VAR_2;
  FUNC_0(VAR_6.mod);
  VAR_4 = VAR_5->ops->get(VAR_0 + VAR_3, &VAR_6);
  if (VAR_4 < 0)
   return VAR_4;
  VAR_3 += VAR_4;
 }
 VAR_0[VAR_3] = '\0';
 return VAR_3;
}
