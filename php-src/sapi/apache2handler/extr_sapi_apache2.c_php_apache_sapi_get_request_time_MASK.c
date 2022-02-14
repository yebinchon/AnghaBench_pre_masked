
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* r; } ;
typedef TYPE_2__ php_struct ;
struct TYPE_4__ {int request_time; } ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static double FUNC_2(void)
{
 php_struct *VAR_1 = FUNC_0(VAR_0);
 return ((double) FUNC_1(VAR_1->r->request_time)) / 1000.0;
}
