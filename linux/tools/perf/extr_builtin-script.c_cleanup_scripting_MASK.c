
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* stop_script ) () ;} ;


 int FUNC_0 (char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(void)
{
 FUNC_0("\nperf script stopped\n");

 return VAR_0 ? VAR_0->stop_script() : 0;
}
