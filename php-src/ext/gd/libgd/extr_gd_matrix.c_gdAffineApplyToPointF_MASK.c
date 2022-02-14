
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* gdPointFPtr ;
struct TYPE_4__ {double x; double y; } ;


 int VAR_0 ;

int FUNC_0 (gdPointFPtr VAR_1, const gdPointFPtr VAR_2,
    const double VAR_3[6])
{
 double VAR_4 = VAR_2->x;
 double VAR_5 = VAR_2->y;
 VAR_4 = VAR_2->x;
 VAR_5 = VAR_2->y;
 VAR_1->x = VAR_4 * VAR_3[0] + VAR_5 * VAR_3[2] + VAR_3[4];
 VAR_1->y = VAR_4 * VAR_3[1] + VAR_5 * VAR_3[3] + VAR_3[5];
 return VAR_0;
}
