
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct dev_pagemap {int dummy; } ;


 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int ,struct dev_pagemap*) ;
 int VAR_0 ;
 void* FUNC_4 (struct dev_pagemap*,int ) ;

void *FUNC_5(struct device *VAR_1, struct dev_pagemap *VAR_2)
{
 int VAR_3;
 void *VAR_4;

 VAR_4 = FUNC_4(VAR_2, FUNC_2(VAR_1));
 if (FUNC_1(VAR_4))
  return VAR_4;

 VAR_3 = FUNC_3(VAR_1, VAR_0,
   VAR_2);
 if (VAR_3)
  return FUNC_0(VAR_3);
 return VAR_4;
}
