
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gf_poly {int deg; scalar_t__* c; } ;
struct bch_control {int dummy; } ;


 int FUNC_0 (struct bch_control*) ;
 int FUNC_1 (struct bch_control*,scalar_t__) ;
 int FUNC_2 (struct bch_control*,int) ;

__attribute__((used)) static void FUNC_3(struct bch_control *VAR_0,
      const struct gf_poly *VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4 = VAR_1->deg, VAR_5 = FUNC_0(VAR_0)-FUNC_1(VAR_0, VAR_1->c[VAR_1->deg]);


 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  VAR_2[VAR_3] = VAR_1->c[VAR_3] ? FUNC_2(VAR_0, FUNC_1(VAR_0, VAR_1->c[VAR_3])+VAR_5) : -1;
}
