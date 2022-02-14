
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_irect ;
struct TYPE_4__ {TYPE_1__* layout; int * cavity; } ;
struct TYPE_3__ {scalar_t__ pady; scalar_t__ padx; int anchor; int fill; int side; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

void FUNC_0(fz_irect VAR_4)
{
 *(++VAR_3.cavity) = VAR_4;
 ++VAR_3.layout;
 VAR_3.layout->side = VAR_0;
 VAR_3.layout->fill = VAR_1;
 VAR_3.layout->anchor = VAR_2;
 VAR_3.layout->padx = 0;
 VAR_3.layout->pady = 0;
}
