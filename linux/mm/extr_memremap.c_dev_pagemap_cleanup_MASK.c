
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dev_pagemap {int * ref; int internal_ref; int done; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* cleanup ) (struct dev_pagemap*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dev_pagemap*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dev_pagemap *VAR_0)
{
 if (VAR_0->ops && VAR_0->ops->cleanup) {
  VAR_0->ops->cleanup(VAR_0);
 } else {
  FUNC_2(&VAR_0->done);
  FUNC_0(VAR_0->ref);
 }




 if (VAR_0->ref == &VAR_0->internal_ref)
  VAR_0->ref = ((void*)0);
}
