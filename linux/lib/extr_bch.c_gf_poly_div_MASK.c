
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gf_poly {size_t deg; scalar_t__* c; } ;
struct bch_control {int dummy; } ;


 int FUNC_0 (struct bch_control*,struct gf_poly*,struct gf_poly const*,int *) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_2(struct bch_control *VAR_0, struct gf_poly *VAR_1,
   const struct gf_poly *VAR_2, struct gf_poly *VAR_3)
{
 if (VAR_1->deg >= VAR_2->deg) {
  VAR_3->deg = VAR_1->deg-VAR_2->deg;

  FUNC_0(VAR_0, VAR_1, VAR_2, ((void*)0));

  FUNC_1(VAR_3->c, &VAR_1->c[VAR_2->deg], (1+VAR_3->deg)*sizeof(unsigned int));
 } else {
  VAR_3->deg = 0;
  VAR_3->c[0] = 0;
 }
}
