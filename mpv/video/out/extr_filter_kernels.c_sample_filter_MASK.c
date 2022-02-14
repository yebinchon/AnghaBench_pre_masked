
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double radius; } ;
struct filter_kernel {int clamp; TYPE_1__ f; TYPE_1__ w; } ;


 double FUNC_0 (TYPE_1__*,double) ;

__attribute__((used)) static double FUNC_1(struct filter_kernel *VAR_0, double VAR_1)
{

    double VAR_2 = FUNC_0(&VAR_0->w, VAR_1 / VAR_0->f.radius * VAR_0->w.radius);
    double VAR_3 = VAR_2 * FUNC_0(&VAR_0->f, VAR_1);
    return VAR_3 < 0 ? (1 - VAR_0->clamp) * VAR_3 : VAR_3;
}
