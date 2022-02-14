
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exclude_kernel; int exclude_hv; int exclude_idle; } ;
struct event {TYPE_1__ attr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct event*) ;
 int FUNC_3 (struct event*,int,char*) ;
 int FUNC_4 (struct event*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct event *VAR_0, int VAR_1)
{
 FUNC_3(VAR_0, 0x400FA, "PM_RUN_INST_CMPL");

 VAR_0->attr.exclude_kernel = 1;
 VAR_0->attr.exclude_hv = 1;
 VAR_0->attr.exclude_idle = 1;

 FUNC_1(FUNC_5(1));
 FUNC_0(FUNC_4(VAR_0, VAR_1));
 FUNC_0(FUNC_2(VAR_0));

 return 0;
}
