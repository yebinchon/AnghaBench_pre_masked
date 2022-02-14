
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int size; } ;
union perf_event {TYPE_1__ header; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(union perf_event *VAR_1, unsigned int VAR_2)
{





 if (VAR_2 + sizeof(VAR_1->header) > VAR_1->header.size)
  return -VAR_0;

 return 0;
}
