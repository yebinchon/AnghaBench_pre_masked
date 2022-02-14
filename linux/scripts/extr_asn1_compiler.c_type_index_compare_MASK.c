
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct type {TYPE_1__* name; } ;
struct TYPE_2__ {scalar_t__ size; int content; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct type *const *VAR_2 = VAR_0, *const *VAR_3 = VAR_1;

 if ((*VAR_2)->name->size != (*VAR_3)->name->size)
  return (*VAR_2)->name->size - (*VAR_3)->name->size;
 else
  return FUNC_0((*VAR_2)->name->content, (*VAR_3)->name->content,
         (*VAR_2)->name->size);
}
