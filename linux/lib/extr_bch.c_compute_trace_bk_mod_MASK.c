
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gf_poly {int deg; int * c; } ;
struct bch_control {int cache; int * a_pow_tab; } ;


 int FUNC_0 (struct bch_control*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (struct bch_control*,struct gf_poly const*,int ) ;
 int FUNC_4 (struct bch_control*,struct gf_poly*,struct gf_poly const*,int ) ;
 int FUNC_5 (struct gf_poly*) ;
 int FUNC_6 (struct bch_control*,int ) ;
 int FUNC_7 (struct gf_poly*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct bch_control *VAR_0, int VAR_1,
     const struct gf_poly *VAR_2, struct gf_poly *VAR_3,
     struct gf_poly *VAR_4)
{
 const int VAR_5 = FUNC_0(VAR_0);
 int VAR_6, VAR_7;


 VAR_3->deg = 1;
 VAR_3->c[0] = 0;
 VAR_3->c[1] = VAR_0->a_pow_tab[VAR_1];

 VAR_4->deg = 0;
 FUNC_7(VAR_4, 0, FUNC_1(VAR_2->deg));


 FUNC_3(VAR_0, VAR_2, VAR_0->cache);

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {

  for (VAR_7 = VAR_3->deg; VAR_7 >= 0; VAR_7--) {
   VAR_4->c[VAR_7] ^= VAR_3->c[VAR_7];
   VAR_3->c[2*VAR_7] = FUNC_6(VAR_0, VAR_3->c[VAR_7]);
   VAR_3->c[2*VAR_7+1] = 0;
  }
  if (VAR_3->deg > VAR_4->deg)
   VAR_4->deg = VAR_3->deg;

  if (VAR_6 < VAR_5-1) {
   VAR_3->deg *= 2;

   FUNC_4(VAR_0, VAR_3, VAR_2, VAR_0->cache);
  }
 }
 while (!VAR_4->c[VAR_4->deg] && VAR_4->deg)
  VAR_4->deg--;

 FUNC_2("Tr(a^%d.X) mod f = %s\n", VAR_1, FUNC_5(VAR_4));
}
