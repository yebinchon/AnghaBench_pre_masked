
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
union perf_event {TYPE_1__ header; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ,int,int ,union perf_event*) ;
 int VAR_1 ;

void FUNC_1(union perf_event *VAR_2)
{
 unsigned char *VAR_3 = (void *)VAR_2;

 if (!VAR_0)
  return;

 FUNC_0(VAR_3, VAR_2->header.size, 16,
       VAR_1, VAR_2);
}
