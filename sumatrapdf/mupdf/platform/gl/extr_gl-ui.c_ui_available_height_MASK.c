
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* layout; TYPE_1__* cavity; } ;
struct TYPE_5__ {int pady; } ;
struct TYPE_4__ {int y1; int y0; } ;


 TYPE_3__ VAR_0 ;

int FUNC_0(void)
{
 return VAR_0.cavity->y1 - VAR_0.cavity->y0 - VAR_0.layout->pady * 2;
}
