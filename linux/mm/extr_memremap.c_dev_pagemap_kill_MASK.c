
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dev_pagemap {int ref; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* kill ) (struct dev_pagemap*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dev_pagemap*) ;

__attribute__((used)) static void FUNC_2(struct dev_pagemap *VAR_0)
{
 if (VAR_0->ops && VAR_0->ops->kill)
  VAR_0->ops->kill(VAR_0);
 else
  FUNC_0(VAR_0->ref);
}
