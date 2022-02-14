
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter_window {double (* weight ) (struct filter_window*,double) ;double blur; double taper; double radius; } ;


 double FUNC_0 (double) ;
 double FUNC_1 (struct filter_window*,double) ;

__attribute__((used)) static double FUNC_2(struct filter_window *VAR_0, double VAR_1)
{
    if (!VAR_0->weight)
        return 1.0;


    VAR_1 = FUNC_0(VAR_1);


    VAR_1 = VAR_0->blur > 0.0 ? VAR_1 / VAR_0->blur : VAR_1;
    VAR_1 = VAR_1 <= VAR_0->taper ? 0.0 : (VAR_1 - VAR_0->taper) / (1 - VAR_0->taper);

    if (VAR_1 < VAR_0->radius)
        return VAR_0->weight(VAR_0, VAR_1);
    return 0.0;
}
