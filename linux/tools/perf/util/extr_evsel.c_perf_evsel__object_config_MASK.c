
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t size; int (* init ) (struct evsel*) ;void (* fini ) (struct evsel*) ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

int FUNC_0(size_t VAR_2,
         int (*VAR_3)(struct evsel *VAR_4),
         void (*VAR_5)(struct evsel *VAR_6))
{

 if (VAR_2 == 0)
  goto set_methods;

 if (VAR_1.size > VAR_2)
  return -VAR_0;

 VAR_1.size = VAR_2;

set_methods:
 if (VAR_3 != ((void*)0))
  VAR_1.init = VAR_3;

 if (VAR_5 != ((void*)0))
  VAR_1.fini = VAR_5;

 return 0;
}
