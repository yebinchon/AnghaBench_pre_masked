
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum side { ____Placeholder_side } side ;
typedef enum fill { ____Placeholder_fill } fill ;
typedef enum anchor { ____Placeholder_anchor } anchor ;
struct TYPE_4__ {TYPE_1__* layout; } ;
struct TYPE_3__ {int side; int fill; int anchor; int padx; int pady; } ;


 TYPE_2__ VAR_0 ;

void FUNC_0(enum side VAR_1, enum fill VAR_2, enum anchor VAR_3, int VAR_4, int VAR_5)
{
 VAR_0.layout->side = VAR_1;
 VAR_0.layout->fill = VAR_2;
 VAR_0.layout->anchor = VAR_3;
 VAR_0.layout->padx = VAR_4;
 VAR_0.layout->pady = VAR_5;
}
