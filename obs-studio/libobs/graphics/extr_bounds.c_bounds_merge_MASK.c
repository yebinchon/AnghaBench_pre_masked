
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bounds {int max; int min; } ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;

void FUNC_2(struct bounds *VAR_0, const struct bounds *VAR_1,
    const struct bounds *VAR_2)
{
 FUNC_1(&VAR_0->min, &VAR_1->min, &VAR_2->min);
 FUNC_0(&VAR_0->max, &VAR_1->max, &VAR_2->max);
}
