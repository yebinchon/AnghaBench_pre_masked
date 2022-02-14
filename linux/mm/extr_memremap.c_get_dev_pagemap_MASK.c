
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ start; scalar_t__ end; } ;
struct dev_pagemap {int ref; TYPE_1__ res; } ;
typedef scalar_t__ resource_size_t ;


 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct dev_pagemap*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct dev_pagemap* FUNC_6 (int *,int ) ;

struct dev_pagemap *FUNC_7(unsigned long VAR_1,
  struct dev_pagemap *VAR_2)
{
 resource_size_t VAR_3 = FUNC_0(VAR_1);




 if (VAR_2) {
  if (VAR_3 >= VAR_2->res.start && VAR_3 <= VAR_2->res.end)
   return VAR_2;
  FUNC_3(VAR_2);
 }


 FUNC_4();
 VAR_2 = FUNC_6(&VAR_0, FUNC_1(VAR_3));
 if (VAR_2 && !FUNC_2(VAR_2->ref))
  VAR_2 = ((void*)0);
 FUNC_5();

 return VAR_2;
}
