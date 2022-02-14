
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int in_iowait; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

int FUNC_1(void)
{
 int VAR_1 = VAR_0->in_iowait;

 VAR_0->in_iowait = 1;
 FUNC_0(VAR_0);

 return VAR_1;
}
