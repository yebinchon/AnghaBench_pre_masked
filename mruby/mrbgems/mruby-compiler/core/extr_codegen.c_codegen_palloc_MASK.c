
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mpool; } ;
typedef TYPE_1__ codegen_scope ;


 int FUNC_0 (TYPE_1__*,char*) ;
 void* FUNC_1 (int ,size_t) ;

__attribute__((used)) static void*
FUNC_2(codegen_scope *VAR_0, size_t VAR_1)
{
  void *VAR_2 = FUNC_1(VAR_0->mpool, VAR_1);

  if (!VAR_2) FUNC_0(VAR_0, "pool memory allocation");
  return VAR_2;
}
