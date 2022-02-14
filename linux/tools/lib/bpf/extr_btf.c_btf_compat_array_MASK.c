
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btf_type {int dummy; } ;
struct TYPE_2__ {scalar_t__ nelems; } ;


 TYPE_1__* FUNC_0 (struct btf_type*) ;
 int FUNC_1 (struct btf_type*,struct btf_type*) ;

__attribute__((used)) static bool FUNC_2(struct btf_type *VAR_0, struct btf_type *VAR_1)
{
 if (!FUNC_1(VAR_0, VAR_1))
  return 0;

 return FUNC_0(VAR_0)->nelems == FUNC_0(VAR_1)->nelems;
}
