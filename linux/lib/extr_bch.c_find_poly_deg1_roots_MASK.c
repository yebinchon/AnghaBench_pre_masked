
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gf_poly {int* c; } ;
struct bch_control {scalar_t__* a_log_tab; } ;


 scalar_t__ FUNC_0 (struct bch_control*) ;
 unsigned int FUNC_1 (struct bch_control*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct bch_control *VAR_0, struct gf_poly *VAR_1,
    unsigned int *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1->c[0])

  VAR_2[VAR_3++] = FUNC_1(VAR_0, FUNC_0(VAR_0)-VAR_0->a_log_tab[VAR_1->c[0]]+
       VAR_0->a_log_tab[VAR_1->c[1]]);
 return VAR_3;
}
