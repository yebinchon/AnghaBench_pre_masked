
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dev_pagemap {int ref; int done; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* cleanup ) (struct dev_pagemap*) ;int (* kill ) (struct dev_pagemap*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dev_pagemap*) ;
 int FUNC_4 (struct dev_pagemap*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_0)
{
 struct dev_pagemap *VAR_1 = VAR_0;

 FUNC_0(!VAR_1 || !VAR_1->ref);

 if (VAR_1->ops && VAR_1->ops->kill)
  VAR_1->ops->kill(VAR_1);
 else
  FUNC_2(VAR_1->ref);

 if (VAR_1->ops && VAR_1->ops->cleanup) {
  VAR_1->ops->cleanup(VAR_1);
 } else {
  FUNC_5(&VAR_1->done);
  FUNC_1(VAR_1->ref);
 }
}
